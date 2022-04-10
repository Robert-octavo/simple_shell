<h1 dir="auto">C - Simple Shell</h1>
<h2 dir="auto">Concepts</h2>
<p dir="auto">&nbsp;</p>
<div dir="auto">
<div dir="auto">
<p dir="auto">&nbsp; &nbsp; &nbsp; &nbsp; <em>For this project, students are expected to look at these concepts:</em>&nbsp; &nbsp; &nbsp;&nbsp;</p>
&nbsp; &nbsp; &nbsp;
<ul dir="auto">
<li>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <a href="https://intranet.hbtn.io/concepts/64" rel="nofollow">Everything you need to know to start coding your own shell</a>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</li>
<li>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <a href="https://intranet.hbtn.io/concepts/350" rel="nofollow">Approaching a Project</a>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</li>
</ul>
<h2 dir="auto">&nbsp;Resources</h2>
</div>
</div>
<p dir="auto"><strong>Read or watch</strong>:</p>
<ul dir="auto">
<li><a title="Unix shell" href="https://intranet.hbtn.io/rltoken/RsZhUQ_26du3YUYKXO3gXA" rel="nofollow">Unix shell</a>&nbsp;</li>
<li><a title="Thompson shell" href="https://intranet.hbtn.io/rltoken/CNhUqQ5TFpdvFGsd1Meyig" rel="nofollow">Thompson shell</a>&nbsp;</li>
<li><a title="Ken Thompson" href="https://intranet.hbtn.io/rltoken/G_kMmrcR7rm3uXsiVk1F0w" rel="nofollow">Ken Thompson</a>&nbsp;</li>
<li><strong>Everything you need to know to start coding your own shell</strong> concept page</li>
</ul>
<p dir="auto"><strong>man or help</strong>:&nbsp;</p>
<ul dir="auto">
<li><code>sh</code> (<em>Run <code>sh</code> as well</em>)</li>
</ul>
<h2 dir="auto">Learning Objectives</h2>
<p dir="auto">At the end of this project, you are expected to be able to <a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/J2Xchn4MO6tV6oZGCCtfQQ" rel="nofollow">explain to anyone</a>, <strong>without the help of Google</strong>:</p>
<h3 dir="auto">General</h3>
<ul dir="auto">
<li>Who designed and implemented the original Unix operating system</li>
<li>Who wrote the first version of the UNIX shell</li>
<li>Who invented the B programming language (the direct predecessor to the C programming language)</li>
<li>Who is Ken Thompson</li>
<li>How does a shell work</li>
<li>What is a pid and a ppid</li>
<li>How to manipulate the environment of the current process</li>
<li>What is the difference between a function and a system call</li>
<li>How to create processes</li>
<li>What are the three prototypes of <code>main</code></li>
<li>How does the shell use the <code>PATH</code> to find the programs</li>
<li>How to execute another program with the <code>execve</code> system call</li>
<li>How to suspend the execution of a process until one of its children terminates</li>
<li>What is <code>EOF</code> / &ldquo;end-of-file&rdquo;?</li>
</ul>
<h2 dir="auto">Requirements</h2>
<h3 dir="auto">General</h3>
<ul dir="auto">
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a title="betty-style.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl">betty-style.pl</a> and <a title="betty-doc.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl">betty-doc.pl</a></li>
<li>Your shell should not have any memory leaks</li>
<li>No more than 5 functions per file</li>
<li>All your header files should be include guarded</li>
<li>Use system calls only when you need to (<a title="why?" href="https://intranet.hbtn.io/rltoken/StgX3y26fwPNV_DqlZLErw" rel="nofollow">why?</a>)</li>
</ul>
<h3 dir="auto">GitHub</h3>
<p dir="auto"><strong>There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.</strong></p>
<h2 dir="auto">More Info</h2>
<h3 dir="auto">Output</h3>
<ul dir="auto">
<li>Unless specified otherwise, your program <strong>must have the exact same output</strong> as <code>sh</code> (<code>/bin/sh</code>) as well as the exact same error output.</li>
<li>The only difference is when you print an error, the name of the program must be equivalent to your <code>argv[0]</code> (See below)</li>
</ul>
<p dir="auto">Example of error with <code>sh</code>:</p>
<div class="snippet-clipboard-content position-relative overflow-auto">
<pre><code>$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
</code></pre>
</div>
<p dir="auto">Same error with your program <code>hsh</code>:</p>
<pre><code>$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
</code>&nbsp;</pre>
<h3 dir="auto">List of allowed functions and system calls</h3>
<ul dir="auto">
<li><code>access</code> (man 2 access)</li>
<li><code>chdir</code> (man 2 chdir)</li>
<li><code>close</code> (man 2 close)</li>
<li><code>closedir</code> (man 3 closedir)</li>
<li><code>execve</code> (man 2 execve)</li>
<li><code>exit</code> (man 3 exit)</li>
<li><code>_exit</code> (man 2 _exit)</li>
<li><code>fflush</code> (man 3 fflush)</li>
<li><code>fork</code> (man 2 fork)</li>
<li><code>free</code> (man 3 free)</li>
<li><code>getcwd</code> (man 3 getcwd)</li>
<li><code>getline</code> (man 3 getline)</li>
<li><code>getpid</code> (man 2 getpid)</li>
<li><code>isatty</code> (man 3 isatty)</li>
<li><code>kill</code> (man 2 kill)</li>
<li><code>malloc</code> (man 3 malloc)</li>
<li><code>open</code> (man 2 open)</li>
<li><code>opendir</code> (man 3 opendir)</li>
<li><code>perror</code> (man 3 perror)</li>
<li><code>read</code> (man 2 read)</li>
<li><code>readdir</code> (man 3 readdir)</li>
<li><code>signal</code> (man 2 signal)</li>
<li><code>stat</code> (__xstat) (man 2 stat)</li>
<li><code>lstat</code> (__lxstat) (man 2 lstat)</li>
<li><code>fstat</code> (__fxstat) (man 2 fstat)</li>
<li><code>strtok</code> (man 3 strtok)</li>
<li><code>wait</code> (man 2 wait)</li>
<li><code>waitpid</code> (man 2 waitpid)</li>
<li><code>wait3</code> (man 2 wait3)</li>
<li><code>wait4</code> (man 2 wait4)</li>
<li><code>write</code> (man 2 write)</li>
</ul>
<h3 dir="auto">Compilation</h3>
<p dir="auto">Your shell will be compiled this way:</p>
<div class="snippet-clipboard-content position-relative overflow-auto">
<pre><code>gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
</code></pre>
</div>
<h3 dir="auto">Testing</h3>
<p dir="auto">Your shell should work like this in interactive mode:</p>
<div class="snippet-clipboard-content position-relative overflow-auto">
<pre><code>$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
</code></pre>
</div>
<p dir="auto">But also in non-interactive mode:</p>
<div class="snippet-clipboard-content position-relative overflow-auto">
<pre><code>$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
</code></pre>
</div>
<h3 dir="auto">Authors</h3>
<h3 dir="auto"><a title="Matelo Alejandro L&oacute;pez Samac&aacute;" href="https://github.com/MateoAlejandro0331">Mateo Alejandro L&oacute;pez Samac&aacute;</a></h3>
<h3 dir="auto"><a title="Robert Ortega Octavo" href="https://github.com/Robert-octavo">Robert Ortega Octavo</a>&nbsp; </h3>
