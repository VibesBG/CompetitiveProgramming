# CompetitiveProgramming

My solutions from the Competitive Programming course (2nd year, 2025/26), lab exercises and olympiad problems.
Most programs are C++17; the Catalan number tasks are in Java. Problem statements, where I had them, are in Bulgarian at the top of each file.

Build any program with:

```sh
g++ -std=c++17 -O2 file.cpp -o file
```

## Contents

| Folder | Topic |
|---|---|
| [`patterns/`](patterns) | Printing number patterns with loops |
| [`interview/`](interview) | Classic job-interview problems |
| [`stl/`](stl) | STL containers and algorithms |
| [`dynamic-programming/`](dynamic-programming) | Dynamic programming |
| [`binary-search/`](binary-search) | Binary search on arrays and answers |
| [`combinatorics/`](combinatorics) | Generating combinations |
| [`olympiad/`](olympiad) | Olympiad problems |

### Patterns

| File | Problem | Date |
|---|---|---|
| [01-ascending-rows-1-to-6.cpp](patterns/01-ascending-rows-1-to-6.cpp) | Shrinking then growing rows of 1..6 | Oct 2025 |
| [02-growing-rows-to-11.cpp](patterns/02-growing-rows-to-11.cpp) | Diamond of consecutive numbers up to 11 | Oct 2025 |
| [03-even-numbers-to-10.cpp](patterns/03-even-numbers-to-10.cpp) | Same shape with even numbers up to 10 | Oct 2025 |
| [04-ascending-rows-0-to-5.cpp](patterns/04-ascending-rows-0-to-5.cpp) | Shrinking then growing rows of 0..5 | Oct 2025 |
| [05-zero-prefixes.cpp](patterns/05-zero-prefixes.cpp) | Rows 0..k, shrinking then growing | Nov 2025 |
| [06-repeated-digit-rows.cpp](patterns/06-repeated-digit-rows.cpp) | Rows of a repeated digit | Nov 2025 |
| [07-number-triangle.cpp](patterns/07-number-triangle.cpp) | Number triangle 1..6 | Nov 2025 |

### Interview problems

| File | Problem | Technique | Date |
|---|---|---|---|
| [repeated-number.cpp](interview/repeated-number.cpp) | The one repeated number among 1..N-1 | Sum formula | Oct 2025 |
| [repeated-number-array.cpp](interview/repeated-number-array.cpp) | Same, storing the input in an array | Sum formula | Oct 2025 |
| [missing-number.cpp](interview/missing-number.cpp) | Missing number among 1..N | Sum formula | Oct 2025 |
| [prime-factors.cpp](interview/prime-factors.cpp) | Prime factorisation | Trial division | Oct 2025 |
| [decimal-to-roman.cpp](interview/decimal-to-roman.cpp) | Decimal to Roman numerals | Lookup tables | Oct 2025 |
| [roman-to-decimal.cpp](interview/roman-to-decimal.cpp) | Roman numerals to decimal | Compare with next symbol | Nov 2025 |
| [balanced-parentheses.cpp](interview/balanced-parentheses.cpp) | Are the brackets balanced? | Counter | Nov 2025 |
| [balanced-parentheses-exit-code.cpp](interview/balanced-parentheses-exit-code.cpp) | Same, answer returned as exit code | Counter | Nov 2025 |
| [activity-selection.cpp](interview/activity-selection.cpp) | Max number of non-overlapping events | Greedy by end time | Nov 2025 |
| [clock-hands-angle.cpp](interview/clock-hands-angle.cpp) | Angle between clock hands | Math | Dec 2025 |
| [first-missing-positive.cpp](interview/first-missing-positive.cpp) | First missing positive integer | In-place cyclic swaps | Mar 2026 |
| [missing-number-sorted.cpp](interview/missing-number-sorted.cpp) | Missing number in sorted 0..N | Binary search | Mar 2026 |
| [remove-duplicates-sorted.cpp](interview/remove-duplicates-sorted.cpp) | Remove duplicates from a sorted array | Two pointers | Mar 2026 |
| [two-largest-repeated.cpp](interview/two-largest-repeated.cpp) | Two largest numbers that occur at least twice | Sorting | Mar 2026 |
| [running-median.cpp](interview/running-median.cpp) | Median of a stream | Two heaps | Apr 2026 |

### STL

