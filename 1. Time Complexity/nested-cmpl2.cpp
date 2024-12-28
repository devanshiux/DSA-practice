/*
What is the time complexity of the following code :

CODE:
int a = 0;
for (i = 0; i < N; i++) {
    for (j = N; j > i; j--) {
        a = a + i + j;
    }
}

OPTIONS:
a. O(N)
b. O(N*log(N))
c. O(N * Sqrt(N))
d. O(N*N)

SOLUTION:
Correct option is (d.).

LOGIC:
here:
int a = 0;                    --> T(n) = 1, S(n) = 1;
for (i = 0; i < N; i++) {     --> T(n) = (N), S(n) = 0;
    for (j = N; j > i; j--) { --> T(n) = (N-i), S(n) = 0;
        a = a + i + j;        --> T(n) = 1, S(n) = 1;
    }
}

=> total running time = 1 + (N-1) + N/2(N-1)
                      = N^2/2 + N/2
=> Time complexity = O(N*N).

similarly,
total space = 1 + 1
            = 2
=> Space Complexity = O(1).
*/