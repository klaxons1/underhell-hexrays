void __thiscall sub_10411F30(float *this)
{
  int v2; // eax
  double v3; // st6
  double v4; // st5
  double v5; // st5
  double v6; // rt2
  double v7; // st7
  double v8; // rtt
  double v9; // st6
  double v10; // rt0
  double v11; // st4
  double v12; // st5
  double v13; // rt1
  double v14; // st6
  double v15; // st7
  double v16; // st5
  double v17; // st6
  _BYTE v18[12]; // [esp+Ch] [ebp-78h] BYREF
  float v19[3]; // [esp+18h] [ebp-6Ch] BYREF
  float v20[3]; // [esp+24h] [ebp-60h] BYREF
  float v21[3]; // [esp+30h] [ebp-54h] BYREF
  float v22[3]; // [esp+3Ch] [ebp-48h] BYREF
  float v23[3]; // [esp+48h] [ebp-3Ch] BYREF
  float v24[3]; // [esp+54h] [ebp-30h] BYREF
  float v25; // [esp+60h] [ebp-24h] BYREF
  float v26; // [esp+64h] [ebp-20h]
  float v27; // [esp+6Ch] [ebp-18h]
  float v28; // [esp+70h] [ebp-14h]
  float v29; // [esp+74h] [ebp-10h]
  float v30; // [esp+78h] [ebp-Ch]
  float v31; // [esp+7Ch] [ebp-8h]
  float v32; // [esp+80h] [ebp-4h]

  if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
    goto LABEL_2;
  sub_104222B0(this + 182, v22, v21, v20);
  sub_100BCCA0(this, 2, (int)v23, (int)v18);
  v2 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this);
  sub_10411D20((int)this, v2, v24);
  v27 = v24[0] - v23[0];
  v28 = v24[1] - v23[1];
  v29 = v24[2] - v23[2];
  off_10689714();
  v19[0] = v22[2] * v29 + v22[1] * v28 + v22[0] * v27;
  v19[1] = -(v21[1] * v28 + v27 * v21[0] + v21[2] * v29);
  v19[2] = v29 * v20[2] + v28 * v20[1] + v27 * v20[0];
  sub_10422540(v19, &v25);
  v3 = v26;
  v4 = 360.0;
  if ( v26 > 180.0 )
  {
    v5 = v3 - 360.0;
    v26 = v5;
    v6 = v5;
    v4 = 360.0;
    v3 = v6;
  }
  if ( v3 < -180.0 )
  {
    v26 = v3 + v4;
    v3 = v3 + v4;
  }
  v7 = v25;
  if ( v25 > 180.0 )
  {
    v25 = v7 - v4;
    v7 = v7 - v4;
  }
  if ( v7 < -180.0 )
  {
    v8 = v3;
    v9 = v7 + v4;
    v25 = v9;
    v10 = v9;
    v3 = v8;
    v7 = v10;
  }
  v32 = this[905];
  v30 = this[906];
  if ( this[905] < v7 )
  {
    v11 = this[905] + 12.0;
    if ( v11 > v7 )
      v11 = v7;
    this[905] = v11;
  }
  if ( this[905] <= v7 )
  {
    v15 = v3;
  }
  else
  {
    v12 = this[905] - 12.0;
    if ( v12 >= v7 )
    {
      v15 = v3;
      this[905] = v12;
    }
    else
    {
      v13 = v3;
      v14 = v7;
      v15 = v13;
      this[905] = v14;
    }
  }
  if ( v15 > this[906] )
  {
    v16 = this[906] + 24.0;
    if ( v16 > v15 )
      v16 = v15;
    this[906] = v16;
  }
  if ( this[906] > v15 )
  {
    v17 = this[906] - 24.0;
    if ( v17 >= v15 )
      this[906] = v17;
    else
      this[906] = v15;
  }
  this[906] = sub_100BFF30((int)this, 0, this[906]);
  v31 = sub_100BFF30((int)this, 1, this[905]);
  this[905] = v31;
  if ( v31 == v32 && this[906] == v30 )
LABEL_2:
    sub_1023B860(this, (int)"NPC_MissileDefense.Turn");
  else
    sub_1023C380(this, (int)"NPC_MissileDefense.Turn", 0.0, 0);
}
