#include <ngx_config.h>

// 解决 无法解析的外部符号 ___iob_func的错误 VS2015之后版本进行了变更
FILE* __cdecl __iob_func(unsigned i) 
{
    return __acrt_iob_func(i);
}