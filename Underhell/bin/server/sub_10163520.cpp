_DWORD *__thiscall sub_10163520(_DWORD *this, char a2)
{
  _DWORD *v4; // [esp+4h] [ebp-4h] BYREF

  *this = &CGameWeaponManager::`vftable';
  v4 = this;
  sub_1023E0F0(&v4);
  sub_102375F0(this + 204);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
