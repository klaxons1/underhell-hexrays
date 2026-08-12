bool __stdcall sub_10138B70(int a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  _DWORD *v3; // ecx
  int v4; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // ecx
  int v8; // eax

  v1 = *(_DWORD *)(a1 + 52);
  if ( (v1 & 1) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 256);
    if ( v2 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 256) & 0xFFF) + 2) != v2 >> 12 )
      v3 = 0;
    else
      v3 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 256) & 0xFFF) + 1);
    if ( sub_10136EE0(v3, *(_DWORD *)(a1 + 296), (*(_DWORD *)(a1 + 52) & 0x400) != 0, (float *)(a1 + 60)) )
    {
      *(_DWORD *)(a1 + 52) |= 0x800u;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 52);
      if ( (v4 & 0x4000) == 0 )
        *(_DWORD *)(a1 + 52) = v4 & 0xFFFFFFFE;
    }
    v1 = *(_DWORD *)(a1 + 52);
    if ( (v1 & 0x800) == 0 )
      return 0;
  }
  if ( (v1 & 2) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 260);
    if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 260) & 0xFFF) + 2) != v5 >> 12 )
      v6 = 0;
    else
      v6 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 260) & 0xFFF) + 1);
    if ( sub_10136EE0(v6, *(_DWORD *)(a1 + 300), (v1 & 0x400) != 0, (float *)(a1 + 72)) )
    {
      *(_DWORD *)(a1 + 52) |= 0x1000u;
      return (*(_DWORD *)(a1 + 52) & 0x1000) != 0;
    }
    v8 = *(_DWORD *)(a1 + 52);
    if ( (v8 & 0x4000) == 0 )
    {
      *(_DWORD *)(a1 + 52) = v8 & 0xFFFFFFFD;
      *(float *)(a1 + 200) = *((float *)off_103DC81C + 3);
    }
    return 0;
  }
  return 1;
}
