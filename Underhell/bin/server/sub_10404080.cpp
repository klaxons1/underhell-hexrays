float *__thiscall sub_10404080(int this, float *a2, int a3, float *a4)
{
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st2
  long double v11; // st7
  float *result; // eax
  long double v13; // rtt
  double v14; // st0
  long double v15; // st2
  long double v16; // st5
  double v17; // rt2
  long double v18; // st4
  float v19; // [esp+Ch] [ebp-34h]
  float v20; // [esp+1Ch] [ebp-24h] BYREF
  float v21; // [esp+20h] [ebp-20h]
  float v22; // [esp+24h] [ebp-1Ch]
  float v23; // [esp+28h] [ebp-18h]
  float v24; // [esp+2Ch] [ebp-14h]
  float v25; // [esp+30h] [ebp-10h]
  float v26; // [esp+34h] [ebp-Ch] BYREF
  float v27; // [esp+38h] [ebp-8h]
  float v28; // [esp+3Ch] [ebp-4h]
  float v29; // [esp+48h] [ebp+8h]
  float v30; // [esp+4Ch] [ebp+Ch]

  (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)a3 + 520))(a3, &v26, a2, 0);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  v19 = *(float *)(this + 480) * *(float *)(this + 480)
      + *(float *)(this + 476) * *(float *)(this + 476)
      + *(float *)(this + 484) * *(float *)(this + 484);
  v6 = off_10689708(v19);
  v29 = v6;
  if ( 0.0 == v6 )
    goto LABEL_5;
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a3 + 536))(a3, &v20);
  v22 = 0.0;
  v30 = off_10689714();
  v23 = *a2 - v26;
  v24 = a2[1] - v27;
  v25 = a2[2] - v28;
  v7 = off_10689714();
  v8 = v30;
  v9 = v8 * v8 - v29 * v29;
  v10 = (v23 * v20 + v24 * v21 + v25 * v22) * (v7 * -2.0) * v30;
  v11 = v10 * v10 - v7 * v7 * (v9 * 4.0);
  if ( v11 < 0.0 )
  {
LABEL_5:
    result = a4;
    *a4 = v26;
    a4[1] = v27;
    a4[2] = v28;
  }
  else
  {
    v13 = sqrt(v11);
    v14 = v10;
    v15 = (v13 - v10) / (v9 + v9);
    v16 = (-v14 - v13) / (v9 + v9);
    if ( v15 >= v16 )
      v16 = v15;
    result = a4;
    if ( v16 > 0.0 )
    {
      v17 = v21;
      v18 = v8 * v16;
      *a4 = v20 * v18 + v26;
      a4[1] = v17 * v18 + v27;
      a4[2] = v18 * v22 + v28;
    }
    else
    {
      *a4 = v26;
      a4[1] = v27;
      a4[2] = v28;
    }
  }
  return result;
}
