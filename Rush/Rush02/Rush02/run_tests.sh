#!/bin/bash

# Utility to run integration test
# Get arguments
PROG=$1
INPUT_DIR=$2
OUT_DIR=$3
EXPECTED_DIR=$4
TEST_NUM=$5  # Optional: specific test number to run

# Colors for output
GREEN='\033[0;32m'
RED='\033[0;31m'
NC='\033[0m' # No Color

# Function to run a single test
run_test() {
    local test_num=$1
    echo "Running test $test_num..."
    
    # Run the test taking as input the input from 
	# text file and output to the corresponding
     cat $INPUT_DIR/$test_num | xargs  ./$PROG > "$OUT_DIR/$test_num"
    
    # Compare with expected output
    if diff -q "$OUT_DIR/$test_num" "$EXPECTED_DIR/$test_num" >/dev/null; then
        echo -e "${GREEN}Test $test_num passed${NC}"
        return 0
    else
        echo -e "${RED}Test $test_num failed${NC}"
        echo "Differences:"
        diff -U 3 "$OUT_DIR/$test_num" "$EXPECTED_DIR/$test_num"
        return 1
    fi
}

# Run tests and track results
passed=0
failed=0

# If a specific test number is provided, run only that test
if [ ! -z "$TEST_NUM" ]; then
    if [ -f "$INPUT_DIR/$TEST_NUM" ]; then
        run_test "$TEST_NUM"
        exit $?
    else
        echo "Test $TEST_NUM not found!"
        exit 1
    fi
fi

# Run all tests in input directory
for input_file in "$INPUT_DIR"/*; do
    if [ -f "$input_file" ]; then
        test_num=$(basename "$input_file")
        if run_test "$test_num"; then
            ((passed++))
        else
            ((failed++))
        fi
        echo
    fi
done

# Print summary
total=$((passed + failed))
echo "Test Summary:"
echo -e "Passed: ${GREEN}$passed${NC}"
echo -e "Failed: ${RED}$failed${NC}"
echo "Total:  $total"

# Exit with failure if any test failed
[ $failed -eq 0 ] || exit 1
