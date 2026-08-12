int __thiscall sub_1002B310(float *this, float *a2, float a3)
{
  int result; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  bool v8; // c3
  double v9; // st7
  double v10; // st6
  double v11; // st6
  double v12; // st4
  double v13; // st1
  double v14; // rtt
  double v15; // rt0
  double v16; // st1
  double v17; // st4
  double v18; // st1
  double v19; // st6
  double v20; // st7
  double v21; // st4
  double v22; // st5
  double v23; // st7
  long double v24; // st7
  long double v25; // st5
  double v26; // st7
  long double v27; // st5
  long double v28; // st4
  double v29; // st2
  double v30; // rt0
  long double v31; // st2
  long double v32; // rt1
  double v33; // rt2
  long double v34; // st2
  double v35; // st4
  long double v36; // rtt
  double v37; // st2
  long double v38; // st7
  double v39; // st2
  long double v40; // st6
  double v41; // st7
  float v42; // [esp+4h] [ebp-24h]
  float v43[3]; // [esp+10h] [ebp-18h] BYREF
  float v44[2]; // [esp+1Ch] [ebp-Ch] BYREF
  float v45; // [esp+24h] [ebp-4h]

  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 1672))(this);
  if ( (result & 0x1000) != 0 )
  {
    v5 = *a2 - this[179];
    v43[0] = v5;
    v6 = a2[1] - this[180];
    v43[1] = v6;
    v7 = a2[2] - this[181];
    v43[2] = v7;
    v8 = 0.0 == v5;
    v9 = 0.0;
    if ( v8 && 0.0 == v6 && 0.0 == v7 )
    {
      v10 = this[183];
    }
    else
    {
      v10 = sub_10265030(v43);
      v9 = 0.0;
    }
    v11 = v10 - this[183];
    if ( v11 > 180.0 )
      v11 = v11 - 360.0;
    if ( v11 < -180.0 )
      v11 = v11 + 360.0;
    v12 = a3;
    if ( a3 <= v9 )
    {
      v19 = 360.0;
    }
    else
    {
      v13 = this[667];
      while ( 1 )
      {
        v15 = v13 * 0.80000001 + v11 * 0.19999999;
        v16 = v12;
        v17 = v15;
        v18 = v16 - 0.1;
        if ( v18 <= v9 )
          break;
        v14 = v18;
        v13 = v17;
        v12 = v14;
      }
      v19 = 360.0;
      this[667] = v17;
    }
    if ( v19 < this[667] )
      this[667] = v9;
    v20 = this[667];
    sub_100BFF30(0, this[667]);
    this[667] = v20;
    (*(void (__thiscall **)(float *, float *))(*(_DWORD *)this + 504))(this, v44);
    v21 = a2[1] - v44[1];
    v22 = a2[2] - v45;
    v42 = v22 * v22 + v21 * v21 + (*a2 - v44[0]) * (*a2 - v44[0]);
    v23 = off_10689708(v42);
    v24 = -(atan2((a2[2] - v45) / v23, 1.0) * 57.29578);
    if ( a3 <= 0.0 )
    {
      v41 = 0.0;
    }
    else
    {
      v25 = v24;
      v26 = a3;
      v27 = v25 * 0.19999999;
      v28 = this[668];
      v29 = 0.80000001;
      while ( 1 )
      {
        v33 = v29;
        v34 = v28 * v29;
        v35 = v33;
        v36 = v34 + v27;
        v37 = v26;
        v38 = v36;
        v39 = v37 - 0.1;
        if ( v39 <= 0.0 )
          break;
        v30 = v39;
        v31 = v38;
        v26 = v30;
        v32 = v31;
        v29 = v35;
        v28 = v32;
      }
      v40 = v38;
      v41 = 0.0;
      this[668] = v40;
    }
    if ( this[668] > 360.0 )
      this[668] = v41;
    return sub_100BFF30(1, this[668]);
  }
  return result;
}
