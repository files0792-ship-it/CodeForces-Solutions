<h2><a href="https://codeforces.com/contest/1352/problem/A" target="_blank" rel="noopener noreferrer">1352A — Sum of Round Numbers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1352A](https://codeforces.com/contest/1352/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Sum of Round Numbers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>A positive (strictly greater than zero) integer is called <span class="tex-font-style-it">round</span> if it is of the form <span class="tex-font-style-tt">d00...0</span>. In other words, a positive integer is round if all its digits except the leftmost (most significant) are equal to zero. In particular, all numbers from $$$1$$$ to $$$9$$$ (inclusive) are round.</p><p>For example, the following numbers are round: $$$4000$$$, $$$1$$$, $$$9$$$, $$$800$$$, $$$90$$$. The following numbers are <span class="tex-font-style-bf">not</span> round: $$$110$$$, $$$707$$$, $$$222$$$, $$$1001$$$.</p><p>You are given a positive integer $$$n$$$ ($$$1 \le n \le 10^4$$$). Represent the number $$$n$$$ as a sum of round numbers using the minimum number of summands (addends). In other words, you need to represent the given number $$$n$$$ as a sum of the least number of terms, each of which is a round number.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases in the input. Then $$$t$$$ test cases follow.</p><p>Each test case is a line containing an integer $$$n$$$ ($$$1 \le n \le 10^4$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ answers to the test cases. Each answer must begin with an integer $$$k$$$ — the minimum number of summands. Next, $$$k$$$ terms must follow, each of which is a round number, and their sum is $$$n$$$. The terms can be printed in any order. If there are several answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id005579814152630709" id="id0045018009266337355" class="input-output-copier">Copy</div></div><pre id="id005579814152630709">5
5009
7
9876
10000
10
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005204289443933707" id="id007749590898802659" class="input-output-copier">Copy</div></div><pre id="id005204289443933707">2
5000 9
1
7 
4
800 70 6 9000 
1
10000 
1
10 
</pre></div></div></div>