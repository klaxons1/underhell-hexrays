int __thiscall sub_10321840(_DWORD *this)
{
  int v2; // eax

  v2 = this[280];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 56))(dword_106BAFF4, v2);
    this[280] = 0;
  }
  return sub_100E20F0(this);
}