| File | Problem | Container | Date |
|---|---|---|---|
| [string-to-id-unordered-map.cpp](stl/string-to-id-unordered-map.cpp) | Assign an id to each distinct string | `unordered_map` | Dec 2025 |
| [sliding-window-max-deque.cpp](stl/sliding-window-max-deque.cpp) | Maximum of every window of size K | `deque` | Dec 2025 |
| [kth-largest-priority-queue.cpp](stl/kth-largest-priority-queue.cpp) | K-th largest element | `priority_queue` | Dec 2025 |
| [restaurant-queue-simulation.cpp](stl/restaurant-queue-simulation.cpp) | Restaurant service simulation | `queue` | Dec 2025 |
| [set-operations-bitset.cpp](stl/set-operations-bitset.cpp) | Union, intersection, difference of sets | `bitset` | Dec 2025 |
| [remove-duplicates-list.cpp](stl/remove-duplicates-list.cpp) | Remove duplicates, keep first occurrence | `list` | Jan 2026 |
| [remove-all-forward-list.cpp](stl/remove-all-forward-list.cpp) | Remove every occurrence of a value | `forward_list` | Jan 2026 |
| [sum-and-max-algorithms.cpp](stl/sum-and-max-algorithms.cpp) | Sum and maximum of an array | `accumulate`, `max_element` | Jan 2026 |

### Dynamic programming

| File | Problem | Date |
|---|---|---|
| [compositions-count.cpp](dynamic-programming/compositions-count.cpp) | Ordered sums of N | Feb 2026 |
| [domino-tiling-2xN-recursion.cpp](dynamic-programming/domino-tiling-2xN-recursion.cpp) | Domino tilings of a 2xN board, plain recursion | Mar 2026 |
| [domino-tiling-2xN-memo-array.cpp](dynamic-programming/domino-tiling-2xN-memo-array.cpp) | Same, memoised in a global array | Mar 2026 |
| [domino-tiling-2xN-memo-map.cpp](dynamic-programming/domino-tiling-2xN-memo-map.cpp) | Same, memoised in a `map` | Mar 2026 |
| [sum-of-1-and-2.cpp](dynamic-programming/sum-of-1-and-2.cpp) | Ways to write N as an ordered sum of 1s and 2s | Mar 2026 |
| [sum-of-1-2-and-3.cpp](dynamic-programming/sum-of-1-2-and-3.cpp) | Same with 1, 2 and 3 | Mar 2026 |
| [ordered-sums.cpp](dynamic-programming/ordered-sums.cpp) | Ordered sums of N in O(N²) | Mar 2026 |
| [max-subarray-sum.cpp](dynamic-programming/max-subarray-sum.cpp) | Maximum subarray sum (Kadane) | Mar 2026 |
| [bottles-no-two-adjacent.cpp](dynamic-programming/bottles-no-two-adjacent.cpp) | Max liquid without drinking from two adjacent bottles | Mar 2026 |
| [magic-barrels.cpp](dynamic-programming/magic-barrels.cpp) | Magic Barrels (same idea, several tests) | Mar 2026 |
| [grid-paths-with-obstacles.cpp](dynamic-programming/grid-paths-with-obstacles.cpp) | Number of grid paths avoiding blocked cells | Mar 2026 |
| [grid-paths-with-obstacles-multitest.cpp](dynamic-programming/grid-paths-with-obstacles-multitest.cpp) | Same, several tests | Mar 2026 |
| [grid-max-sum-up-right.cpp](dynamic-programming/grid-max-sum-up-right.cpp) | Max sum path from bottom-left to top-right | Mar 2026 |
| [grid-max-sum-with-diagonal.cpp](dynamic-programming/grid-max-sum-with-diagonal.cpp) | Max sum path from the bottom row to the last column, diagonal moves allowed | Mar 2026 |
| [grid-max-sum-rolling-array.cpp](dynamic-programming/grid-max-sum-rolling-array.cpp) | Max sum path with a single-row DP array | Apr 2026 |
| [compositions-power-of-two.cpp](dynamic-programming/compositions-power-of-two.cpp) | Number of compositions of N = 2^(N-1) | Apr 2026 |
| [zigzag-numbers.cpp](dynamic-programming/zigzag-numbers.cpp) | N-digit numbers with alternating up/down digits | Apr 2026 |
| [partitions-into-smaller-parts.cpp](dynamic-programming/partitions-into-smaller-parts.cpp) | Partitions of N into parts smaller than N | Apr 2026 |
| [integer-partitions.cpp](dynamic-programming/integer-partitions.cpp) | Number of integer partitions | Apr 2026 |
| [domino-tiling-3xN.cpp](dynamic-programming/domino-tiling-3xN.cpp) | Domino tilings of a 3xN board | Apr 2026 |
| [domino-tiling-3xN-multitest.cpp](dynamic-programming/domino-tiling-3xN-multitest.cpp) | Same, precomputed for several tests | Apr 2026 |
| [interval-merge-cost.cpp](dynamic-programming/interval-merge-cost.cpp) | Minimum cost to merge a sequence (interval DP) | Apr 2026 |
| [coin-change.cpp](dynamic-programming/coin-change.cpp) | Fewest coins to make an amount | Apr 2026 |
| [knapsack-01.cpp](dynamic-programming/knapsack-01.cpp) | 0/1 knapsack | Apr 2026 |
| [catalan/](dynamic-programming/catalan) | Catalan numbers in Java: DP (`Lab_7_1`) and `BigInteger` formula (`Lab_7_2`–`Lab_7_4`) | Apr 2026 |

