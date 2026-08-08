<h2><a href="https://codeforces.com/contest/1826/problem/B" target="_blank" rel="noopener noreferrer">1826B — Lunatic Never Content</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1826B](https://codeforces.com/contest/1826/problem/B) |

## Topics
`math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">B. Lunatic Never Content</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have an array $$$a$$$ of $$$n$$$ non-negative integers. Let's define $$$f(a, x) = [a_1 \bmod x, a_2 \bmod x, \dots, a_n \bmod x]$$$ for some positive integer $$$x$$$. Find the biggest $$$x$$$, such that $$$f(a, x)$$$ is a palindrome.</p><p>Here, $$$a \bmod x$$$ is the remainder of the integer division of $$$a$$$ by $$$x$$$.</p><p>An array is a palindrome if it reads the same backward as forward. More formally, an array $$$a$$$ of length $$$n$$$ is a palindrome if for every $$$i$$$ ($$$1 \leq i \leq n$$$) $$$a_i = a_{n - i + 1}$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \leq t \leq 10^5$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \leq n \leq 10^5$$$).</p><p>The second line of each test case contains $$$n$$$ integers $$$a_i$$$ ($$$0 \leq a_i \leq 10^9$$$).</p><p>It's guaranteed that the sum of all $$$n$$$ does not exceed $$$10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case output the biggest $$$x$$$, such that $$$f(a, x)$$$ is a palindrome. If $$$x$$$ can be infinitely large, output $$$0$$$ instead.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id004928961574775942" id="id006800380468075236" class="input-output-copier">Copy</div></div><pre id="id004928961574775942"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">2</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">8</div><div class="test-example-line test-example-line-even test-example-line-2">3 0 1 2 0 3 2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-odd test-example-line-3">0</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">100 1 1000000000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007714878159994557" id="id006909661758288625" class="input-output-copier">Copy</div></div><pre id="id007714878159994557">1
2
0
999999900
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, $$$f(a, x = 1) = [0, 0]$$$ which is a palindrome.</p><p>In the second example, $$$f(a, x = 2) = [1, 0, 1, 0, 0, 1, 0, 1]$$$ which is a palindrome.</p><p>It can be proven that in the first two examples, no larger $$$x$$$ satisfies the condition.</p><p>In the third example, $$$f(a, x) = [0]$$$ for any $$$x$$$, so we can choose it infinitely large, so the answer is $$$0$$$.</p></div>