#!/usr/bin/env bash

project_name='prog3_unit2_single_linked_list_v2023_1'
source_code='
        single_linked_list.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}