float *__thiscall sub_1008D160(int this, float *a2, int a3)
{
  int v4; // eax
  double v6; // st7
  int v7; // eax
  double v8; // st7
  long double v9; // st6
  long double v10; // st5
  long double v11; // rt0
  long double v12; // st5
  long double v13; // st6
  long double v14; // st5
  long double v15; // rt2
  long double v16; // rtt
  double v17; // st6
  long double v18; // st5
  long double v19; // st7
  double v20; // st6
  long double v21; // st2
  long double v22; // st1
  long double v23; // st6
  double v24; // st4
  long double v25; // rt2
  double v26; // st0
  double v27; // st4
  float *result; // eax
  long double v29; // rtt
  long double v30; // rt0
  double v31; // st6
  bool v32; // zf
  int v33; // ecx
  int v34; // edx
  float v35[3]; // [esp+4h] [ebp-24h] BYREF
  float v36[3]; // [esp+10h] [ebp-18h] BYREF
  float v37; // [esp+1Ch] [ebp-Ch] BYREF
  float v38; // [esp+20h] [ebp-8h]
  float v39; // [esp+24h] [ebp-4h]
  float v40; // [esp+34h] [ebp+Ch]

  v4 = *(_DWORD *)(this + 60);
  if ( v4 == 4 )
  {
    v6 = sub_10073790(a3);
    v7 = *(_DWORD *)(this + 64);
    v8 = v6 * 0.5 + 8.0;
    v40 = v8;
    v9 = *(float *)(this + 56) * 0.017453292;
    v10 = cos(v9);
    v37 = v10;
    v11 = v10;
    v12 = v9;
    v13 = v11;
    v14 = sin(v12);
    v38 = v14;
    v39 = 0.0;
    if ( (v7 & 4) != 0 )
    {
      v15 = v13 * v8;
      v16 = v14 * v8;
      v17 = 0.0 * v8;
      v18 = v15 + *(float *)(this + 4);
      v19 = v16 + *(float *)(this + 8);
      v20 = v17 + *(float *)(this + 12);
    }
    else if ( (v7 & 8) != 0 )
    {
      v21 = -v13;
      v22 = v13;
      v23 = v13 * 0.0 - v14 * 0.0;
      v24 = 0.0 * v8;
      v25 = v14 * v8;
      v26 = v8 + v8;
      v18 = *(float *)(this + 4) - v14 * v26 - v22 * v8;
      v19 = *(float *)(this + 8) - v21 * v26 - v25;
      v20 = *(float *)(this + 12) - v23 * v26 - v24;
    }
    else if ( (v7 & 0x10) != 0 )
    {
      v36[0] = 0.0;
      v36[1] = 0.0;
      v36[2] = 1.0;
      sub_1001EFB0(&v37, v36, v35);
      v27 = v40 + v40;
      v20 = v27 * v35[2] + *(float *)(this + 12) - v40 * 0.0;
      v18 = v35[0] * v27 + *(float *)(this + 4) - v37 * v40;
      v19 = v27 * v35[1] + *(float *)(this + 8) - v38 * v40;
    }
    else
    {
      v29 = v13 * v8;
      v30 = v14 * v8;
      v31 = 0.0 * v8;
      v18 = *(float *)(this + 4) - v29;
      v19 = *(float *)(this + 8) - v30;
      v20 = *(float *)(this + 12) - v31;
    }
    result = a2;
    *a2 = v18;
    a2[1] = v19;
    a2[2] = v20 + *(float *)(this + 4 * a3 + 16);
  }
  else
  {
    v32 = v4 == 2;
    result = a2;
    if ( v32 )
    {
      *a2 = *(float *)(this + 4);
      a2[1] = *(float *)(this + 8);
      a2[2] = *(float *)(this + 4 * a3 + 16) + *(float *)(this + 12);
    }
    else
    {
      v33 = *(_DWORD *)(this + 8);
      *a2 = *(float *)(this + 4);
      v34 = *(_DWORD *)(this + 12);
      *((_DWORD *)a2 + 1) = v33;
      *((_DWORD *)a2 + 2) = v34;
    }
  }
  return result;
}
