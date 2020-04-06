# Remote_DLL_Injection
windows下的简易进程DLL注入工具 (C/C++)
windowsAPI

# Directory description
## eqqie_dll (vs2019)
测试用的DLL文件源代码，带有一个鼠标HOOK<br>
成功注入该DLL后会弹出提示窗<br>
*也可以使用自己编写的DLL**

## injection_main (vs2019)
注入程序主程序源代码<br>

## target
测试用的目标程序源代码（非必需）

# Usage
启动程序(管理员身份)后输入目标程序PID按下回车<br>
程序将尝试把 ```C:\windows\system32\eqqie.dll``` 注入到目标进程中<br>
*以上目录可以自行更改<br>*
**若注入失败请参考错误提示查找原因**

# statement
本项目仅作为个人WIN32编程学习用途，请勿进行非法活动

