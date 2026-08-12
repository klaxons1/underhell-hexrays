char __stdcall sub_101C7680(int a1, int a2, unsigned int a3)
{
  unsigned int i; // ecx
  int v4; // eax
  char result; // al

  if ( a1 && a2 && a3 )
  {
    for ( i = 0; i < a3; *(_BYTE *)(i + a1 - 1) = result )
    {
      v4 = *(unsigned __int16 *)(a2 + 2 * i++);
      result = (int)(flt_10352FE0[v4] * 255.0 + 0.5);
    }
  }
  return result;
}
