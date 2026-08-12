_DWORD *__thiscall sub_1004DC30(_DWORD *this)
{
  _DWORD *v2; // esi
  int i; // edi
  _DWORD *v4; // esi
  int j; // edi
  _DWORD *result; // eax

  sub_1003D000((int)this);
  *this = &C_FireSmoke::`vftable';
  this[1] = &C_FireSmoke::`vftable';
  this[2] = &C_FireSmoke::`vftable';
  this[3] = &C_FireSmoke::`vftable';
  this[316] = 0;
  v2 = this + 318;
  for ( i = 3; i >= 0; --i )
  {
    sub_10123DC0(v2);
    *v2 = &C_FireSprite::`vftable';
    v2[1] = &C_FireSprite::`vftable';
    v2[2] = &C_FireSprite::`vftable';
    v2[3] = &C_FireSprite::`vftable';
    v2[298] = &C_FireSprite::`vftable';
    v2 += 326;
  }
  v4 = this + 1622;
  for ( j = 3; j >= 0; --j )
  {
    sub_10123DC0(v4);
    *v4 = &C_FireFromAboveSprite::`vftable';
    v4[1] = &C_FireFromAboveSprite::`vftable';
    v4[2] = &C_FireFromAboveSprite::`vftable';
    v4[3] = &C_FireFromAboveSprite::`vftable';
    v4[298] = &C_FireFromAboveSprite::`vftable';
    v4 += 322;
  }
  *((float *)this + 2914) = -1.0;
  result = this;
  *((float *)this + 2915) = 0.0;
  return result;
}
