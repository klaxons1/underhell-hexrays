int __thiscall sub_1032EC20(_DWORD *this, int a2)
{
  int v2; // edi
  int v5; // ecx

  v2 = a2;
  if ( a2 == 6 && sub_100697A0(this, 75, 0) )
    v2 = 11;
  if ( (this[64] & 0x8000000) != 0 )
  {
    if ( v2 == 1 )
      return 125;
    if ( v2 == 6 || v2 == 127 )
      return 126;
  }
  v5 = this[906];
  if ( v5 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 136))(v5, v2);
  else
    return sub_1002CC40(this, v2);
}
