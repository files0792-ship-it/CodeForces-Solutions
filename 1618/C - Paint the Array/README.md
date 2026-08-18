<h2><a href="https://codeforces.com/contest/1618/problem/C" target="_blank" rel="noopener noreferrer">1618C — Paint the Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1618C](https://codeforces.com/contest/1618/problem/C) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">C. Paint the Array</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given an array $$$a$$$ consisting of $$$n$$$ positive integers. You have to choose a positive integer $$$d$$$ and paint all elements into two colors. All elements which are divisible by $$$d$$$ will be painted red, and all other elements will be painted blue.</p><p>The coloring is called beautiful if there are no pairs of adjacent elements with the same color in the array. Your task is to find any value of $$$d$$$ which yields a beautiful coloring, or report that it is impossible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of testcases.</p><p>The first line of each testcase contains one integer $$$n$$$ ($$$2 \le n \le 100$$$) — the number of elements of the array.</p><p>The second line of each testcase contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^{18}$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each testcase print a single integer. If there is no such value of $$$d$$$ that yields a beautiful coloring, print $$$0$$$. Otherwise, print any suitable value of $$$d$$$ ($$$1 \le d \le 10^{18}$$$).</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00556449264974142" id="id006129124407967448" class="input-output-copier">Copy</div></div><pre id="id00556449264974142">5
5
1 2 3 4 5
3
10 5 15
3
100 10 200
10
9 8 2 6 6 2 8 6 5 4
2
1 3
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id008317105727363405" id="id009288410958887731" class="input-output-copier">Copy</div></div><pre id="id008317105727363405">2
0
100
0
3
</pre></div></div></div>