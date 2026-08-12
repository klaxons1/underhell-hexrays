void *__cdecl sub_101D6650(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, char *Src)
{
  unsigned int v4; // ecx

  while ( 1 )
  {
    v4 = a3 - a1;
    if ( v4 <= a1 )
      break;
    a3 >>= 1;
  }
  return memcpy_0(&Src[a1 * a2], Src, v4 * a2);
}
