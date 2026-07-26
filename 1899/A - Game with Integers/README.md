<h2><a href="https://codeforces.com/contest/1899/problem/A" target="_blank" rel="noopener noreferrer">1899A — Game with Integers</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1899A](https://codeforces.com/contest/1899/problem/A) |

## Topics
`games` `math` `number theory`

---

## Problem Statement

<div class="header"><div class="title">A. Game with Integers</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Vanya and Vova are playing a game. Players are given an integer $$$n$$$. On their turn, the player can add $$$1$$$ to the current integer or subtract $$$1$$$. The players take turns; Vanya starts. If <span class="tex-font-style-bf">after</span> Vanya's move the integer is divisible by $$$3$$$, then he wins. If $$$10$$$ moves have passed and Vanya has not won, then Vova wins.</p><p>Write a program that, based on the integer $$$n$$$, determines who will win if both players play optimally.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains the integer $$$t$$$ ($$$1 \leq t \leq 100$$$) — the number of test cases.</p><p>The single line of each test case contains the integer $$$n$$$ ($$$1 \leq n \leq 1000$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print "<span class="tex-font-style-tt">First</span>" without quotes if Vanya wins, and "<span class="tex-font-style-tt">Second</span>" without quotes if Vova wins.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id002690811230849668" id="id005760221550183534" class="input-output-copier">Copy</div></div><pre id="id002690811230849668"><div class="test-example-line test-example-line-even test-example-line-0">6</div><div class="test-example-line test-example-line-odd test-example-line-1">1</div><div class="test-example-line test-example-line-even test-example-line-2">3</div><div class="test-example-line test-example-line-odd test-example-line-3">5</div><div class="test-example-line test-example-line-even test-example-line-4">100</div><div class="test-example-line test-example-line-odd test-example-line-5">999</div><div class="test-example-line test-example-line-even test-example-line-6">1000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00493653878272886" id="id008510807717767375" class="input-output-copier">Copy</div></div><pre id="id00493653878272886">First
Second
First
First
Second
First
</pre></div></div></div>