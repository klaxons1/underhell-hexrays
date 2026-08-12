int __thiscall sub_1004DD00(_DWORD *this)
{
  int v2; // ecx
  int v3; // edi
  int i; // ebx
  int v5; // edi
  int j; // ebx

  v2 = this[2917];
  *this = &C_FireSmoke::`vftable';
  this[1] = &C_FireSmoke::`vftable';
  this[2] = &C_FireSmoke::`vftable';
  this[3] = &C_FireSmoke::`vftable';
  if ( v2 )
  {
    sub_100F1890(0, 0, 1);
    this[2917] = 0;
  }
  v3 = (int)(this + 2910);
  for ( i = 3; i >= 0; --i )
  {
    v3 -= 1288;
    sub_1003D350(v3);
  }
  v5 = (int)(this + 1622);
  for ( j = 3; j >= 0; --j )
  {
    v5 -= 1304;
    sub_1003D350(v5);
  }
  if ( this[316] )
    sub_100F2FF0();
  return sub_1003D350((int)this);
}
