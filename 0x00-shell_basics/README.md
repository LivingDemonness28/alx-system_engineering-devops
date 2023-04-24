<body>
    <h1>Shell basic executable files</h1>
    <table>
        <tr>
            <td class="table w1">FILE</td>
            <td class="table w2">DESCRIPTION</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/0-current_working_directory" target="_blank">0-current_working_directory</a></h3></td>
            <td class="para">Write a script that prints the absolute path name of the current working directory</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/1-listit" target="_blank">1-listit</a></h3></td>
            <td class="para">Display the contents of your current directory</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/2-bring_me_home" target="_blank">2-bring_me_home</a></h3></td>
            <td class="para">Write a script that changes the working directory to the user's home directory</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/3-listfiles" target="_blank">3-listfiles</a></h3></td>
            <td class="para">Display current directory contents in a long format</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/4-listmorefiles" target="_blank">4-listmorefiles</a></h3></td>
            <td class="para">Display current directory contents, including hidden files (starting with <span class="code"> .</span> ). Use the long format.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/5-listfilesdigitonly" target="_blank">5-listfilesdigitonly</a></h3></td>
            <td class="para">
                <p>Display current directory contents</p>
                <ul>
                    <li>Long Format</li>
                    <li>with user and group IDs displayed numerically</li>
                    <li>And hidden files (starting with <span class="code">.</span>)</li>
                </ul>
            </td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/6-firstdirectory" target="_blank">6-firstdirectory</a></h3></td>
            <td class="para">Create a script that creates a directory named <span class="code">my_first_directory</span> in the <span class="code">/tmp/</span> directory.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/7-movethatfile" target="_blank">7-movethatfile</a></h3></td>
            <td class="para">Move the file <span class="code">betty</span> from <span class="code">/tmp/</span> to <span class="code">/tmp/my_first_directory</span>.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/8-firstdelete" target="_blank">8-firstdelete</a></h3></td>
            <td class="para">
                <p>Delete the file <span class="code">betty</span>.</p>
                <ul>
                    <li>The file <span class="code">betty</span> is in <span class="code">/tmp/my_first_directory</span></li>
                </ul>
            </td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/9-firstdirdeletion" target="_blank">9-firstdirdeletion</a></h3></td>
            <td class="para">Delete the directory <span class="code">my_first_directory</span> that is in the <span class="code">/tmp</span> directory.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/10-back" target="_blank">10-back</a></h3></td>
            <td class="para">Write a script that changes the working directory to the previous one.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/11-lists" target="_blank">11-lists</a></h3></td>
            <td class="para">Write a script that lists all files (even ones with names beginning with a period character, which are normally hidden) in the current directory and the parent of the working directory and the <span class="code">/boot</span> directory (in this order), in long format.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/12-file_type" target="_blank">12-file_type</a></h3></td>
            <td class="para">Write a script that prints the type of the file named <span class="code">iamafile</span>. The file <span class="code">iamafile</span> will be in the <span class="code">/tmp</span> directory when we will run your script.</td>
        </tr>
        <tr>
            <td><h3><a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/13-symbolic_link" target="_blank">13-symbolic_link</a></h3></td>
            <td class="para">Create a symbolic link to <span class="code">/bin/ls</span> named <span class="code">__ls__</span>. The symbolic link should be created in the current working directory.</td>
        </tr>
        <tr>
            <td>
                <h3>
                    <a href="https://github.com/LivingDemonness28/alx-system_engineering-devops/blob/main/0x00-shell_basics/14-copy_html" target="_blank">14-copy_html</a>
                </h3>
            </td>
            <td class="para">
                Create a script that copies all the HTML files from the current working directory to the parent of the working directory, but only copt files that did not exist in the parent of the working directory or were newer than the versions in the parent of the working directory.
                <br>
                <br>
                You can consider that all HTML files have the extension <span class="code">.html</span>
            </td>
        </tr>
    </table>
</body>

