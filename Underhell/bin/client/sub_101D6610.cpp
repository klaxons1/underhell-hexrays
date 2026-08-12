void *__cdecl sub_101D6610(unsigned int a1, unsigned __int8 a2, char *Src)
{
  while ( a2 - a1 > a1 )
    a2 >>= 1;
  return memcpy_0(&Src[a1], Src, a2 - a1);
}
