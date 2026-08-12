_DWORD *__thiscall sub_10064590(_DWORD *this)
{
  char v2; // cl
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // eax

  sub_1003D000((int)this);
  *this = &C_RopeKeyframe::`vftable';
  this[1] = &C_RopeKeyframe::`vftable';
  this[2] = &C_RopeKeyframe::`vftable';
  this[3] = &C_RopeKeyframe::`vftable';
  if ( this != (_DWORD *)-1192 )
    this[298] = 0;
  sub_101167C0(this + 328, 10, this + 418, this + 436);
  this[314] = &CRopePhysics<10>::`vftable';
  this[477] = -1;
  this[478] = -1;
  this[486] = &C_RopeKeyframe::CPhysicsDelegate::`vftable';
  v2 = *((_BYTE *)this + 2073);
  this[487] = this;
  this[488] = 0;
  this[312] = 0;
  this[490] = 1;
  *((_BYTE *)this + 2073) = v2 & 0xF4 | 3;
  this[478] = -1;
  this[477] = -1;
  this[479] = 0;
  *((float *)this + 503) = 1.0;
  *((float *)this + 504) = 1.0;
  *((float *)this + 505) = 1.0;
  this[299] = 0;
  *((_BYTE *)this + 1920) = -1;
  *((float *)this + 311) = 0.0;
  this[484] = 0;
  *((float *)this + 310) = 0.0;
  this[301] = 0;
  this[302] = 0;
  *((float *)this + 483) = 4.0;
  *((float *)this + 491) = 0.0;
  *((float *)this + 492) = 0.0;
  *((float *)this + 493) = 0.0;
  v3 = sub_10062A90(&dword_103DBBD8, 0);
  sub_100636B0(&dword_103DBBD8, v3);
  v4 = dword_103DBBD8;
  v5 = 12 * v3;
  *(_DWORD *)(dword_103DBBD8 + v5 + 8) = -1;
  v6 = dword_103DBBE8;
  *(_DWORD *)(v4 + v5 + 4) = dword_103DBBE8;
  dword_103DBBE8 = v3;
  if ( v6 == -1 )
    dword_103DBBE4 = v3;
  else
    *(_DWORD *)(dword_103DBBD8 + 12 * v6 + 8) = v3;
  v7 = (_DWORD *)(dword_103DBBD8 + v5);
  ++dword_103DBBF0;
  if ( v7 )
    *v7 = this;
  return this;
}
