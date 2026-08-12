int __thiscall sub_101E3450(_DWORD *this)
{
  int v2; // ecx
  int v3; // ecx

  sub_100E9500(this, 0);
  sub_101B4EF0((int)this);
  if ( this[897] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 112))(dword_106BAFF4, this[897]);
    this[897] = 0;
  }
  v2 = this[898];
  if ( v2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 48))(v2, 0);
    sub_101DB3D0(this[898], 0);
    this[898] = 0;
  }
  v3 = this[899];
  if ( v3 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 48))(v3, 0);
    sub_101DB3D0(this[899], 0);
    this[899] = 0;
  }
  return sub_100E8620(this);
}