### Binary search

| File | Problem | Date |
|---|---|---|
| [guess-the-number-interactive.cpp](binary-search/guess-the-number-interactive.cpp) | Guess a number 1..1000 from "up"/"down" answers | May 2026 |
| [guess-the-number-api.cpp](binary-search/guess-the-number-api.cpp) | Same with a `guess(x)` function | May 2026 |
| [lower-bound.cpp](binary-search/lower-bound.cpp) | First element ≥ X in a sorted array | May 2026 |
| [cube-root.cpp](binary-search/cube-root.cpp) | Cube root of a real number | May 2026 |
| [polynomial-root.cpp](binary-search/polynomial-root.cpp) | A root of a 5th-degree polynomial | May 2026 |
| [find-in-sorted-array.cpp](binary-search/find-in-sorted-array.cpp) | Position of X in a sorted array | May 2026 |

### Combinatorics

| File | Problem | Date |
|---|---|---|
| [choose-k-names.cpp](combinatorics/choose-k-names.cpp) | All teams of K out of N names, in lexicographic order | Dec 2025 |

### Olympiad

| File | Problem | Technique | Date |
|---|---|---|---|
| [itinerary-WIP.cpp](olympiad/itinerary-WIP.cpp) | Itinerary (unfinished, input reading only) | — | Oct 2025 |
| [wall-longest-path.cpp](olympiad/wall-longest-path.cpp) | Highest wall of stacked stones | Memoised DFS on a DAG | Oct 2025 |
| [help-nearest-ship.cpp](olympiad/help-nearest-ship.cpp) | Which ship reaches the distress signal first | Geometry | Oct 2025 |
| [tower-monotonic-stack.cpp](olympiad/tower-monotonic-stack.cpp) | Tower: longest chain of buildings below height H | Monotonic stack | Oct 2025 |
| [explorers-dijkstra.cpp](olympiad/explorers-dijkstra.cpp) | Shortest route for the explorers | Dijkstra | Nov 2025 |
| [report-previous-smaller.cpp](olympiad/report-previous-smaller.cpp) | Previous smaller element for each position | Monotonic stack | Nov 2025 |
| [three-triangles.cpp](olympiad/three-triangles.cpp) | Triangles with distinct side lengths | Brute force | Dec 2025 |
| [euklid-gcd.cpp](olympiad/euklid-gcd.cpp) | Greatest common divisor | Euclid's algorithm | Dec 2025 |
| [matrix-concentric-layers.cpp](olympiad/matrix-concentric-layers.cpp) | Matrix of concentric squares | Layer index | Dec 2025 |
| [triangle-fill.cpp](olympiad/triangle-fill.cpp) | Fill the triangles under and above the diagonal | Simulation | Dec 2025 |
| [birthday-triangle-from-heights.cpp](olympiad/birthday-triangle-from-heights.cpp) | Triangle sides from its three heights | Heron's formula | Dec 2025 |
| [roman-num-rearrange.cpp](olympiad/roman-num-rearrange.cpp) | Rearrange symbols into a valid Roman numeral | Brute force | Dec 2025 |
| [division-triangle-median.cpp](olympiad/division-triangle-median.cpp) | Length of a triangle median | Median formula | Dec 2025 |
| [on-the-dance.cpp](olympiad/on-the-dance.cpp) | Arrangements in a circle | (n-1)! | Dec 2025 |
| [spiral-fill.cpp](olympiad/spiral-fill.cpp) | Fill a matrix in a spiral | Simulation | Dec 2025 |
| [team-combinations.cpp](olympiad/team-combinations.cpp) | Ways to choose a dance team | Binomial coefficients | Dec 2025 |
