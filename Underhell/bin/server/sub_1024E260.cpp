void __thiscall sub_1024E260(int this, float *a2, float *a3, float a4)
{
  double v6; // st7
  long double v7; // st7
  long double v8; // st6
  long double v9; // st5
  double v10; // st4
  bool v11; // c0
  double v12; // st6
  double v13; // st4
  long double v14; // rt0
  long double v15; // st5
  long double v16; // st7
  long double v17; // st6
  long double v18; // st7
  float v19; // [esp+0h] [ebp-24h]
  float v20; // [esp+0h] [ebp-24h]
  float v21; // [esp+4h] [ebp-20h]
  float v22; // [esp+4h] [ebp-20h]
  float v23; // [esp+8h] [ebp-1Ch]
  float v24; // [esp+8h] [ebp-1Ch]
  float v25[2]; // [esp+18h] [ebp-Ch] BYREF
  float v26; // [esp+20h] [ebp-4h]
  int v27; // [esp+30h] [ebp+Ch]

  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    v6 = 0.0;
  }
  else
  {
    v6 = *a3;
    sub_10424C60(*a3, *a2);
  }
  *(float *)&v27 = v6;
  v7 = a3[1];
  sub_10424C60(a3[1], a2[1]);
  if ( fabs(*(float *)&v27) >= 0.1 )
  {
    v9 = 0.0;
    v10 = *(float *)&v27;
    v8 = 0.1;
  }
  else
  {
    v8 = 0.1;
    v9 = 0.0;
    v10 = 0.0;
  }
  v11 = fabs(v7) < v8;
  v12 = v10;
  if ( v11 )
    v7 = v9;
  v13 = a4;
  if ( v9 == a4 )
    v13 = 0.1;
  v25[0] = v12 / v13;
  v14 = v9;
  v15 = v7;
  v16 = v14;
  v17 = v15 / v13;
  v25[1] = v15 / v13;
  v26 = *(float *)(this + 496);
  if ( v14 != *(float *)(this + 852) )
  {
    if ( v17 >= -5.0 )
    {
      if ( v17 <= 5.0 )
      {
        v24 = *(float *)(this + 852) * 4.0;
        v20 = v16;
        sub_10424B50(v20, a2[2], v24);
        v22 = v16;
        sub_10424C60(v22, a2[2]);
        v18 = v16 * 4.0;
        goto LABEL_17;
      }
      v18 = *(float *)(this + 852);
    }
    else
    {
      v18 = -*(float *)(this + 852);
    }
    v23 = *(float *)(this + 852) + *(float *)(this + 852);
    v19 = v18;
    sub_10424B50(v19, a2[2], v23);
    v21 = v18;
    sub_10424C60(v21, a2[2]);
LABEL_17:
    v26 = v18;
    sub_100D7260((float *)this, v25);
    return;
  }
  sub_100D7260((float *)this, v25);
}
