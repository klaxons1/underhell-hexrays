_DWORD *__thiscall sub_1009E6D0(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &C_FuncLadder::`vftable';
  this[1] = &C_FuncLadder::`vftable';
  this[2] = &C_FuncLadder::`vftable';
  this[3] = &C_FuncLadder::`vftable';
  v4 = this;
  sub_1012D820(&v4);
  sub_1011A810(this + 301);
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
