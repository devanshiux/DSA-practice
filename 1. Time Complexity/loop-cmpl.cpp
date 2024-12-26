/*
What is the time, space complexity of following code :
Assume that rand() is O(1) time, O(1) space function.

CODE:
int a = 0, b = 0;
for (i = 0; i < N; i++) {
    a = a + rand();
}
for (j = 0; j < M; j++) {
    b = b + rand();
}

OPTIONS:
a. O(N * M) time, O(1) space
b. O(N + M) time, O(N + M) space
c. O(N + M) time, O(1) space
d. O(N * M) time, O(N + M) space
e. O(N * M) time, O(N * M) space

SOLUTION:
Correct option is (c.).

LOGIC:
here:
int a = 0, b = 0;          -> T(n) = 1, S(n) = 1
for (i = 0; i < N; i++) {  -> T(n) = N+1
    a = a + rand();        -> T(n) = N, s(n) = 1
}
for (j = 0; j < M; j++) {  -> T(n) = M+1
    b = b + rand();        -> T(n) = M, s(n) = 1
}

=> total running time = 1 + (N+1) + N + (M+1) + M
                      = 3 + 2N + 2M
                      = 2(N+M) + 3
=> Time complexity = O(N+M).

similarly,
total space = 1 + 1 + 1
            = 3
=> Space Complexity = O(1).
*/