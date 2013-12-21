1.	在使用sublime的多处编辑时,需要手动ctrl+鼠标的操作,如果想同时使相同的内容通过快捷键选中,
	然后只要鼠标点一下即可同时编辑:目前我的方法是先使用ctrl+d将所有相同的字符选中后,即可只
	要点一下就会同时进入编辑状态 最佳:其实全选匹配的键是alt+F3但是我将其改为shift+d;
2.  快捷键:
Ctrl+R：跳转到函数，在html文件中跳到某ID的节点上 @
Ctrl+;：定位到某个词语 #
按Ctrl + P：文件定位，只要找到文件, 按下Enter,该文件立刻会被打开。Ctrl + P在输入框内输入以上末尾字符都可以实现以上功能。
其他查找替换功能

Ctrl+F：查找内容
Ctrl+Shift+F：查找并替换，Sublime Text 2可以添加多个文件夹进行查找(add directory)
Ctrl+H：替换

项目文件夹浏览：
Sublime Text 2可以基于项目管理，侧边栏可以导入正在开发的项目文件夹，(ctrl+k,ctrl+b)快捷键可以开关侧栏
(ps: 这里逗号分隔的两个快捷键代表按下ctrl的同时先按K再按B，关闭侧边栏也是如此操作)

多重选择(Multi-Selection)：
Ctrl+L：选择整行，反复按可同时选中下一行；
Ctrl+Shift+L：同时编辑的行，首先得先选中这些行
Ctrl+D：可将全文中与光标当前所在位置的相同的词逐一选中；
Ctrl+K D：查找某个文本，继续查下一个则继续按D；
Alt+F3：即可一次性选择所有相同的词，；按住ctrl+鼠标左键：手动选择同时要编辑的多处文本

其他编辑功能
Ctrl+Shift+A ：选择光标位置父标签对儿 ；
ALT+ Shift + W 标签包围选区；
Ctrl+J：将选中内容合并
Ctrl+M ：光标移动至括号内开始或结束的位置；
Ctrl+Shift+M ：选择括号内的内容（按住-继续选择父括号）；
Ctrl+Shift+D：是直接复制当前行，
Ctrl+shift+space可以选择js等语言里的块{内容}
Ctrl+Shift+Enter：在当前行前插入新行
Ctrl+Enter：在当前行后插入新行
Alt+Shift+数字：分屏显示，alt+shift+2就是分两屏显示，用sass写css时使用
Alt+数字：切换打开第N个文件
Ctrl+K ,N:快速折叠文件内所有函数,（N数字表示级别）
Ctrl+K, T：折叠属性 （编辑 HTML 模板最有用）
Ctrl+K, J：打开所有折叠的内容
Ctrl+Shift+T：重新打开刚刚关闭的标签页，反复按则打开更早的
Ctrl+KK：从光标处删除至行尾；Ctrl+Shift+K ：删除整行
Ctrl+K Backspace 从光标处删除至行首
Ctrl+Tab 当前窗口中的标签页切换
Ctrl+Shift+L 鼠标选中多行（按下快捷键），即可同时编辑这些行
Ctrl+↑/↓可以一行一行的滚动屏幕，pageUp pageDown一页一页翻动
Ctrl+Shift+↑：与上行互换，Ctrl+Shift+↓：与下行互换
Ctrl+KK：从光标处删除至行尾；Ctrl+Shift+K ：删除整行
Ctrl+KU ：改为大写Ctrl+KL ：改为小写Alt+. 

闭合当前标签
Ctrl+Shift+[：折叠代码，Ctrl+Shift+]：展开代码
Ctrl+T：词互换
文档右键功能：show unsaved changes，显示未保存的修改
其他功能请Ctrl+Shift+P → menu → Enter自行实验

Ctrl+Shift+/ 注释已选择内容
ctrl + / 单行注释（如已选择内容，同“Ctrl+Shift+/”效果,不过使用// 不是/**/） 
ctrl + / 取消注释 如果有注释 则取消所在行的注释或者你选则的注释
Ctrl+Shift+↑可以移动此行代码，与上行互换
Ctrl+Shift+↓可以移动此行代码，与下行互换
Ctrl+Shift+[ 折叠代码
Ctrl+Shift+] 展开代码
Shift+鼠标右键（或使用鼠标中键）可以用鼠标进行竖向多行选择
Shift+Tab 去除缩进
ctrl+ [  往左缩进  选中则一起缩进
ctrl + ] 往右缩进
ctrl + space 自动补全
alt + F3 选中所有高亮匹配 这很有用,当要批量更改变量名声即可批量操作 由于alt+f3的不好操作已将更改为:shift+d
ctrl +k,ctrl + b 隐藏sidebar 但是按键不太方便 改为ctrl + right ,ctrl + right
ctrl + tab 切换文件
ctrl + p 打开(Go TO Anything) 然后这里面可以输入任意文件名或者目录即可快速打开文件或者=输入@,
		 它会列出所有的类名或者函数名,然后再输入一些字符可以进一步匹配就可以跳转到指定的位置

