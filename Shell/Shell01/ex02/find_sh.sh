#!/bin/sh

find . -type f -name "*.sh" -exec basename {} .sh \;

#find: Busca en el directori on estem
#-type f: mira nomes arxius
#-name : mira com son els archius que volem obtenir
#elimina la extension 

