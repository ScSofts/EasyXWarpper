# EasyXWarpper



原理：POSIX 4.8.1及更高版本的TDM MinGW和 MinGW-W64的ld（链接器）对于VC的lib有一定兼容。


参考EasyCKL项目的GCC库libEasyCKL.a和其VC的EasyCKL.lib文件是一样的，仅仅改了拓展名


参阅网上关于reimp的使用


看到这里你肯定有疑问，干嘛不直接兼容原版EasyX呢？


### 声明一下：这里的兼容要求很严格。


## 只能动态链接库.dll(.so)的.lib文件才可以兼容，且仅支持函数和少量类


毕竟平台不一样，编码方式也不一样。


所以我进行了重新封装，dll编译出来仅有140K，够小了。


## 所有类都进行了修改！


举个IMAGE的例子


原版IMAGE *i = new  IMAGE(500,500);


EasyXWarpper: IMAGE i = CreateIFromWH(500,500);




原版:i->getwidth();


EasyXWarpper: GetIW(i);

