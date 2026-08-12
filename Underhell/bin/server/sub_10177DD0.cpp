void __thiscall sub_10177DD0(int this)
{
  unsigned int v2; // ebx
  int *v3; // ecx

  sub_101775B0(this);
  if ( (*(_DWORD *)(this + 192) & 0x20) != 0 )
  {
    sub_1023C380((int)"Item.Materialize", 0.0, 0);
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
    sub_100D8500((_DWORD *)this);
    sub_100C1B10(this);
  }
  *(_DWORD *)(this + 196) = sub_10177A20;
}
