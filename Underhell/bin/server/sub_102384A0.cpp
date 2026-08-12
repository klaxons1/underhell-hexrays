int __thiscall sub_102384A0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // esi
  int v16; // eax
  int result; // eax

  v2 = 10 * this[55];
  this[208] = v2;
  if ( v2 > 100 )
    this[208] = 100;
  if ( (int)this[208] < 0 )
    this[208] = 0;
  v3 = this[203];
  if ( v3 && v3 <= 27 )
  {
    qmemcpy(this + 203, (char *)&unk_1064B4B4 + 100 * v3, 0x64u);
    v4 = this[207];
    if ( v4 > 0 )
      this[207] = (101 - v4) << 6;
    v5 = this[206];
    if ( v5 > 0 )
      this[206] = (101 - v5) << 6;
    this[209] *= 10;
    v6 = this[210];
    this[208] *= 10;
    if ( v6 > 0 )
      this[210] = (101 - v6) << 6;
    v7 = this[211];
    if ( v7 > 0 )
      this[211] = (101 - v7) << 6;
    v8 = this[210];
    this[213] <<= 8;
    v9 = this[211];
    this[223] = v8;
    v10 = this[206];
    this[224] = v9;
    v11 = this[207];
    this[219] = v10;
    this[220] = v11;
  }
  v12 = this[223];
  this[210] = v12;
  this[211] = 0;
  if ( v12 )
    this[222] = this[209];
  else
    this[222] = this[208];
  v13 = this[219];
  this[206] = v13;
  this[207] = 0;
  if ( v13 )
    this[218] = this[205];
  else
    this[218] = this[204];
  if ( !this[218] )
    this[218] = 100;
  v14 = this[218];
  v15 = this[216];
  this[225] = this[222] << 8;
  v16 = this[213];
  this[226] = 0;
  result = abs32(v16);
  this[221] = v14 << 8;
  this[213] = result;
  this[217] = 1;
  if ( v15 )
  {
    result = this[205] + (255 - this[205]) / v15;
    this[204] = result;
    if ( result > 255 )
      this[204] = 255;
  }
  if ( (this[219] || this[220] || this[212] && this[214]) && v14 == 100 )
    this[218] = 101;
  return result;
}
