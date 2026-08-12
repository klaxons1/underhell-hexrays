__int16 __cdecl sub_101D3B70(int a1)
{
  int v1; // edx
  int v2; // esi
  int v3; // eax
  int v4; // eax

  v1 = (unsigned __int8)(a1 >> 23) - 112;
  v2 = (a1 >> 16) & 0x8000;
  v3 = a1 & 0x7FFFFF;
  if ( v1 > 0 )
  {
    if ( (unsigned __int8)(a1 >> 23) == 255 )
    {
      if ( v3 )
      {
        LOWORD(v3) = v2 | (v3 >> 13) | (v3 >> 13 == 0) | 0x7C00;
        return v3;
      }
    }
    else
    {
      if ( (a1 & 0x1000) != 0 )
      {
        v3 += 0x2000;
        if ( (v3 & 0x800000) != 0 )
        {
          v3 = 0;
          ++v1;
        }
      }
      if ( v1 <= 30 )
        return v2 | (v1 << 10) | (v3 >> 13);
      sub_101D3B40();
    }
    LOWORD(v3) = v2 | 0x7C00;
    return v3;
  }
  if ( v1 >= -10 )
  {
    v4 = (v3 | 0x800000) >> (1 - v1);
    if ( (v4 & 0x1000) != 0 )
      v4 += 0x2000;
    return v2 | (v4 >> 13);
  }
  else
  {
    LOWORD(v3) = 0;
  }
  return v3;
}
