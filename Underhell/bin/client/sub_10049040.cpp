int __thiscall sub_10049040(_DWORD *this)
{
  int v2; // eax

  v2 = this[315];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436254 + 120))(dword_10436254, v2);
    this[315] = 0;
  }
  return sub_1003BCD0(this);
}
