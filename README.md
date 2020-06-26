# Floyds Shortest Path Algorithm

Problem Statement:

Implement Shortest Path Algorithm by using Floyd Warshall Algorithm, here the inputs are generated automatically i.e N value (NxN) dimension of matrix ranges from 5-10 and the values are from range 1-10(Reperesented in D-Matrix).
After the Shortest Path Evaluation updated values are shown in P-Matrix.
Further proof of the short path is shown below P-Matrix.
Use make file and ‘./output’ for ouput.

Output:
Selected N Value: 7

D Matrix:  

0	4	6	8	5	3	5	
4	0	4	8	3	4	5	
6	4	0	4	1	3	7	
8	8	4	0	5	6	5	
5	3	1	5	0	2	6	
3	4	3	6	2	0	4	
5	5	7	5	6	4	0	


P Matrix: 

0	0	4	0	0	0	0	
0	0	4	4	0	0	0	
4	4	0	0	0	4	4	
0	4	0	0	0	0	0	
0	0	0	0	0	0	0	
0	0	4	0	0	0	0	
0	0	4	0	0	0	0	


ALL PAIR SHORTEST PATH: 

For 0 -> 0 :: 0
For 0 -> 1 :: 0
For 0 -> 2 :: V0 V4 V2 :: 6
For 0 -> 3 :: 0
For 0 -> 4 :: 0
For 0 -> 5 :: 0
For 0 -> 6 :: 0

For 1 -> 0 :: 0
For 1 -> 1 :: 0
For 1 -> 2 :: V1 V4 V2 :: 4
For 1 -> 3 :: V1 V4 V3 :: 8
For 1 -> 4 :: 0
For 1 -> 5 :: 0
For 1 -> 6 :: 0

For 2 -> 0 :: V2 V4 V0 :: 6
For 2 -> 1 :: V2 V4 V1 :: 4
For 2 -> 2 :: 0
For 2 -> 3 :: 0
For 2 -> 4 :: 0
For 2 -> 5 :: V2 V4 V5 :: 3
For 2 -> 6 :: V2 V4 V6 :: 7

For 3 -> 0 :: 0
For 3 -> 1 :: V3 V4 V1 :: 8
For 3 -> 2 :: 0
For 3 -> 3 :: 0
For 3 -> 4 :: 0
For 3 -> 5 :: 0
For 3 -> 6 :: 0

For 4 -> 0 :: 0
For 4 -> 1 :: 0
For 4 -> 2 :: 0
For 4 -> 3 :: 0
For 4 -> 4 :: 0
For 4 -> 5 :: 0
For 4 -> 6 :: 0

For 5 -> 0 :: 0
For 5 -> 1 :: 0
For 5 -> 2 :: V5 V4 V2 :: 3
For 5 -> 3 :: 0
For 5 -> 4 :: 0
For 5 -> 5 :: 0
For 5 -> 6 :: 0

For 6 -> 0 :: 0
For 6 -> 1 :: 0
For 6 -> 2 :: V6 V4 V2 :: 7
For 6 -> 3 :: 0
For 6 -> 4 :: 0
For 6 -> 5 :: 0
For 6 -> 6 :: 0