3. sublime支持智能的匹配,比如要输入css背景颜色值background-color,我们可以直接输入bgc然后tab即可,即每个单词的首字母.
	其他的属性值也一样
4. sublime xiki插件的使用:ctrl + shift + p 中输入命令create选择xikibuffer 然后
	在打开的文件中执行命令,比如 输入/ 然后在按ctrl+enter将会把你的家目录列出来 使用$$执行你的shell命令windows
	即cmd名令

5.当我安装了jQuery snippets是,打开shift + ctrl +P 输入jquery却没有看到任何jquery的信息 why???
	原因:输入shift + ctrl + P 打开的命令输入是和你的文件的语法解析类型是密切相关的,之所以上面输入jquery
	找不到jquery的信息,是因为我在html的页面中打开,当把html的语法解析换成javascript后即可看到了.这一点一定要注意.
6. emmet(zencoding)的一些格式语法:
   a.someclass[href='#'];  a.class*[href='#']*3
   ul>li{hello}*3; ul>li{hello}*3>a[href="#"]{some link}
   (ul>li{hello}*3>a[href="#"]{some link})+div    //注意div和+之间不要有空格
   .container>.header>header>h1{my web site}+.main
   .container(>.header>header>h1{my web site})+.main
7. 使用ctrl+D选中字符后,再按一下双引号或者单引号按键就会加上去.而不是覆盖.
8. 使用ctrl+,按键可以选中成对标签中的代码块 .
9. 安装了emmet插件后可以使用简写的形式,比如css中的padding值:直接输入p20然后tab键后就可以得到padding :50px;
   非常方便.注意这种省略的写法,将是未来的经常用到的技巧.
   m10-20 --> margin: 10px 20px;
   w80p    --> width: 80%;
   m0-auto  -->margin: 0 auto;
   -transition --> 	-webkit-transition: ;
					-moz-transition: ;
					-ms-transition: ;
					-o-transition: ;
					transition: ;
   自动增加前缀
   同时使用emmet还可以自动填充测试文本:输入:lorem20然后tab就会有一串字符串出现.
   输入lorem200,则会更多.记住只是lorem这几个特殊的字符.
10. 插件Nettuts+fetch 可以用来在线下载一些库文件(比如jquery)和压缩文件(比如wordpress博客).
    操作:安装后,打开shift+ctrl+p输入fetch ,有三个选项:Fetch,Fetch:manage,Fetch:Package;
    其中Fetch:manage是一个配置文件,里面可以输入路库文件的路径或者压缩包的路径
    首先创建一个空文件,然后在命令行中输入fetch,选择第一个fetch就会有一个资源列表,选择你的资源URL
    然后就会自动下载到你新建的空文件中.

11.advanceFile插件的使用,见其readme文件,alt+ ctrl + n .注意输入的文件名可以包含目录.单纯的文件名其文件默认
   会被存在顶层的目录中.这还可以直接创建文件夹,即使用alt+ ctrl + n输入文件名时,加一个不存在的目录即可创建.

12.有时打开sublimeText3发现emmet插件要过一段时间(几秒后)后才可以正常使用,后面发现原来每次打开sublime都要加载完
   pyV8 binary,可以在左下角看到这个加载提示.等pyV8 binary加载完后,emmet插件就可以正常使用了.
15.今天突然发现AdvancedNewFile插件使用不了,后面在sublime的user配置文件下发现AdvancedNewFile已被加入进来了忽略的插件包中
   如下所示:去掉即可.
"ignored_packages":
  [
    "Vintage",
    "AdvancedNewFile"
],

16.将文本文件即txt后缀改为html后,发现emmet的tab补全用不了了.后面发现右下角的语法解析还是:
  plain text,将其改为HTML即可.一定要注意sublime对应的文件解析的语法.

17.在使用AdvancedNewFlie插件时,在配置文件中记得添加:"show_sidebar_menu": true,它会在sidebar中添加右键选项,新建文件时选择
   Advance New File,这样在保存文件时就不会弹出Save as 的窗口了
   其实只要在配置文件中配置将:
   // This value specifies the default directory when using AdvancedNewFile.
    // Note it must be one of these values:
    //  project_folder - Default will be the folder index specified by the "default_folder_index" setting.
    //  current - Default will be the directory of the current view.
    //  home - Default will be the home folder (~/)
    //  path - Default will be defined by the setting "default_path"
    // If the current view or top folder cannot be resolved, the home directory
    // will be used.
    "default_root": "project_folder",
    中的"default_root": "project_folder", 改为:"default_root": "current",
    那么使用快捷键alt+atrl+n创建的文件就会默认保存在当前文件的目录中了


