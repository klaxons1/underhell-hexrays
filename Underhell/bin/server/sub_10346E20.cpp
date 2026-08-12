int __thiscall sub_10346E20(_DWORD *this, float a2)
{
  double v3; // st1
  double v4; // st3
  double v5; // st2
  double v6; // rt0
  double v7; // st3
  double v8; // st4
  double v9; // rt1
  double v10; // st7
  double v11; // st6
  double v12; // st7
  float v14; // [esp+Ch] [ebp-4Ch]
  float v15[3]; // [esp+10h] [ebp-48h] BYREF
  float v16; // [esp+1Ch] [ebp-3Ch]
  float v17; // [esp+20h] [ebp-38h]
  float v18; // [esp+28h] [ebp-30h] BYREF
  float v19; // [esp+2Ch] [ebp-2Ch]
  float v20; // [esp+30h] [ebp-28h]
  float v21; // [esp+34h] [ebp-24h] BYREF
  float v22; // [esp+38h] [ebp-20h]
  float v23; // [esp+3Ch] [ebp-1Ch]
  float v24; // [esp+40h] [ebp-18h] BYREF
  float v25; // [esp+44h] [ebp-14h]
  float v26; // [esp+48h] [ebp-10h]
  float v27; // [esp+4Ch] [ebp-Ch] BYREF
  float v28; // [esp+50h] [ebp-8h]
  float v29; // [esp+54h] [ebp-4h]

  sub_104222B0(this + 182, &v21, &v18, v15);
  v16 = v21 * -16.0;
  v17 = v22 * -16.0;
  v3 = v18 * -16.0 + v16;
  v27 = v3;
  v28 = v19 * -16.0 + v17;
  v29 = v20 * -16.0 + -16.0 * v23;
  v4 = -a2;
  v14 = v20 * 16.0;
  v16 = v21 * 16.0;
  v17 = v22 * 16.0;
  v5 = v15[0] * v4 + v18 * 16.0 + v16;
  v24 = v5;
  v6 = v4 * v15[2];
  v7 = v15[1] * v4 + v19 * 16.0 + v17;
  v25 = v7;
  v8 = v6 + 16.0 * v23 + v14;
  v26 = v8;
  if ( v3 > v5 )
  {
    v27 = v5;
    v24 = v3;
  }
  if ( v28 <= v7 )
  {
    v10 = v8;
  }
  else
  {
    v9 = v28;
    v28 = v7;
    v10 = v8;
    v25 = v9;
  }
  if ( v29 > v10 )
  {
    v11 = v10;
    v12 = v29;
    v29 = v11;
    v26 = v12;
  }
  sub_100D5D10((int)&v27, (int)&v24);
  return sub_1025F360(this, (int)&v27, (int)&v24);
}
