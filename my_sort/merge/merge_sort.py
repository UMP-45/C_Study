#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import argparse
import math

parser = argparse.ArgumentParser(description='Process some integers.')
parser.add_argument('integers', metavar='N', type=int, nargs='+',
                    help='an integer for the accumulator')

args = parser.parse_args()
argv = args.integers 

def merge_sort(arr):
    if(len(arr) < 2): return arr
    mid = math.floor(len(arr) / 2)
    left, right = arr[:mid], arr[mid:]
    return merge(merge_sort(left), merge_sort(right)) 

def merge(left, right):
    result = []
    while left and right:
        if left[0] <= right[0]:
            result.append(left.pop(0))
        else: 
            result.append(right.pop(0))
    while left:
        result.append(left.pop(0))
    while right:
        result.append(right.pop(0))
    return result

print(merge_sort(argv))