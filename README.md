# Remote_DLL_Injection
windows下的简易进程DLL注入工具 (C/C++)
windowsAPI

# 目录
## eqqie_dll (vs2019)
测试用的DLL文件源代码<br>
成功注入该DLL后会弹出提示窗<br>
*也可以使用自己编写的DLL进行注入*

## injection_main (vs2019)
注入程序主程序源代码<br>

## target
测试用的目标程序源代码（非必需）

# 用法
启动程序(管理员身份)后输入目标程序PID按下回车<br>
程序将尝试把 ```C:\windows\system32\eqqie.dll``` 注入到目标进程中<br>
**以上目录可以自行更改，若注入失败请参考错误提示查找原因**

# Attention
注意需要保证主程序、动态链接库以及目标程序的版本统一性（x86/x64）

