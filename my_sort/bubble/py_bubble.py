#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse

parser = argparse.ArgumentParser(description='Process some integers.')
parser.add_argument('integers', metavar='N', type=int, nargs='+',
                    help='an integer for the accumulator')

args = parser.parse_args()
argv = args.integers #将参数的数字拷贝到列表中
#print(argv[2])

for i in range(len(argv)):
    for j in range(len(argv) -i -1):
      if(argv[j] > argv[j+1]):
          argv[j], argv[j+1] = argv[j+1], argv[j]

print(argv)     

