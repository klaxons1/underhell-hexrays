_DWORD *__thiscall sub_1005C360(_DWORD *this)
{
  _DWORD *v2; // esi
  int i; // ebx
  int v4; // eax
  void (__thiscall *v5)(_DWORD *); // edx
  char *v6; // esi
  int v7; // ebx

  sub_1003D000((int)this);
  *this = &C_Plasma::`vftable';
  this[1] = &C_Plasma::`vftable';
  this[2] = &C_Plasma::`vftable';
  this[3] = &C_Plasma::`vftable';
  v2 = this + 316;
  for ( i = 5; i >= 0; --i )
  {
    sub_10123DC0(v2);
    *v2 = &C_PlasmaSprite::`vftable';
    v2[1] = &C_PlasmaSprite::`vftable';
    v2[2] = &C_PlasmaSprite::`vftable';
    v2[3] = &C_PlasmaSprite::`vftable';
    v2[298] = &C_PlasmaSprite::`vftable';
    v2 += 326;
  }
  sub_10123DC0(this + 2278);
  *((float *)this + 2601) = -1.0;
  *((float *)this + 2602) = 0.0;
  *((float *)this + 2604) = 0.0;
  *((float *)this + 2603) = -1.0;
  this[301] = 0;
  this[302] = 0;
  *((float *)this + 298) = 0.0;
  this[303] = 0;
  *((float *)this + 299) = 0.0;
  this[304] = 0;
  *((float *)this + 300) = 0.0;
  *((_BYTE *)this + 1256) = 0;
  v4 = this[2278];
  *((float *)this + 305) = 0.0;
  v5 = *(void (__thiscall **)(_DWORD *))(v4 + 392);
  *((float *)this + 306) = 0.0;
  *((float *)this + 307) = 0.0;
  *((float *)this + 308) = 0.0;
  *((float *)this + 309) = 0.0;
  *((float *)this + 2600) = 0.0;
  v5(this + 2278);
  v6 = (char *)(this + 316);
  v7 = 6;
  do
  {
    (*(void (__thiscall **)(char *))(*(_DWORD *)v6 + 392))(v6);
    v6 += 1304;
    --v7;
  }
  while ( v7 );
  return this;
}
