_DWORD *__thiscall sub_101B3430(_DWORD *this, char a2)
{
  *this = &CPhysConstraint::`vftable';
  sub_101B0490((int)this);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, this[200]);
  sub_1010BB10(this + 209);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
