unsigned int __usercall _raise_exc@<eax>(
        __int16 a1@<fpstat>,
        ULONG_PTR Arguments,
        unsigned int *a3,
        DWORD dwExceptionCode,
        int a5,
        float *a6,
        float *a7)
{
  return _raise_exc_ex(a1, Arguments, a3, dwExceptionCode, a5, a6, a7, 0);
}
