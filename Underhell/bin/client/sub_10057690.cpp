_DWORD *__thiscall sub_10057690(_DWORD *this)
{
  int v2; // ebx
  long double v3; // st7
  long double v4; // st6
  int v5; // eax
  long double v6; // rt0
  long double v7; // rt1
  int v9; // [esp+0h] [ebp-1Ch]
  int v10; // [esp+0h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  sub_1003D000((int)this);
  *this = &C_Hairball::`vftable';
  this[1] = &C_Hairball::`vftable';
  this[2] = &C_Hairball::`vftable';
  this[3] = &C_Hairball::`vftable';
  this[302] = 0;
  this[303] = 0;
  this[304] = 0;
  this[305] = 0;
  this[306] = 0;
  this[307] = 0;
  this[308] = 0;
  this[309] = 0;
  this[310] = 0;
  this[311] = 0;
  this[312] = 0;
  this[313] = 0;
  this[314] = 0;
  this[315] = 0;
  this[316] = 0;
  this[317] = &C_Hairball::CHairballDelegate::`vftable';
  sub_10120200(this + 320);
  *((float *)this + 301) = 10.0;
  this[299] = 100;
  this[300] = 3;
  this[305] = 0;
  sub_10057300(this + 302, 0, 300, 0);
  v2 = 0;
  v9 = this[299];
  this[310] = 0;
  sub_10057540(this + 307, 0, v9, 0);
  v10 = this[299];
  this[315] = 0;
  sub_10057540(this + 312, 0, v10, 0);
  *((float *)this + 298) = 20.0;
  *((float *)this + 328) = 0.0;
  *((float *)this + 329) = 0.0;
  *((float *)this + 330) = 0.0;
  *((float *)this + 331) = 1.0;
  *((float *)this + 332) = 0.0;
  *((float *)this + 334) = 0.0;
  *((float *)this + 333) = 0.0;
  if ( (int)this[310] > 0 )
  {
    v12 = 0;
    do
    {
      v11 = RandomFloat(-3.1415927, 3.1415927);
      v3 = RandomFloat(-1.5707964, 1.5707964);
      v4 = cos(v3);
      v5 = this[307];
      ++v2;
      v12 += 12;
      v6 = sin(v11) * v4 * *((float *)this + 298);
      v7 = sin(v3) * *((float *)this + 298);
      *(float *)(v5 + v12 - 12) = v4 * cos(v11) * *((float *)this + 298);
      *(float *)(v5 + v12 - 8) = v6;
      *(float *)(v5 + v12 - 4) = v7;
    }
    while ( v2 < this[310] );
  }
  this[318] = this;
  sub_1011FF50(0.050000001);
  this[326] = 0;
  *((_BYTE *)this + 1340) = 1;
  return this;
}
