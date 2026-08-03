<h2><a href="https://codeforces.com/contest/1362/problem/A" target="_blank" rel="noopener noreferrer">1362A — Johnny and Ancient Computer</a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1362A](https://codeforces.com/contest/1362/problem/A) |

## Topics
`implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Johnny and Ancient Computer</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Johnny has recently found an ancient, broken computer. The machine has only one register, which allows one to put in there one variable. Then in one operation, you can shift its bits left or right by at most three positions. The right shift is forbidden if it <span class="tex-font-style-bf">cuts off some ones</span>. So, in fact, in one operation, you can multiply or divide your number by $$$2$$$, $$$4$$$ or $$$8$$$, and division is only allowed if the number is divisible by the chosen divisor. </p><p>Formally, if the register contains a positive integer $$$x$$$, in one operation it can be replaced by one of the following: </p><ul> <li> $$$x \cdot 2$$$ </li><li> $$$x \cdot 4$$$ </li><li> $$$x \cdot 8$$$ </li><li> $$$x / 2$$$, if $$$x$$$ is divisible by $$$2$$$ </li><li> $$$x / 4$$$, if $$$x$$$ is divisible by $$$4$$$ </li><li> $$$x / 8$$$, if $$$x$$$ is divisible by $$$8$$$ </li></ul><p>For example, if $$$x = 6$$$, in one operation it can be replaced by $$$12$$$, $$$24$$$, $$$48$$$ or $$$3$$$. Value $$$6$$$ isn't divisible by $$$4$$$ or $$$8$$$, so there're only four variants of replacement.</p><p>Now Johnny wonders how many operations he needs to perform if he puts $$$a$$$ in the register and wants to get $$$b$$$ at the end.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The input consists of multiple test cases. The first line contains an integer $$$t$$$ ($$$1 \leq t \leq 1000$$$) — the number of test cases. The following $$$t$$$ lines contain a description of test cases.</p><p>The first and only line in each test case contains integers $$$a$$$ and $$$b$$$ ($$$1 \leq a, b \leq 10^{18}$$$) — the initial and target value of the variable, respectively.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Output $$$t$$$ lines, each line should contain one integer denoting the minimum number of operations Johnny needs to perform. If Johnny cannot get $$$b$$$ at the end, then write $$$-1$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007603723641809687" id="id0025966746338831237" class="input-output-copier">Copy</div></div><pre id="id007603723641809687">10
10 5
11 44
17 21
1 1
96 3
2 128
1001 1100611139403776
1000000000000000000 1000000000000000000
7 1
10 8
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id00321686203540121" id="id0037319040123081804" class="input-output-copier">Copy</div></div><pre id="id00321686203540121">1
1
-1
0
2
2
14
0
-1
-1
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, Johnny can reach $$$5$$$ from $$$10$$$ by using the shift to the right by one (i.e. divide by $$$2$$$).</p><p>In the second test case, Johnny can reach $$$44$$$ from $$$11$$$ by using the shift to the left by two (i.e. multiply by $$$4$$$).</p><p>In the third test case, it is impossible for Johnny to reach $$$21$$$ from $$$17$$$.</p><p>In the fourth test case, initial and target values are equal, so Johnny has to do $$$0$$$ operations.</p><p>In the fifth test case, Johnny can reach $$$3$$$ from $$$96$$$ by using two shifts to the right: one by $$$2$$$, and another by $$$3$$$ (i.e. divide by $$$4$$$ and by $$$8$$$).</p></div>