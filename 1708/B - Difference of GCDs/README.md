<h2><a href="https://codeforces.com/contest/1708/problem/B" target="_blank" rel="noopener noreferrer">1708B — Difference of GCDs</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1708B](https://codeforces.com/contest/1708/problem/B) |

## Topics
`constructive algorithms` `math`

---

## Problem Statement

<div class="header"><div class="title">B. Difference of GCDs</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given three integers $$$n$$$, $$$l$$$, and $$$r$$$. You need to construct an array $$$a_1,a_2,\dots,a_n$$$ ($$$l\le a_i\le r$$$) such that $$$\gcd(i,a_i)$$$ are all distinct or report there's no solution.</p><p>Here $$$\gcd(x, y)$$$ denotes the <a href="https://en.wikipedia.org/wiki/Greatest_common_divisor">greatest common divisor (GCD)</a> of integers $$$x$$$ and $$$y$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains a single integer $$$t$$$ ($$$1\le t\le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line contains three integers $$$n$$$, $$$l$$$, $$$r$$$ ($$$1 \le n \le 10^5$$$, $$$1\le l\le r\le 10^9$$$).</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, if there is no solution, print "<span class="tex-font-style-tt">NO</span>" (without quotes). You can print letters in any case (upper or lower).</p><p>Otherwise, print "<span class="tex-font-style-tt">YES</span>" (without quotes). In the next line, print $$$n$$$ integers $$$a_1,a_2,\ldots,a_n$$$ — the array you construct.</p><p>If there are multiple solutions, you may output any.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00947093771003157" id="id0001275376710538334" class="input-output-copier">Copy</div></div><pre id="id00947093771003157">4
5 1 5
9 1000 2000
10 30 35
1 1000000000 1000000000
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007185786307963581" id="id00040644641543194915" class="input-output-copier">Copy</div></div><pre id="id007185786307963581">YES
1 2 3 4 5
YES
1145 1926 1440 1220 1230 1350 1001 1000 1233
NO
YES
1000000000
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, $$$\gcd(1,a_1),\gcd(2,a_2),\ldots,\gcd(5,a_5)$$$ are equal to $$$1$$$, $$$2$$$, $$$3$$$, $$$4$$$, $$$5$$$, respectively.</p></div>