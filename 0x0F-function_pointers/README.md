<main>
        <div id="layout-bars">





        </div>

      <article class="">


<div class="project row">
  <div class="col-xs-12 col-md-10 col-lg-8 contains-images">

      <h1 class="gap">0x0F. C - Function pointers</h1>

  <div data-react-class="tags/Tags" data-react-props="{&quot;tags&quot;:[{&quot;id&quot;:7,&quot;value&quot;:&quot;C&quot;,&quot;author_id&quot;:null,&quot;created_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;,&quot;updated_at&quot;:&quot;2022-06-16T01:59:38.000Z&quot;}]}" data-react-cache-id="tags/Tags-0"></div>

  <div data-react-class="projects/ProjectMetadata" data-react-props="{&quot;metadata&quot;:{&quot;author&quot;:&quot;Alexandre Gautier&quot;,&quot;weight&quot;:1,&quot;correction&quot;:{&quot;released&quot;:false,&quot;auto_correction_available_at&quot;:&quot;2023-03-22T12:00:00.000+01:00&quot;,&quot;requires_auto_correction&quot;:true,&quot;requires_manual_correction&quot;:false},&quot;bpi&quot;:{&quot;current&quot;:true,&quot;started&quot;:false,&quot;in_second_deadline&quot;:false,&quot;starts_at&quot;:&quot;2023-03-22T06:00:00.000+01:00&quot;,&quot;ends_at&quot;:&quot;2023-03-23T06:00:00.000+01:00&quot;,&quot;second_deadline_at&quot;:&quot;2023-03-25T06:00:00.000+01:00&quot;}}}" data-react-cache-id="projects/ProjectMetadata-0"></div>







    <div id="project_id" style="display: none" data-project-id="226"></div>







      <div class="panel panel-default" id="project-description">
  <div class="panel-body">
    <h2>Resources</h2>

<p><strong>Read or watch</strong>:</p>

<ul>
<li><a href="/rltoken/yt8Q9jxzT_gyRAvnNkAgkw" title="Function Pointer in C" target="_blank">Function Pointer in C</a> </li>
<li><a href="/rltoken/wP-yWvo9IqbcQsywMmh_iQ" title="Pointers to functions" target="_blank">Pointers to functions</a> </li>
<li><a href="/rltoken/dAN27S1yyBPeBa8RGfvPNA" title="Function Pointers in C / C++" target="_blank">Function Pointers in C / C++</a> </li>
<li><a href="/rltoken/1vvWpH9Ux8axOLc9jPWcMw" title="why pointers to functions?" target="_blank">why pointers to functions?</a> </li>
<li><a href="/rltoken/G_0lQzs4LAd1e5tKhNMPiw" title="Everything you need to know about pointers in C" target="_blank">Everything you need to know about pointers in C</a> </li>
</ul>

<h2>Learning Objectives</h2>

<p>At the end of this project, you are expected to be able to <a href="/rltoken/ITYG4BLMI4_5Unpdwue2tw" title="explain to anyone" target="_blank">explain to anyone</a>, <strong>without the help of Google</strong>:</p>

<h3>General</h3>

<ul>
<li>What are function pointers and how to use them</li>
<li>What does a function pointer exactly hold</li>
<li>Where does a function pointer point to in the virtual memory</li>
</ul>

<h3>Copyright - Plagiarism</h3>

<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else&rsquo;s work. </li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>

<h2>Requirements</h2>

<h3>General</h3>

<ul>
<li>Allowed editors: <code>vi</code>, <code>vim</code>, <code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using <code>gcc</code>, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the <code>Betty</code> style. It will be checked using <a href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" title="betty-style.pl" target="_blank">betty-style.pl</a> and <a href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" title="betty-doc.pl" target="_blank">betty-doc.pl</a></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc</code>, <code>free</code> and <code>exit</code>. Any use of functions like <code>printf</code>, <code>puts</code>, <code>calloc</code>, <code>realloc</code> etc&hellip; is forbidden</li>
<li>You are allowed to use <a href="https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c" title="_putchar" target="_blank">_putchar</a></li>
<li>You don&rsquo;t have to push <code>_putchar.c</code>, we will use our file. If you do it won&rsquo;t be taken into account</li>
<li>In the following examples, the <code>main.c</code> files are shown as examples. You can use them to test your functions, but you don&rsquo;t have to push them to your repo (if you do we won&rsquo;t take them into account). We will use our own <code>main.c</code> files at compilation. Our <code>main.c</code> files might be different from the one shown in the examples</li>
<li>The prototypes of all your functions and the prototype of the function <code>_putchar</code> should be included in your header file called <code>function_pointers.h</code></li>
<li>Don&rsquo;t forget to push your header file</li>
<li>All your header files should be include guarded</li>
</ul>

  </div>
