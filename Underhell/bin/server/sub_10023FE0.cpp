bool __thiscall sub_10023FE0(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // eax

  if ( !this[531] )
    return 0;
  if ( a2 >= 1000000000 )
  {
    v4 = a2;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 2160))(this);
    v4 = sub_1007DB30(a2);
  }
  if ( v4 == -1 )
    return 0;
  v5 = v4 - 1000000000;
  if ( v4 == 999999999 )
    return 0;
  v6 = 1 << (v4 & 0x1F);
  return (v6 & this[(v5 >> 5) + 548]) != 0 && (v6 & *(_DWORD *)(this[531] + 4 * (v5 >> 5) + 12)) != 0;
}
