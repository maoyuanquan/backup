""""""""""""""""""""""""""""""""|显示相关|""""""""""""""""""""""""""""""""
hi Normal ctermbg=black		"设置背景颜色为黑色
hi Normal ctermfg=grey		"设置前景色/标准字体颜色为灰色
syntax on			        "语法高亮  

""""""""""""""""""""""""""""""""|新文件标|""""""""""""""""""""""""""""""""
"新建.c,.h,.sh,.java文件，自动插入文件头 
autocmd BufNewFile *.cpp,*.[ch],*.sh,*.java exec ":call SetTitle()" 
""定义函数SetTitle，自动插入文件头 
func SetTitle() 
    "如果文件类型为.sh文件 
    if &filetype == 'sh' 
        call setline(1,"\#########################################################################") 
        call append(line("."), "\# File Name: ".expand("%")) 
        call append(line(".")+1, "\# Author: John Mao") 
        call append(line(".")+2, "\# mail: maoyuanquan@icloud.com") 
        call append(line(".")+3, "\# Created Time: ".strftime("%c")) 
        call append(line(".")+4, "\#########################################################################") 
        call append(line(".")+5, "\#!/bin/bash") 
        call append(line(".")+6, "") 
    else 
        call setline(1, "/*************************************************************************") 
        call append(line("."), "    > File Name: ".expand("%")) 
        call append(line(".")+1, "    > Author: John Mao") 
        call append(line(".")+2, "    > Mail: maoyuanquan@icloud.com") 
        call append(line(".")+3, "    > Created Time: ".strftime("%c")) 
        call append(line(".")+4, " ************************************************************************/") 
        call append(line(".")+5, "")
    endif
    if &filetype == 'cpp'
        call append(line(".")+6, "#include<iostream>")
        call append(line(".")+7, "using namespace std;")
        call append(line(".")+8, "")
    endif
    if &filetype == 'c'
        call append(line(".")+6, "#include<stdio.h>")
        call append(line(".")+7, "")
    endif
    "新建文件后，自动定位到文件末尾
    autocmd BufNewFile * normal G
endfunc 

