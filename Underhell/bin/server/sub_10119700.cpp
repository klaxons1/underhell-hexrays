char __thiscall sub_10119700(int this, char a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int *v6; // ecx

  *(_BYTE *)(this + 1205) = a2;
  if ( a2 )
    return sub_100EAB80((_DWORD *)this, 32);
  v4 = *(_DWORD *)(this + 192);
  v5 = v4 & 0xFFFFFFDF;
  if ( v4 != (v4 & 0xFFFFFFDF) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 192);
    }
    *(_DWORD *)(this + 192) = v5;
  }
  if ( *(_DWORD *)(this + 24) )
    **(_DWORD **)(this + 24) |= 0x80u;
  return sub_100D8500((_DWORD *)this);
}
