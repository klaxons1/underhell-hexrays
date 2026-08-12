_DWORD *__thiscall sub_1005D2E0(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax

  sub_1003D000((int)this);
  this[298] = &IGameResources::`vftable';
  *this = &C_PlayerResource::`vftable';
  this[1] = &C_PlayerResource::`vftable';
  this[2] = &C_PlayerResource::`vftable';
  this[3] = &C_PlayerResource::`vftable';
  this[298] = &C_PlayerResource::`vftable';
  v2 = this + 417;
  this[417] = 0;
  this[418] = 0;
  this[419] = 0;
  this[420] = 0;
  this[421] = 0;
  this[422] = 0;
  this[423] = 0;
  this[424] = 0;
  this[425] = 0;
  this[426] = 0;
  this[427] = 0;
  this[428] = 0;
  this[429] = 0;
  this[430] = 0;
  this[431] = 0;
  this[432] = 0;
  this[433] = 0;
  this[434] = 0;
  this[435] = 0;
  this[436] = 0;
  this[437] = 0;
  this[438] = 0;
  this[439] = 0;
  this[440] = 0;
  this[441] = 0;
  this[442] = 0;
  this[443] = 0;
  this[444] = 0;
  this[445] = 0;
  this[446] = 0;
  this[447] = 0;
  this[448] = 0;
  memset(this + 317, 0, 0x48u);
  memset(this + 335, 0, 0x48u);
  memset(this + 353, 0, 0x48u);
  this[371] = 0;
  this[372] = 0;
  this[373] = 0;
  this[374] = 0;
  *((_WORD *)this + 750) = 0;
  memset(this + 376, 0, 0x48u);
  this[394] = 0;
  this[395] = 0;
  this[396] = 0;
  this[397] = 0;
  *((_WORD *)this + 796) = 0;
  memset(this + 399, 0, 0x48u);
  v3 = 32;
  do
  {
    *v2++ = -3355444;
    --v3;
  }
  while ( v3 );
  dword_1040D3A8 = (int)this;
  return this;
}
