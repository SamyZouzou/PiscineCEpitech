#!/bin/bash
while [ -z $name ]
do
    read -p "Repo name: " name
    blih -u samy.rafraf@epitech.eu repository create $name
    blih -u samy.rafraf@epitech.eu repository setacl $name ramassage-tek r
    blih -u samy.rafraf@epitech.eu repository setacl $name gecko r
    blih -u samy.rafraf@epitech.eu repository getacl $name
    git clone git@git.epitech.eu:/samy.rafraf@epitech.eu/$name
done