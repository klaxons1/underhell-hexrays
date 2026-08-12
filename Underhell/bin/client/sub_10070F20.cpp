int __thiscall sub_10070F20(_DWORD *this, int a2)
{
  int v3; // eax
  int result; // eax
  int v5; // eax

  sub_1003CD40(this, a2);
  if ( !a2 || this[300] != this[310] )
  {
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_104131D0 + 36))(dword_104131D0, this[300]);
    sub_10070A40(this - 2, v3);
    this[301] = 0;
  }
  result = this[311];
  if ( result != this[308] )
  {
    sub_10233210(this + 314);
    v5 = sub_100744B0(this[308]);
    if ( v5 )
      return sub_102334D0(v5, "VGUI textures", 1);
    else
      return sub_10233340(this + 313);
  }
  return result;
}
