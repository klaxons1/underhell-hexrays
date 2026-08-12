_DWORD *__thiscall sub_1014F690(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &CFuncLadder::`vftable';
  v4 = this;
  sub_1023E0F0(&v4);
  sub_1010BB10(this + 222);
  sub_1010BB10(this + 216);
  sub_102375F0(this + 203);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
