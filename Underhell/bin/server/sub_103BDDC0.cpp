int __thiscall sub_103BDDC0(char *this, float a2)
{
  double v2; // st1
  double v3; // st3
  double v4; // st2
  double v5; // rt0
  double v6; // st3
  double v7; // st4
  double v8; // rt1
  double v9; // st7
  double v10; // st6
  double v11; // st7
  float v13; // [esp+Ch] [ebp-4Ch]
  float v14[3]; // [esp+10h] [ebp-48h] BYREF
  float v15; // [esp+1Ch] [ebp-3Ch]
  float v16; // [esp+20h] [ebp-38h]
  float v17; // [esp+28h] [ebp-30h] BYREF
  float v18; // [esp+2Ch] [ebp-2Ch]
  float v19; // [esp+30h] [ebp-28h]
  float v20; // [esp+34h] [ebp-24h] BYREF
  float v21; // [esp+38h] [ebp-20h]
  float v22; // [esp+3Ch] [ebp-1Ch]
  float v23; // [esp+40h] [ebp-18h] BYREF
  float v24; // [esp+44h] [ebp-14h]
  float v25; // [esp+48h] [ebp-10h]
  float v26; // [esp+4Ch] [ebp-Ch] BYREF
  float v27; // [esp+50h] [ebp-8h]
  float v28; // [esp+54h] [ebp-4h]

  sub_104222B0(this + 728, &v23, &v17, v14);
  v15 = v23 * -16.0;
  v16 = v24 * -16.0;
  v2 = v17 * -16.0 + v15;
  v26 = v2;
  v27 = v18 * -16.0 + v16;
  v28 = v19 * -16.0 + -16.0 * v25;
  v3 = -a2;
  v13 = v19 * 16.0;
  v15 = v23 * 16.0;
  v16 = v24 * 16.0;
  v4 = v14[0] * v3 + v17 * 16.0 + v15;
  v20 = v4;
  v5 = v3 * v14[2];
  v6 = v14[1] * v3 + v18 * 16.0 + v16;
  v21 = v6;
  v7 = v5 + 16.0 * v25 + v13;
  v22 = v7;
  if ( v2 > v4 )
  {
    v26 = v4;
    v20 = v2;
  }
  if ( v27 <= v6 )
  {
    v9 = v7;
  }
  else
  {
    v8 = v27;
    v27 = v6;
    v9 = v7;
    v21 = v8;
  }
  if ( v28 > v9 )
  {
    v10 = v9;
    v11 = v28;
    v28 = v10;
    v22 = v11;
  }
  return sub_100D5D10((int)&v26, (int)&v20);
}