18.使用sublime的右键:open in browser打开html文件无效,可能是我的路径问题,因为我的操作系统安装在D盘.或者是没有找到chrome的
   安装路径.sublime text3的open in browser只支持打开html后缀的文件,你在php文件中,点右键就没有这个open in browser的选项.
   使用插件view in browser可以完美解决上面两个问题.安装完view in browser后,需要修改一下它的配置文件,因为它的默认选择的
   浏览器是firefox,这个可以看它的默认的配置文件,一看就知道该怎么设置了,你懂得!
   即:View In Browser.sublime-settings中加入:"selectedBrowser": "chrome"即可.不要忘了包含在{}中.同时注意一下其浏览器的
   安装路径即可.现在可以在右键选择view in browser 即可在浏览器中打开文件了.但是这没有通过其apache服务器,比如php文件就无法解析.
   所以还需要配置其浏览器打开其文件的协议,将file protocol替换为http protocol.(见插件的官方说明).这个可以新建一个sublime-project,
   然后在sublime的Proje -- Edit project:
   在其project的配置文件作如下设置:
   {
  "folders":
      [
        {
          "follow_symlinks": true,
          "path": "E:\\kuaipan\\web\\code"
        },
        {
          "follow_symlinks": true,
          "path": "E:\\kuaipan\\web\\text_notes"
        },
        {
          "follow_symlinks": true,
          "path": "E:\\kuaipan\\web\\exm"
        }
      ],
      "settings":{
            "sublime-view-in-browser": {
                "baseUrl": "http://localhost:8077",
                "basePath": "E:\\kuaipan\\web\\code"
            }
        }
  }
这是从打开的文件夹中生成的工程.所以其路径使用转义符\.因为windows默认的路径分隔符就是\.如果你自己配置可以直接将其写为/即可
windows支持/和\都支持.所以路径分隔符最好是写/这种新式.因为在其他的操作系统中,如果写成\这种路径分隔符,一般会出问题.他们会将其最为转义符处理
可以看到我将其apache的端口设置为8077;现在我就要去配置其apache服务器了.因为我的documenroot 是在htdocs目录下而我代码文件并没有写在
其指定的documentroot下即htdocs.现在我不想改变documentroot,即我想使用不同的端口访问不同目录.这可以在apache的配置文件中加入
#不同端口的访问不同目录设置:
Listen 8077
<VirtualHost *:8077>
   ServerAdmin ericky_chen@live.com
   DocumentRoot E:/kuaipan/web/code
   ServerName *:8077

   <Directory "E:/kuaipan/web/code">
      Options All
      AllowOverride All
      Order allow,deny
      Allow from all
   </Directory>
</VirtualHost>
重启apache服务即可.此时就可以在sublime中右键php文件然后在浏览器中打开将得到apache的php模块的解析了.

19.下面是我的sublime的配置文件作为备份:
{
  "color_scheme": "Packages/Theme - Flatland/Flatland Dark.tmTheme",
  // "color_scheme": "Packages/Color Scheme - Default/Eiffel.tmTheme",
  "default_encoding": "UTF-8",
  "font_face": "Monaco",
  "font_size": 10,
  "bold_folder_labels": true,   //设置文件夹字体加粗
  "highlight_line": true, 
  "line_padding_bottom": 0,  
  "line_padding_top": 2,
  // "file_exclude_patterns":["*.jpg", "*.gif","*.png","*.ico"], //设置不显示文件夹中的特定文件,一般过滤图片文件的显示
  "preview_on_click": false,    //取消所有的文件预览功能,注意只能在sidebar 通过双击打开文件
  "font_options":  
    [  
        "directwrite"     //设置字体的渲染方式,directwrite 只对windows有效 directwrite渲染方式更加饱满,
    ],  
  "ignored_packages":
  [
    "Vintage"           //设置是否忽略vim模式
  ],
  "theme": "Flatland Dark.sublime-theme",
   "caret_style": "wide",     // 设置光标闪动方式
   "draw_white_space":"none",
   "margin": 4,    // 行号边栏和文字的间距
   "word_wrap": true   //自动换行
  "update_check": false
}



20. 当点击sublime的siderbar中文件时,发现我打开的文件并没有出现在siderbar的左上角的OPEN FILES列表中.当我想保留这个文件在编辑器显示,
    当点击其他的文件后,原先打开的文件又被此时点击的文件覆盖了.后面仔细阅读其默认的配置文件后,发现这是sublime的文件预览功能,即单击一个文件
    sublime处理为预览文件,只有当你双击这个文件时,sublime才会认为你是要修改这个文件,这个文件就会出现在左上角的OPEN FILES列表中.我们双击
    这个文件后,再双击其他的文件,就会发现,原先打开的文件还在.我们可以在配置文件中将其关闭,只要将下面的preview_on_click设置为false即可
    // Preview file contents when clicking on a file in the side bar. Double
    // clicking or editing the preview will open the file and assign it a tab.
    "preview_on_click": true,

