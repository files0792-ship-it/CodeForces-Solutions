<h2><a href="https://codeforces.com/contest/1610/problem/B" target="_blank" rel="noopener noreferrer">1610B — Kalindrome Array</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1610B](https://codeforces.com/contest/1610/problem/B) |

## Topics
`greedy` `two pointers`

---

## Problem Statement

<div class="header"><div class="title">B. Kalindrome Array</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>An array $$$[b_1, b_2, \ldots, b_m]$$$ is a palindrome, if $$$b_i = b_{m+1-i}$$$ for each $$$i$$$ from $$$1$$$ to $$$m$$$. Empty array is also a palindrome.</p><p>An array is called <span class="tex-font-style-bf">kalindrome</span>, if the following condition holds:</p><ul><li> <p>It's possible to select some integer $$$x$$$ and delete some of the elements of the array equal to $$$x$$$, so that the remaining array (after gluing together the remaining parts) is a palindrome. </p></li></ul><p>Note that you don't have to delete all elements equal to $$$x$$$, and you don't have to delete at least one element equal to $$$x$$$.</p><p>For example : </p><ul> <li> $$$[1, 2, 1]$$$ is kalindrome because you can simply not delete a single element. </li><li> $$$[3, 1, 2, 3, 1]$$$ is kalindrome because you can choose $$$x = 3$$$ and delete both elements equal to $$$3$$$, obtaining array $$$[1, 2, 1]$$$, which is a palindrome. </li><li> $$$[1, 2, 3]$$$ is not kalindrome. </li></ul><p>You are given an array $$$[a_1, a_2, \ldots, a_n]$$$. Determine if $$$a$$$ is kalindrome or not.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The description of the test cases follows.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the length of the array.</p><p>The second line of each test case contains $$$n$$$ integers $$$a_1, a_2, \ldots, a_n$$$ ($$$1 \le a_i \le n$$$) — elements of the array.</p><p>It's guaranteed that the sum of $$$n$$$ over all test cases won't exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, print <span class="tex-font-style-tt">YES</span> if $$$a$$$ is kalindrome and <span class="tex-font-style-tt">NO</span> otherwise. You can print each letter in any case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0015554138756535463" id="id009023103089643536" class="input-output-copier">Copy</div></div><pre id="id0015554138756535463">4
1
1
2
1 2
3
1 2 3
5
1 4 4 1 4
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005187709525175455" id="id000946737295788953" class="input-output-copier">Copy</div></div><pre id="id005187709525175455">YES
YES
NO
YES
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, array $$$[1]$$$ is already a palindrome, so it's a kalindrome as well.</p><p>In the second test case, we can choose $$$x = 2$$$, delete the second element, and obtain array $$$[1]$$$, which is a palindrome.</p><p>In the third test case, it's impossible to obtain a palindrome.</p><p>In the fourth test case, you can choose $$$x = 4$$$ and delete the fifth element, obtaining $$$[1, 4, 4, 1]$$$. You also can choose $$$x = 1$$$, delete the first and the fourth elements, and obtain $$$[4, 4, 4]$$$.</p></div>