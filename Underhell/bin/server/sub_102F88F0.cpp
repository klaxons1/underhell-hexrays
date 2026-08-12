int __thiscall sub_102F88F0(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int v4; // eax
  unsigned int v5; // esi
  int *v6; // ecx

  result = sub_100CF460(this);
  if ( result )
  {
    v3 = sub_100CF460(this);
    v4 = *(_DWORD *)(v3 + 192);
    v5 = v4 & 0xFFFFFFDF;
    if ( v4 != (v4 & 0xFFFFFFDF) )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v3 + 24);
        if ( v6 )
          sub_100194B0(v6, 192);
      }
      *(_DWORD *)(v3 + 192) = v5;
    }
    if ( *(_DWORD *)(v3 + 24) )
      **(_DWORD **)(v3 + 24) |= 0x80u;
    return sub_100D8500((_DWORD *)v3);
  }
  return result;
}
