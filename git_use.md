# 添加忽略文件

## Git 忽略规则匹配语法

- 空格不匹配任意文件，可作为分隔符，可用反斜杠转义

# 开头的文件标识注释，可以使用反斜杠进行转义

- ! 开头的模式标识否定，该文件将会再次被包含，如果排除了该文件的父级目录，则使用 ! 也不会再次被包含。可以使用反斜杠进行转义
- / 结束的模式只匹配文件夹以及在该文件夹路径下的内容，但是不匹配该文件
- / 开始的模式匹配项目跟目录
- 如果一个模式不包含斜杠，则它匹配相对于当前.gitignore 文件路径的内容，如果该模式不在.gitignore 文件中，则相对于项目根目录
- ** 匹配多级目录，可在开始，中间，结束
- ? 通用匹配单个字符
- [] 通用匹配单个字符列表

## 常用匹配示例

- bin/: 忽略当前路径下的bin文件夹，该文件夹下的所有内容都会被忽略，不忽略 bin 文件
- /bin: 忽略根目录下的bin文件
- /*.c: 忽略 cat.c，不忽略 build/cat.c
- debug/*.obj: 忽略 debug/io.obj，不忽略 debug/common/io.obj 和 tools/debug/io.obj
- **/foo: 忽略/foo, a/foo, a/b/foo等
- a/**/b: 忽略a/b, a/x/b, a/x/y/b等
- !/bin/run.sh: 不忽略 bin 目录下的 run.sh 文件
- *.log: 忽略所有 .log 文件
- config.php: 忽略当前路径的 config.php 文件

## 高能

gitignore规则不生效
.gitignore只能忽略那些原来没有被track的文件，如果某些文件已经被纳入了版本管理中，则修改.gitignore是无效的。

解决方法就是先把本地缓存删除（改变成未track状态），然后再提交:
git rm -r --cached .
git add .
git commit -m 'update .gitignore'

# 解决中文路径被编码为Unicode

```config
git config --global core.quotepath false
```
