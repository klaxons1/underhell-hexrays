char __thiscall sub_103C8FF0(int this)
{
  int v2; // eax
  int v4; // ecx

  if ( *(_BYTE *)(this + 2840) )
    return 0;
  v2 = *(_DWORD *)(this + 2372);
  if ( v2 == 17 || v2 == dword_106EBEAC || sub_100C4E90((_DWORD *)this, 137) )
    return 0;
  v4 = *(_DWORD *)(this + 3624);
  if ( v4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 192))(v4);
  else
    return sub_10044E60((_DWORD *)this);
}