</div>




        <div class="panel panel-default" id="project-quiz-questions-title">
    <div class="panel-heading">
      <h3 class="panel-title">
        Quiz questions
      </h3>
    </div>

    <div class="panel-body">

        <div class="alert alert-info">
          <strong>Great!</strong>
          You've completed the quiz successfully! Keep going!
          <span id="quiz_questions_collapse_toggle"></span>
        </div>

      <section class="quiz_questions_show_container">
          <div class="quiz_question_item_container" data-role="quiz_question511" data-position="1">
            <div class=" clearfix" id="quiz_question-511">

    <h4 class="quiz_question">

        Question #0
    </h4>

    <!-- Quiz question Body -->
    <p>Which one is a pointer to a function?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="511">
                <li class="">

  <input type="radio" name="511" id="511-1508304692616" value="1508304692616" data-quiz-answer-id="1508304692616" data-quiz-question-id="511" disabled="disabled" />
  <label for="511-1508304692616"><p>int func(int a, float b);</p>
</label>
</li>

                <li class="">

  <input type="radio" name="511" id="511-1508304722369" value="1508304722369" data-quiz-answer-id="1508304722369" data-quiz-question-id="511" disabled="disabled" />
  <label for="511-1508304722369"><p>(int *)func(int a, float b);</p>
</label>
</li>

                <li class="">

  <input type="radio" name="511" id="511-1508304715133" value="1508304715133" data-quiz-answer-id="1508304715133" data-quiz-question-id="511" disabled="disabled" checked="checked" />
  <label for="511-1508304715133"><p>int (*func)(int a, float b);</p>
</label>
</li>

                <li class="">

  <input type="radio" name="511" id="511-1508304707385" value="1508304707385" data-quiz-answer-id="1508304707385" data-quiz-question-id="511" disabled="disabled" />
  <label for="511-1508304707385"><p>int *func(int a, float b);</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question515" data-position="5">
            <div class=" clearfix" id="quiz_question-515">

    <h4 class="quiz_question">

        Question #1
    </h4>

    <!-- Quiz question Body -->
    <p>What does a pointer to a function point to (check all correct answers if there is more than one)?</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="515">
                <li class="">

  <input type="checkbox" name="515" id="515-1508305748476" value="1508305748476" data-quiz-answer-id="1508305748476" data-quiz-question-id="515" disabled="disabled" />
  <label for="515-1508305748476"><p>data</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="515" id="515-1508305784505" value="1508305784505" data-quiz-answer-id="1508305784505" data-quiz-question-id="515" disabled="disabled" checked="checked" />
  <label for="515-1508305784505"><p>The first byte of code of the function</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="515" id="515-1508305771886" value="1508305771886" data-quiz-answer-id="1508305771886" data-quiz-question-id="515" disabled="disabled" />
  <label for="515-1508305771886"><p>The first character of the name of the function</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="515" id="515-1508305764393" value="1508305764393" data-quiz-answer-id="1508305764393" data-quiz-question-id="515" disabled="disabled" checked="checked" />
  <label for="515-1508305764393"><p>code</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question513" data-position="3">
            <div class=" clearfix" id="quiz_question-513">

    <h4 class="quiz_question">

        Question #2
    </h4>

    <!-- Quiz question Body -->
    <p>If <code>f</code> is a pointer to a function that takes no parameter and returns an <code>int</code>, you can call the function pointed by <code>f</code> this way (check all correct answers if there is more than one):</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="513">
                <li class="">

  <input type="checkbox" name="513" id="513-1508305404563" value="1508305404563" data-quiz-answer-id="1508305404563" data-quiz-question-id="513" disabled="disabled" />
  <label for="513-1508305404563"><p>f;</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="513" id="513-1508305363160" value="1508305363160" data-quiz-answer-id="1508305363160" data-quiz-question-id="513" disabled="disabled" checked="checked" />
  <label for="513-1508305363160"><p>f();</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="513" id="513-1508305374287" value="1508305374287" data-quiz-answer-id="1508305374287" data-quiz-question-id="513" disabled="disabled" checked="checked" />
  <label for="513-1508305374287"><p>(*f)();</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question512" data-position="2">
            <div class=" clearfix" id="quiz_question-512">

    <h4 class="quiz_question">

        Question #3
    </h4>

    <!-- Quiz question Body -->
    <p>To store the address of this function:</p>

