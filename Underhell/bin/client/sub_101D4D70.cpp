void *__cdecl sub_101D4D70(unsigned int a1, unsigned __int8 a2, char *Src)
{
  unsigned int v3; // eax

  while ( 1 )
  {
    v3 = a2 - a1;
    if ( v3 <= a1 )
      break;
    a2 >>= 1;
  }
  return memcpy_0(&Src[2 * a1], Src, 2 * v3);
}
