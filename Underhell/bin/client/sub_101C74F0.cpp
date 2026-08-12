__int16 __stdcall sub_101C74F0(int a1, int a2, int a3)
{
  int v3; // ecx
  int i; // esi
  int v5; // eax
  __int16 result; // ax

  v3 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      for ( i = a3; i; *(_WORD *)(v3 - 2) = result )
      {
        v5 = *(unsigned __int16 *)(a2 - a1 + v3);
        v3 += 2;
        --i;
        result = (int)(flt_10352FE0[v5] * 65535.0 + 0.5);
      }
    }
  }
  return result;
}
