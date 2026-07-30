<h2><a href="https://codeforces.com/contest/1614/problem/B" target="_blank" rel="noopener noreferrer">1614B — Divan and a New Project </a></h2>

| | |
|---|---|
| **Difficulty** | 1000 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1614B](https://codeforces.com/contest/1614/problem/B) |

## Topics
`constructive algorithms` `sortings`

---

## Problem Statement

<div class="header"><div class="title">B. Divan and a New Project </div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>The company "Divan's Sofas" is planning to build $$$n + 1$$$ different buildings on a coordinate line so that: </p><ul> <li> the coordinate of each building is an integer number; </li><li> no two buildings stand at the same point. </li></ul><p>Let $$$x_i$$$ be the coordinate of the $$$i$$$-th building. To get from the building $$$i$$$ to the building $$$j$$$, <span class="tex-font-style-it">Divan</span> spends $$$|x_i - x_j|$$$ minutes, where $$$|y|$$$ is the absolute value of $$$y$$$.</p><p>All buildings that <span class="tex-font-style-it">Divan</span> is going to build can be numbered from $$$0$$$ to $$$n$$$. The businessman will live in the building $$$0$$$, the new headquarters of "Divan's Sofas". In the first ten years after construction <span class="tex-font-style-it">Divan</span> will visit the $$$i$$$-th building $$$a_i$$$ times, each time spending $$$2 \cdot |x_0-x_i|$$$ minutes for walking.</p><p><span class="tex-font-style-it">Divan</span> asks you to choose the coordinates for all $$$n + 1$$$ buildings so that over the next ten years the businessman will spend as little time for walking as possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains several test cases. The first line contains one integer number $$$t$$$ ($$$1 \le t \le 10^3$$$) — the number of test cases.</p><p>The first line of each case contains an integer $$$n$$$ ($$$1 \le n \le 2 \cdot 10^5$$$) — the number of buildings that "Divan's Sofas" is going to build, apart from the headquarters.</p><p>The second line contains the sequence $$$a_1, a_2, \ldots, a_n$$$ ($$$0 \le a_i \le 10^6$$$), where $$$a_i$$$ is the number of visits to the $$$i$$$-th building.</p><p>It is guaranteed that the sum of $$$n$$$ over all test cases does not exceed $$$2 \cdot 10^5$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, on the first line print the number $$$T$$$ — the minimum time <span class="tex-font-style-it">Divan</span> will spend walking. </p><p>On the second line print the sequence $$$x_0, x_1, \ldots, x_n$$$ of $$$n + 1$$$ integers, where $$$x_i$$$ ($$$-10^6 \le x_i \le 10^6$$$) is the selected coordinate of the $$$i$$$-th building. It can be shown that an optimal answer exists with coordinates not exceeding $$$10^6$$$.</p><p>If there are multiple answers, print any of them.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id007581638728518142" id="id0012953409948778416" class="input-output-copier">Copy</div></div><pre id="id007581638728518142">4
3
1 2 3
5
3 8 10 6 1
5
1 1 1 1 1
1
0
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id005932350663509417" id="id0049693673595869725" class="input-output-copier">Copy</div></div><pre id="id005932350663509417">14
2 4 1 3
78
1 -1 0 2 3 4
18
3 6 1 5 2 4
0
1 2</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>Let's look at the first example.</p><p><span class="tex-font-style-it">Divan</span> will visit the first building $$$a_1 = 1$$$ times, the second $$$a_2 = 2$$$ times and the third $$$a_3 = 3$$$ times. Then one of the optimal solution will be as follows: </p><ol> <li> the headquarters is located in $$$x_0 = 2$$$; </li><li> $$$x_1 = 4$$$: <span class="tex-font-style-it">Divan</span> will spend $$$2 \cdot |x_0-x_1| \cdot a_1 = 2 \cdot |2-4| \cdot 1 = 4$$$ minutes walking to the first building; </li><li> $$$x_2 = 1$$$: <span class="tex-font-style-it">Divan</span> will spend $$$2 \cdot |x_0-x_2| \cdot a_2 = 2 \cdot |2-1| \cdot 2 = 4$$$ minutes walking to the second building; </li><li> $$$x_3 = 3$$$: <span class="tex-font-style-it">Divan</span> will spend $$$2 \cdot |x_0-x_3| \cdot a_3 = 2 \cdot |2-3| \cdot 3 = 6$$$ minutes walking to the third building. </li></ol><p>In total, <span class="tex-font-style-it">Divan</span> will spend $$$4 + 4 + 6 = 14$$$ minutes. It can be shown that it is impossible to arrange buildings so that the businessman spends less time.</p><p>Among others, $$$x = [1, 3, 2, 0]$$$, $$$x = [-5, -3, -6, -4]$$$ are also correct answers for the first example.</p></div>