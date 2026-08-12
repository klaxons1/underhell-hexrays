int __thiscall sub_100FB0C0(int this)
{
  unsigned int v2; // esi
  int *v3; // ecx

  v2 = *(_DWORD *)(this + 192) & 0xFFFFFFDF;
  if ( *(_DWORD *)(this + 192) != v2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 192);
    }
    *(_DWORD *)(this + 192) = v2;
  }
  if ( *(_DWORD *)(this + 24) )
    **(_DWORD **)(this + 24) |= 0x80u;
  return sub_100D8500((_DWORD *)this);
}
