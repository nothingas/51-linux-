# 51单片机（STC89C52RC）linux(Ubuntu24.0)开发
## 开发过程：
需要安装sdcc和stcgal
写好main.c文件, sdcc将main.c编译为main.ihx (`sdcc main.c`), 在终端运行`packihx main.ihx>main.hex` 
然后`stcgal main.hex`. 从新开一次电源完成烧写。
## 头文件:
在c程序里面要加入头文件(和具体单片机有关),这里是at89x52.h.
头文件的内容知道怎么操作单片机的寄存器。
