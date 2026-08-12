char __thiscall sub_1032EB30(int this, int a2, float *a3)
{
  bool v4; // bl

  v4 = (*(_DWORD *)(a2 + 64) & 0x10) != 0;
  if ( *(_BYTE *)(this + 3776)
    || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 2248))(this, a2)
    && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)this + 2252))(this, a2)
    || v4 )
  {
    return sub_100C93E0((_DWORD *)this, a2, a3);
  }
  if ( (*(_DWORD *)(this + 256) & 0x20000000) == 0 )
    sub_100E1400((unsigned __int16 *)this);
  return 1;
}
