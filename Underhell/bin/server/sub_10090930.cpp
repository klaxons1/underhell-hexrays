double __thiscall sub_10090930(void *this, int a2, float a3)
{
  int v4; // eax
  double v5; // st7
  double v6; // st6
  int v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st5
  double v12; // st4
  double v13; // rt2
  double v14; // st4
  double v15; // st5
  double v16; // st7
  double v17; // rt0
  double v18; // st5
  double v19; // st7
  double result; // st7
  double v21; // st7
  float v22; // [esp+0h] [ebp-24h]
  float v23; // [esp+0h] [ebp-24h]
  float v24; // [esp+Ch] [ebp-18h]
  float v25; // [esp+10h] [ebp-14h]
  float v26; // [esp+14h] [ebp-10h]
  float v27; // [esp+18h] [ebp-Ch]
  float v28; // [esp+1Ch] [ebp-8h]
  float v29; // [esp+20h] [ebp-4h]
  int v30; // [esp+2Ch] [ebp+8h]

  if ( !sub_100D7680(a2) )
    return a3;
  v4 = *(_DWORD *)(*(_DWORD *)this + 2604);
  v5 = *(float *)(v4 + 28);
  v24 = *(float *)(v4 + 28);
  v6 = *(float *)(v4 + 32);
  v7 = *(_DWORD *)(a2 + 2604);
  v28 = *(float *)(v7 + 28);
  v29 = *(float *)(v7 + 32);
  v22 = v5 * v5 + v6 * v6;
  v8 = off_10689708(v22);
  *(float *)&v30 = v8;
  if ( 0.0 == v8 )
  {
    v27 = 0.0;
    v26 = 0.0;
  }
  else
  {
    v9 = 1.0 / v8;
    v26 = v24 * v9;
    v25 = v6;
    v27 = v9 * v25;
  }
  v23 = v28 * v28 + v29 * v29;
  v10 = off_10689708(v23);
  if ( 0.0 == v10 )
  {
    v12 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v11 = v28 * (1.0 / v10);
    v12 = 1.0 / v10 * v29;
  }
  v13 = v12 * v27;
  v14 = v11 * v26;
  v15 = v10;
  v16 = v13 + v14;
  if ( v15 <= 0.0 )
    return a3;
  v17 = v15;
  v18 = v16;
  v19 = v17;
  if ( v18 <= 0.0 )
    return a3;
  if ( *(float *)&v30 * 0.9 > v19 )
    return a3;
  result = 0.0;
  if ( v18 <= 0.86 )
  {
    v21 = a3;
    if ( v18 <= 0.7 )
      return v21 * v21;
    else
      return v21 * (v21 * v21);
  }
  return result;
}
