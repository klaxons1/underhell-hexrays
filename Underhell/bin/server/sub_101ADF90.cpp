_DWORD *__thiscall sub_101ADF90(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[207];
  *this = &CKeepUpright::`vftable';
  this[200] = &CKeepUpright::`vftable';
  if ( v3 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 120))(dword_106BAFF4, v3);
    this[207] = 0;
  }
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