<pre><code>void neyo(void);
</code></pre>

<p>to the variable <code>f</code> of type pointer to a function that does not take any argument and does not return anything, you would do (check all correct answers if there is more than one):</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="512">
                <li class="">

  <input type="checkbox" name="512" id="512-1508304924789" value="1508304924789" data-quiz-answer-id="1508304924789" data-quiz-question-id="512" disabled="disabled" checked="checked" />
  <label for="512-1508304924789"><p>f = neyo;</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="512" id="512-1508304945125" value="1508304945125" data-quiz-answer-id="1508304945125" data-quiz-question-id="512" disabled="disabled" />
  <label for="512-1508304945125"><p>*f = &neyo;</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="512" id="512-1508304939621" value="1508304939621" data-quiz-answer-id="1508304939621" data-quiz-question-id="512" disabled="disabled" />
  <label for="512-1508304939621"><p>*f = neyo;</p>
</label>
</li>

                <li class="">

  <input type="checkbox" name="512" id="512-1508304932510" value="1508304932510" data-quiz-answer-id="1508304932510" data-quiz-question-id="512" disabled="disabled" checked="checked" />
  <label for="512-1508304932510"><p>f = &neyo;</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>
          <div class="quiz_question_item_container" data-role="quiz_question514" data-position="4">
            <div class=" clearfix" id="quiz_question-514">

    <h4 class="quiz_question">

        Question #4
    </h4>

    <!-- Quiz question Body -->
    <p>This <code>void (*anjula[])(int, float)</code> is:</p>


    <!-- Quiz question Answers -->
        <ul class="quiz_question_answers" data-question-id="514">
                <li class="">

  <input type="radio" name="514" id="514-1508305566314" value="1508305566314" data-quiz-answer-id="1508305566314" data-quiz-question-id="514" disabled="disabled" checked="checked" />
  <label for="514-1508305566314"><p>An array of pointers to functions that take an <code>int</code> and a <code>float</code> as parameters and returns nothing</p>
</label>
</li>

                <li class="">

  <input type="radio" name="514" id="514-1508305593000" value="1508305593000" data-quiz-answer-id="1508305593000" data-quiz-question-id="514" disabled="disabled" />
  <label for="514-1508305593000"><p>A pointer to an array of functions that take an <code>int</code> and a <code>float</code> as parameters and returns nothing</p>
</label>
</li>

                <li class="">

  <input type="radio" name="514" id="514-1508305543720" value="1508305543720" data-quiz-answer-id="1508305543720" data-quiz-question-id="514" disabled="disabled" />
  <label for="514-1508305543720"><p>A pointer to a function that takes an <code>int</code> and a <code>float</code> as parameters and returns an empty array</p>
</label>
</li>

                <li class="">

  <input type="radio" name="514" id="514-1508305469598" value="1508305469598" data-quiz-answer-id="1508305469598" data-quiz-question-id="514" disabled="disabled" />
  <label for="514-1508305469598"><p>A pointer to a function that takes an <code>int</code> and a <code>float</code> as parameters and returns nothing</p>
</label>
</li>

                <li class="">

  <input type="radio" name="514" id="514-1508305512032" value="1508305512032" data-quiz-answer-id="1508305512032" data-quiz-question-id="514" disabled="disabled" />
  <label for="514-1508305512032"><p>A pointer to a function that takes an array of <code>int</code> and <code>float</code> as a parameter and returns nothing</p>
</label>
</li>

        </ul>

    <!-- Quiz question Tips -->

</div>

          </div>

      </section>
    </div>
  </div>



          <h2 class="gap">Tasks</h2>

    <div data-role="task958" data-position="1" id="task-num-0">
      <div class="panel panel-default task-card " id="task-958">
  <span id="user_id" data-id="291495"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      0. What&#39;s my name
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="291495"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that prints a name.</p>

