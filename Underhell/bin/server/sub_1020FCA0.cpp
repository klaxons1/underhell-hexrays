int __thiscall sub_1020FCA0(int this, int a2)
{
  unsigned int v3; // esi
  int *v4; // ecx

  v3 = *(_DWORD *)(this + 192) & 0xFFFFFFDF;
  if ( *(_DWORD *)(this + 192) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 192);
    }
    *(_DWORD *)(this + 192) = v3;
  }
  if ( *(_DWORD *)(this + 24) )
    **(_DWORD **)(this + 24) |= 0x80u;
  return sub_100D8500((_DWORD *)this);
}