21.最近很烦sublime预览二进制文件,比如图片,一不小心点击了图片,其二进制文件就被预览出来了,我根本就不想查看他的二进制代码,虽然可以通过
   "file_exclude_patterns"排除显示的文件.但是有时我只是忘了这个图片的文件名,我打开img目录只是想看一眼图片的文件名而已.因此就这个google一下:
   发现有很多的讨论:
   http://sublimetext.userecho.com/topic/85856-binary-files-should-not-open-and-long-operations-should-have-a-timeout/
   建议在最新的版中添加:"preview_binary_files = false"  不过目前我的版本:(sublimeText3 build 3047)还没有这个配置项
   http://www.sublimetext.com/forum/viewtopic.php?f=3&t=4530&p=20500&hilit=Prevent+preview+of+binary+files
   我在下面的链接中:
   http://stackoverflow.com/questions/11264555/is-there-a-way-to-prevent-sublime-text-from-previewing-binary-files-inside-the-t
   建议禁止所有的文件预览,即"preview_on_click": true,
   发现这种方案还可行,因为如果你要打开文件就只有通过双击了.当然如果你双击图片,还是打开其二进制文件,不过这降低了我们误点击图片后出现的二进制码的机率.
   我觉得还行.这也是我目前找到的一种方法.
22.使用Emmet为一个元素一次性写多个类名,其实只要按照属性的操作即可:
   div[class='large-4 columns']
   li.class${item$}*3   扩展类名自动升序和自动填入升序的文本

23.下面是我的关于括弧高亮插件(brackethighlighter)的配置文件:
{
  // "high_visibility_style": "stippled",
    "search_threshold": 50000,
  // Define region highlight styles
    "bracket_styles": {
        // "default" and "unmatched" styles are special
        // styles. If they are not defined here,
        // they will be generated internally with
        // internal defaults.

        // "default" style defines attributes that
        // will be used for any style that does not
        // explicitly define that attribute.  So if
        // a style does not define a color, it will
        // use the color from the "default" style.
        "default": {
            "icon": "dot",
            // BH1's original default color for reference
            // "color": "entity.name.class",
            "color": "brackethighlighter.default",
            "style": "underline"
        },

        // This particular style is used to highlight
        // unmatched bracekt pairs.  It is a special
        // style.
        "unmatched": {
            "icon": "question",
            // "color": "brackethighlighter.unmatched",
            "style": "outline"
        },
        // User defined region styles
        "curly": {
            "icon": "curly_bracket",
            "color": "brackethighlighter.curly",
            "style": "solid"
        },
        "round": {
            "icon": "round_bracket",
            "color": "brackethighlighter.round",
            "style": "solid"
        },
        "square": {
            "icon": "square_bracket",
            "color": "brackethighlighter.square",
            "style": "solid"
        },
        "angle": {
            "icon": "angle_bracket",
            "color": "brackethighlighter.angle",
            "style": "solid"
        },
        "tag": {
            "icon": "tag",
            // "color": "brackethighlighter.tag",
            "style": "outline"
        },
        "single_quote": {
            "icon": "single_quote"
            // "color": "brackethighlighter.quote",
            // "style": "underline"
        },
        "double_quote": {
            "icon": "double_quote"
            // "color": "brackethighlighter.quote",
            // "style": "underline"
        },
        "regex": {
            "icon": "regex"
            // "color": "brackethighlighter.quote",
            // "style": "underline"
        }
    },
}

24.sublime 小技巧:使用shift+鼠标滚轮可以左右移动文字,这对于不启用自动换行的用户很有用

25.关于sublime绿色版的使用:
   解压sublime的绿色版版,然后在安装目录下找到:sublime_test.exe的执行文件,点击后即可启动sublime,但是此时还没有
   加载sublime的配置文件,但是当你点击sublime_text.exe时,它已经自动的创建了其配置文件(因为找不到就会自动的创建),
   现在你点击菜单栏上的Preference--Browser Packages...就可以打开其默认的用户配置文件了,然后再将你的用户配置文件和
   你的插件包覆盖进去即可.只是这样的sublime属于未注册版本.

26.怎么让Sublime Text 2象VIM那样快速移动光标指定的行数，列数以及页数:
   ctrl+g 指定行数
27.一个小技巧：选中一个单词如abc ，然后输入" 这样 会变成"abc",同理还可以用( { [ '