<ul>
<li>Prototype: <code>void print_name(char *name, void (*f)(char *));</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
#include &lt;stdio.h&gt;
#include &quot;function_pointers.h&quot;

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf(&quot;Hello, my name is %s\n&quot;, name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf(&quot;Hello, my uppercase name is &quot;);
    i = 0;
    while (name[i])
    {
        if (name[i] &gt;= &#39;a&#39; &amp;&amp; name[i] &lt;= &#39;z&#39;)
        {
            putchar(name[i] + &#39;A&#39; - &#39;a&#39;);
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name(&quot;Bob&quot;, print_name_as_is);
    print_name(&quot;Bob Dylan&quot;, print_name_uppercase);
    printf(&quot;\n&quot;);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
julien@ubuntu:~/0x0e. Function pointers$ ./a
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x0F-function_pointers</code></li>
            <li>File: <code>0-print_name.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">

<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="958">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="958" data-batch-id="65" data-toggle="modal" data-target="#task-958-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-958-users-done-modal" data-task-id="958" data-batch-id="65">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "0. What&#39;s my name"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:958}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task959" data-position="2" id="task-num-1">
      <div class="panel panel-default task-card " id="task-959">
  <span id="user_id" data-id="291495"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      1. If you spend too much time thinking about a thing, you&#39;ll never get it done
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="291495"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that executes a function given as a parameter on each element of an array.</p>

<ul>
<li>Prototype: <code>void array_iterator(int *array, size_t size, void (*action)(int));</code></li>
<li>where <code>size</code> is the size of the array</li>
<li>and <code>action</code> is a pointer to the function you need to use</li>
</ul>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
#include &lt;stdio.h&gt;
#include &quot;function_pointers.h&quot;

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf(&quot;%d\n&quot;, elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf(&quot;0x%x\n&quot;, elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &amp;print_elem);
    array_iterator(array, 5, &amp;print_elem_hex);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
julien@ubuntu:~/0x0e. Function pointers$ ./b
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
julien@ubuntu:~//0x0e. Function pointers$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x0F-function_pointers</code></li>
            <li>File: <code>1-array_iterator.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">

<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="959">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="959" data-batch-id="65" data-toggle="modal" data-target="#task-959-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-959-users-done-modal" data-task-id="959" data-batch-id="65">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "1. If you spend too much time thinking about a thing, you&#39;ll never get it done"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:959}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task960" data-position="3" id="task-num-2">
      <div class="panel panel-default task-card " id="task-960">
  <span id="user_id" data-id="291495"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      2. To hell with circumstances; I create opportunities
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="291495"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a function that searches for an integer.</p>

<ul>
<li>Prototype: <code>int int_index(int *array, int size, int (*cmp)(int));</code></li>
<li>where <code>size</code> is the number of elements in the array <code>array</code></li>
<li><code>cmp</code> is a pointer to the function to be used to compare values</li>
<li><code>int_index</code> returns the index of the first element for which the <code>cmp</code> function does not return <code>0</code></li>
<li>If no element matches, return <code>-1</code></li>
<li>If size &lt;= <code>0</code>, return <code>-1</code></li>
</ul>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ cat 2-main.c
#include &lt;stdio.h&gt;
#include &quot;function_pointers.h&quot;

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem &gt; 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf(&quot;%d\n&quot;, index);
    index = int_index(array, 20, abs_is_98);
    printf(&quot;%d\n&quot;, index);
    index = int_index(array, 20, is_strictly_positive);
    printf(&quot;%d\n&quot;, index);
    return (0);
}
julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
julien@ubuntu:~/0x0e. Function pointers$ ./c
2
1
2
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x0F-function_pointers</code></li>
            <li>File: <code>2-int_index.c</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">

<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="960">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="960" data-batch-id="65" data-toggle="modal" data-target="#task-960-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-960-users-done-modal" data-task-id="960" data-batch-id="65">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "2. To hell with circumstances; I create opportunities"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:960}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>
    <div data-role="task961" data-position="4" id="task-num-3">
      <div class="panel panel-default task-card " id="task-961">
  <span id="user_id" data-id="291495"></span>

  <div class="panel-heading panel-heading-actions">
    <h3 class="panel-title">
      3. A goal is not always meant to be reached, it often serves simply as something to aim at
    </h3>

    <div>
        <span class="label label-info">
          mandatory
        </span>
    </div>
  </div>

  <div class="panel-body">
    <span id="user_id" data-id="291495"></span>

    <!-- Progress vs Score -->

    <!-- Task Body -->
    <p>Write a program that performs simple operations.</p>

<ul>
<li>You are allowed to use the standard library</li>
<li>Usage: <code>calc num1 operator num2</code></li>
<li>You can assume <code>num1</code> and <code>num2</code> are integers, so use the <code>atoi</code> function to convert them from the string input to <code>int</code></li>
<li><code>operator</code> is one of the following:

<ul>
<li><code>+</code>: addition</li>
<li><code>-</code>: subtraction</li>
<li><code>*</code>: multiplication</li>
<li><code>/</code>: division</li>
<li><code>%</code>: modulo</li>
</ul></li>
<li>The program prints the result of the operation, followed by a new line</li>
<li>You can assume that the result of all operations can be stored in an <code>int</code></li>
<li>if the number of arguments is wrong, print <code>Error</code>, followed by a new line, and exit with the status <code>98</code></li>
<li>if the <code>operator</code> is none of the above, print <code>Error</code>, followed by a new line, and exit with the status <code>99</code></li>
<li>if the user tries to divide (<code>/</code> or <code>%</code>) by <code>0</code>, print <code>Error</code>, followed by a new line, and exit with the status <code>100</code></li>
</ul>

<p>This task requires that you create four different files.</p>

<p><strong>3-calc.h</strong></p>

<p>This file should contain all the function prototypes and data structures used by the program.
You can use this structure:</p>

<pre><code>/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
</code></pre>

<p><strong>3-op_functions.c</strong></p>

<p>This file should contain the 5 following functions (not more):</p>

<ul>
<li><code>op_add</code>: returns the sum of <code>a</code> and <code>b</code>. Prototype: <code>int op_add(int a, int b);</code></li>
<li><code>op_sub</code>: returns the difference of <code>a</code> and <code>b</code>. Prototype: <code>int op_sub(int a, int b);</code></li>
<li><code>op_mul</code>: returns the product of <code>a</code> and <code>b</code>. Prototype: <code>int op_mul(int a, int b);</code></li>
<li><code>op_div</code>: returns the result of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_div(int a, int b);</code></li>
<li><code>op_mod</code>: returns the remainder of the division of <code>a</code> by <code>b</code>. Prototype: <code>int op_mod(int a, int b);</code></li>
</ul>

<p><strong>3-get_op_func.c</strong></p>

<p>This file should contain the function that selects the correct function to perform the operation asked by the user. You&rsquo;re not allowed to declare any other function.</p>

<ul>
<li>Prototype: <code>int (*get_op_func(char *s))(int, int);</code></li>
<li>where <code>s</code> is the operator passed as argument to the program</li>
<li>This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: <code>get_op_func(&quot;+&quot;)</code> should return a pointer to the function <code>op_add</code></li>
<li>You are not allowed to use <code>switch</code> statements</li>
<li>You are not allowed to use <code>for</code> or <code>do ... while</code> loops</li>
<li>You are not allowed to use <code>goto</code></li>
<li>You are not allowed to use <code>else</code></li>
<li>You are not allowed to use more than one <code>if</code> statement in your code</li>
<li>You are not allowed to use more than one <code>while</code> loop in your code</li>
<li>If <code>s</code> does not match any of the 5 expected operators (<code>+</code>, <code>-</code>, <code>*</code>, <code>/</code>, <code>%</code>), return <code>NULL</code></li>
<li>You are only allowed to declare these two variables in this function:</li>
</ul>

<pre><code>    op_t ops[] = {
        {&quot;+&quot;, op_add},
        {&quot;-&quot;, op_sub},
        {&quot;*&quot;, op_mul},
        {&quot;/&quot;, op_div},
        {&quot;%&quot;, op_mod},
        {NULL, NULL}
    };
    int i;
</code></pre>

<p><strong>3-main.c</strong></p>

<p>This file should contain your <code>main</code> function only.</p>

<ul>
<li>You are not allowed to code any other function than <code>main</code> in this file</li>
<li>You are not allowed to directly call <code>op_add</code>, <code>op_sub</code>, <code>op_mul</code>, <code>op_div</code> or <code>op_mod</code> from the <code>main</code> function</li>
<li>You have to use <code>atoi</code> to convert arguments to <code>int</code></li>
<li>You are not allowed to use any kind of loop</li>
<li>You are allowed to use a maximum of 3 <code>if</code> statements</li>
</ul>

<p><strong>Compilation and examples</strong></p>

<pre><code>julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2
julien@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 &#39;*&#39; 98
100352
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 &#39;\*&#39; 98
Error
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926
julien@ubuntu:~/0x0e. Function pointers$ ./calc 1024 &#39;%&#39; 98
44
julien@ubuntu:~/0x0e. Function pointers$
</code></pre>

  </div>

  <div class="list-group">
    <!-- Task URLs -->

    <!-- Github information -->
      <div class="list-group-item">
        <p><strong>Repo:</strong></p>
        <ul>
          <li>GitHub repository: <code>alx-low_level_programming</code></li>
            <li>Directory: <code>0x0F-function_pointers</code></li>
            <li>File: <code>3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h</code></li>
        </ul>
      </div>

    <!-- Self-paced manual review -->
  </div>

  <!-- Panel footer - Controls -->
  <div class="panel-footer">
      <div class="align-items-center d-flex justify-content-between">

<div>
    <button class="student_task_done btn btn-default btn-sm no" data-task-id="961">
      <span class="no"><i aria-hidden="true" class="fa fa-square-o "></i></span>
      <span class="yes"><i aria-hidden="true" class="fa fa-check-square-o "></i></span>
      <span class="pending"><i aria-hidden="true" class="fa fa-spinner  fa-pulse"></i></span>
      Done<span class="no pending">?</span><span class="yes">!</span>
    </button>

  <button class="student-task-done-by btn btn-default btn-sm" data-task-id="961" data-batch-id="65" data-toggle="modal" data-target="#task-961-users-done-modal">
    Help
  </button>
  <div class="modal fade users-done-modal" id="task-961-users-done-modal" data-task-id="961" data-batch-id="65">
    <div class="modal-dialog">
        <div class="modal-content">
        <div class="modal-header">
            <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
            <h4 class="modal-title">Students who are done with "3. A goal is not always meant to be reached, it often serves simply as something to aim at"</h4>
        </div>
        <div class="modal-body">
            <div class="list-group">
            </div>
            <div class="spinner">
                <div class="bounce1"></div>
                <div class="bounce2"></div>
                <div class="bounce3"></div>
            </div>
            <div class="error"></div>
        </div>
        </div>
    </div>
</div>




    <button class="btn btn-default btn-sm" data-toggle="modal" data-target="#container-specs-modal" data-gtm-custom-event-name="task_sandbox_modal" data-gtm-custom-event-options="{&quot;taskId&quot;:961}"><i aria-hidden="true" class="fa fa-terminal "></i><span>Get a sandbox</span></button>

</div>


        <div class="fs-4">
        </div>
      </div>


  </div>
</div>

    </div>

    <p class="lg-gap">
      <form class="button_to" method="post" action="/projects/226/unlock_optionals"><input id="unlock_optional_btn" class="btn btn-primary btn-block" data-confirm="Are you sure? Make sure you focused on the mandatory tasks first" data-disable-with="Unlocking 1 advanced task..." data-gtm-custom-event-name="project_unlock_advanced_tasks" type="submit" value="Done with the mandatory tasks? Unlock 1 advanced task now!" /><input type="hidden" name="authenticity_token" value="g6wHBuebjRvAJ08HZ1ynOhkPsd0rjv-FmXnHKIC0FUFxfQs_41D-zs3sMMXthQYVZWLUfUq2irP7zzNTN55KTQ" autocomplete="off" /></form>
    </p>




          <div class="modal fade" id="container-specs-modal"><div class="modal-dialog modal-lg"><div class="modal-content"><div class="modal-header"><button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button><h4 class="modal-title">Recommended Sandbox</h4></div><div class="modal-body"><div data-react-class="user_containers/ContainerSpecs" data-react-props="{&quot;containerModelName&quot;:&quot;Sandbox&quot;,&quot;containerSpecs&quot;:[{&quot;description&quot;:&quot;\u003cp\u003eBasic Ubuntu 20.04, with vim, emacs, curl, wget and all needed for Foundations\u003c/p\u003e\n&quot;,&quot;id&quot;:39,&quot;name&quot;:&quot;Ubuntu 20.04&quot;,&quot;online&quot;:true}],&quot;containersLimit&quot;:2,&quot;csrfToken&quot;:&quot;Eb9RJL52Sj0tDWaIrY5unvJh-AOFGadPbWBgAJtwrBSXUjfnhnknYFEUGS-8Solc5I3J3orePwWfxPjs7OCIgg&quot;,&quot;startStatusURI&quot;:&quot;/user_containers/start_status.json&quot;,&quot;startURI&quot;:&quot;/user_containers/start.json&quot;}" data-react-cache-id="user_containers/ContainerSpecs-0"></div></div></div></div></div>

  </div>
</div>


      </article>

      <div class="copyright">Copyright © 2023 ALX, All rights reserved.</div>

    </main>
