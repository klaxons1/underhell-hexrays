int __thiscall sub_100FC660(int this)
{
  int v2; // ecx
  unsigned int v3; // esi
  int *v4; // ecx

  v2 = *(_DWORD *)(this + 424);
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 48))(v2, 1);
  sub_101129A0(*(_WORD *)(this + 356) & 0xFFFB);
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
