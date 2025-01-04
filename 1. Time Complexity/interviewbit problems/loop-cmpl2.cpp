/*
What is the time complexity of the following code :

CODE:
int i, j, k = 0;
for (i = n/2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
         k = k + n/2;
    }
}

OPTIONS:
a. Θ(n)
b. Θ(nLogn)
c. Θ(n^2)
d. Θ(n^2 / Logn)
e. Θ(n^2Logn)

SOLUTION:
Correct option is (b.).

LOGIC:
here:
int i, j, k = 0;                     --> T(n) = 1, S(n) = 1;
for (i = n/2; i <= n; i++)           --> T(n) = n/2 + 1, S(n) = 0; (T(n) = O(n))
    for (j = 2; j <= n; j = j * 2) { --> T(n) = (n/2 + 1)log n, S(n) = 0; (T(n) = O(n(log n))
         k = k + n/2;                --> T(n) = 1, S(n) = 1;
    }
}

=> Time complexity = O(n) + O(n(log n)) = O(n(log n))

similarly,
total space = 1 + 1
            = 2
=> Space Complexity = O(1).
*/