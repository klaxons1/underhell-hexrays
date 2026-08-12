int __thiscall sub_10184CE0(int *this)
{
  int v2; // ecx

  *this = (int)&CommandMenu::`vftable';
  sub_10184970(this, 0);
  this[170] = 0;
  this[175] = 0;
  (*(void (__thiscall **)(int *))(*this + 300))(this);
  v2 = this[166];
  if ( v2 )
  {
    sub_1022AF00(v2);
    this[166] = 0;
  }
  sub_1011A810(this + 172);
  sub_1011A810(this + 167);
  return sub_1026CDE0(this);
}
