bool __stdcall sub_101421F0(unsigned __int8 *a1, unsigned __int8 *a2)
{
  unsigned int v4; // eax
  int v6; // eax

  v4 = 76;
  while ( *(_DWORD *)a1 == *(_DWORD *)a2 )
  {
    v4 -= 4;
    a2 += 4;
    a1 += 4;
    if ( v4 < 4 )
      return 0;
  }
  v6 = *a1 - *a2;
  if ( !v6 )
  {
    v6 = a1[1] - a2[1];
    if ( !v6 )
    {
      v6 = a1[2] - a2[2];
      if ( !v6 )
        v6 = a1[3] - a2[3];
    }
  }
  return v6 >> 31 == -1;
}