""""""""""""""""""""""""""""""""|键盘命令|""""""""""""""""""""""""""""""""""
nmap <leader>w :w!<cr>
nmap <leader>f :find<cr>
" 映射全选+复制 ctrl+a
map <C-A> ggVGY
map! <C-A> <Esc>ggVGY
map <F12> gg=G
" 选中状态下 Ctrl+c 复制
vmap <C-c> "+y
"去空行  
nnoremap <F2> :g/^\s*$/d<CR> 
"比较文件  
nnoremap <C-F2> :vert diffsplit 
"新建标签  
map <M-F2> :tabnew<CR>  
"列出当前目录文件  
map <F3> :tabnew .<CR>  
"打开树状文件目录  
map <C-F3> \be  
"C，C++ 按F5编译运行
map <F5> :call CompileRunGcc()<CR>
func! CompileRunGcc()
    exec "w"
    if &filetype == 'c'
        exec "!gcc % -o %<"
        exec "! ./%<"
    elseif &filetype == 'cpp'
        exec "!g++ % -o %<"
        exec "! ./%<"
    elseif &filetype == 'java' 
        exec "!javac %" 
        exec "!java %<"
    elseif &filetype == 'sh'
        :!./%
    endif
endfunc
"C,C++的调试
map <F8> :call Rungdb()<CR>
func! Rungdb()
    exec "w"
    exec "!g++ % -g -o %<"
    exec "!gdb ./%<"
endfunc


""""""""""""""""""""""""""""""""|实用设置|""""""""""""""""""""""""""""""""
set autoread				"设置当文件被改动时自动载入
autocmd FileType c,cpp map <buffer> <leader><space> :w<cr>:make<cr>
""quickfix模式
set completeopt=preview,menu	"代码补全 
filetype plugin on			"允许插件  
set clipboard+=unnamed		"共享剪贴板  
set nobackup				"从不备份  
set makeprg=g++\ -Wall\ \ %	"make 运行
set autowrite				"自动保存
set ruler                   " 打开状态栏标尺
set cursorline              " 突出显示当前行
set magic                   " 设置魔术
"set statusline=\ %<%F[%1*%M%*%n%R%H]%=\ %y\ %0(%{&fileformat}\ %{&encoding}\ %c:%l/%L%)\
" 设置在状态行显示的信息
set foldcolumn=0
set foldmethod=indent 
set foldlevel=3 
set foldenable              " 开始折叠
set nocompatible			" 不要使用vi的键盘模式，而是vim自己的
set noeb					" 去掉输入错误的提示声音
set confirm					" 在处理未保存或只读文件的时候，弹出确认
set autoindent				" 自动缩进
set cindent
set tabstop=4				" Tab键的宽度
set softtabstop=4
set shiftwidth=4
" 统一缩进为4
set noexpandtab				" 不要用空格代替制表符
set smarttab				" 在行和段开始处使用制表符
set number					" 显示行号
set history=1000			" 历史记录数
set nobackup				"禁止生成临时文件
set noswapfile
set ignorecase				"搜索忽略大小写
set hlsearch
set incsearch
"搜索逐字符高亮
set gdefault				"行内替换
"编码设置
set enc=utf-8
set fencs=utf-8,ucs-bom,shift-jis,gb18030,gbk,gb2312,cp936
"语言设置
set langmenu=zh_CN.UTF-8
set helplang=cn
set laststatus=2			" 总是显示状态行
set cmdheight=2				" 命令行（在状态行下）的高度，默认为1，这里是2
set viminfo+=!				" 侦测文件类
set iskeyword+=_,$,@,%,#,-	" 带有如下符号的单词不要被换行分割
set linespace=0				" 字符间插入的像素行数目
set wildmenu				" 增强模式中的命令行自动完成操作
set backspace=2				" 使回格键（backspace）正常处理indent, eol, start等
set whichwrap+=<,>,h,l		" 允许backspace和光标键跨越行边界
set mouse=a					" 可以在buffer的任何地方使用鼠标（类似office中在工作区双击鼠标定位）
set selection=exclusive
set selectmode=mouse,key
set report=0				" 通过使用: commands命令，告诉我们文件的哪一行被改变过
set fillchars=vert:\ ,stl:\ ,stlnc:\	
" 在被分割的窗口间显示空白，便于阅读
set showmatch				" 高亮显示匹配的括号
set matchtime=1				" 匹配括号高亮的时间（单位是十分之一秒）
set scrolloff=3				" 光标移动到buffer的顶部和底部时保持3行距离
set smartindent				" 为C程序提供自动缩进
au BufRead,BufNewFile *  setfiletype txt	" 高亮显示普通txt文件（需要txt.vim脚本）
"自动补全
:inoremap ( ()<ESC>i
:inoremap ) <c-r>=ClosePair(')')<CR>
:inoremap { {<CR>}<ESC>O
:inoremap } <c-r>=ClosePair('}')<CR>
:inoremap [ []<ESC>i
:inoremap ] <c-r>=ClosePair(']')<CR>
:inoremap " ""<ESC>i
:inoremap ' ''<ESC>i
function! ClosePair(char)
    if getline('.')[col('.') - 1] == a:char
        return "\<Right>"
    else
        return a:char
    endif
endfunction
filetype plugin indent on 
"打开文件类型检测, 加了这句才可以用智能补全
set completeopt=longest,menu

""""""""""""""""""""""""""""""""|CTags的设定|""""""""""""""""""""""""""""""""  
let Tlist_Sort_Type = "name"    " 按照名称排序  
let Tlist_Use_Right_Window = 1  " 在右侧显示窗口  
let Tlist_Compart_Format = 1    " 压缩方式  
let Tlist_Exist_OnlyWindow = 1  " 如果只有一个buffer，kill窗口也kill掉buffer  
let Tlist_File_Fold_Auto_Close = 0  " 不要关闭其他文件的tags  
let Tlist_Enable_Fold_Column = 0    " 不要显示折叠树  
autocmd FileType java set tags+=D:\tools\java\tags  
"autocmd FileType h,cpp,cc,c set tags+=D:\tools\cpp\tags  
"let Tlist_Show_One_File=1            "不同时显示多个文件的tag，只显示当前文件的
set tags=tags		"设置tags  
"set autochdir

""""""""""""""""""""""""""""""""|其他东东|""""""""""""""""""""""""""""""""""
"默认打开Taglist 
let Tlist_Auto_Open=1 

""""""""""""""""""""""""""""""""|Tag list (ctags)|""""""""""""""""""""""""""""""""
let Tlist_Ctags_Cmd = '/usr/bin/ctags' 
let Tlist_Show_One_File = 1		"不同时显示多个文件的tag，只显示当前文件的 
let Tlist_Exit_OnlyWindow = 1	"如果taglist窗口是最后一个窗口，则退出vim 
let Tlist_Use_Right_Window = 1	"在右侧窗口中显示taglist窗口
" minibufexpl插件的一般设置
let g:miniBufExplMapWindowNavVim = 1
let g:miniBufExplMapWindowNavArrows = 1
let g:miniBufExplMapCTabSwitchBufs = 1
let g:miniBufExplModSelTarget = 1

