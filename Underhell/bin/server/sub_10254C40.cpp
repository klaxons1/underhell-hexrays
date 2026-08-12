int __thiscall sub_10254C40(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  v2 = this[204];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v2);
    this[204] = 0;
  }
  v3 = this[106];
  if ( v3 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 304))(v3);
  return sub_100E20F0(this);
}
