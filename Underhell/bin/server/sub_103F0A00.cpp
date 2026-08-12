int __thiscall sub_103F0A00(int this)
{
  int *v2; // ecx
  int result; // eax
  int *v4; // ecx

  sub_103EBA20(this);
  *(float *)(this + 1956) = 0.0;
  *(_DWORD *)this = &CPropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 1120) = &CPropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 1484) = &CPropJeepEpisodic::`vftable';
  *(_DWORD *)(this + 1488) = &CPropJeepEpisodic::`vftable';
  *(_WORD *)(this + 1948) = 0;
  *(_BYTE *)(this + 1950) = 0;
  *(_DWORD *)(this + 1972) = -1;
  *(_DWORD *)(this + 1960) = 0;
  *(_DWORD *)(this + 1976) = 5;
  *(_DWORD *)(this + 1996) = -1;
  *(_DWORD *)(this + 1984) = 0;
  *(_DWORD *)(this + 2000) = 5;
  *(_DWORD *)(this + 2020) = -1;
  *(_DWORD *)(this + 2008) = 0;
  *(_DWORD *)(this + 2024) = 5;
  *(_DWORD *)(this + 2044) = -1;
  *(_DWORD *)(this + 2032) = 0;
  *(_DWORD *)(this + 2048) = 5;
  *(_DWORD *)(this + 2056) = -1;
  *(_DWORD *)(this + 2060) = -1;
  *(_DWORD *)(this + 2064) = -1;
  *(_DWORD *)(this + 2068) = -1;
  *(_DWORD *)(this + 2072) = -1;
  *(_DWORD *)(this + 2076) = -1;
  *(_DWORD *)(this + 2080) = -1;
  *(_DWORD *)(this + 2084) = -1;
  *(_DWORD *)(this + 2088) = -1;
  *(_DWORD *)(this + 2092) = -1;
  *(_DWORD *)(this + 2108) = -1;
  *(_DWORD *)(this + 2112) = -1;
  *(_DWORD *)(this + 2116) = -1;
  if ( *(_BYTE *)(this + 1689) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 1689);
    }
    *(_BYTE *)(this + 1689) = 0;
  }
  result = this;
  if ( *(_BYTE *)(this + 1688) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_BYTE *)(this + 1688) = 1;
      *(_BYTE *)(this + 2101) = 0;
      return result;
    }
    v4 = *(int **)(this + 24);
    if ( v4 )
      sub_100194B0(v4, 1688);
    *(_BYTE *)(this + 1688) = 1;
    result = this;
  }
  *(_BYTE *)(this + 2101) = 0;
  return result;
}
