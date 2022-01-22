/*****************************************************************//**
 * \file   splayTree.c
 * \brief  伸展树，它保证从空树开始任意连续M次对树的操作最多花费O(MlogN)时间
 *				虽然这种保证并不能排除任意单次操作花费O(N)时间的可能，但这样的界
 *				也不如每次操作最坏情形的界为O(logN)那么短，但是实际效果是差不多
 *				的：不存在不好的输入序列
 *			实例：B树 B+树 红黑树
 * 
 * \author 32353
 * \date   December 2020-12-12 __TIME__ 
 *********************************************************************/