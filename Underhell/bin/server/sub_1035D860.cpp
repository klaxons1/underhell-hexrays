char __thiscall sub_1035D860(int this, float *a2, float a3, float *a4)
{
  float *v5; // eax
  double v6; // st7
  int v7; // eax
  int v8; // ecx
  double v9; // st6
  double v10; // st7
  double v11; // st5
  double v12; // st3
  double v13; // st4
  double v14; // st2
  _BYTE v16[24]; // [esp+Ch] [ebp-74h] BYREF
  float v17; // [esp+24h] [ebp-5Ch]
  float v18; // [esp+28h] [ebp-58h]
  float v19; // [esp+2Ch] [ebp-54h]
  float v20; // [esp+38h] [ebp-48h]
  float v21[3]; // [esp+60h] [ebp-20h] BYREF
  float v22; // [esp+6Ch] [ebp-14h]
  float v23; // [esp+70h] [ebp-10h]
  float v24; // [esp+74h] [ebp-Ch]
  float *v25; // [esp+78h] [ebp-8h]
  float *v26; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v26 = (float *)sub_10073730(*(_DWORD *)(this + 1676));
  v5 = (float *)sub_10073710(*(_DWORD *)(this + 1676));
  v6 = *a2;
  v25 = v5;
  v7 = *(_DWORD *)(this + 252) >> 11;
  v22 = v6 * a3;
  v23 = a2[1] * a3;
  v24 = a3 * a2[2];
  if ( (v7 & 1) != 0 )
    sub_100DAE60(this);
  v8 = *(_DWORD *)(this + 252) >> 11;
  v21[0] = v22 + *(float *)(this + 580);
  v21[1] = *(float *)(this + 584) + v23;
  v21[2] = *(float *)(this + 588) + v24;
  if ( (v8 & 1) != 0 )
    sub_100DAE60(this);
  sub_100231A0((int)&savedregs, this, (float *)(this + 580), v21, v25, v26, 33701899, this, 26, (int)v16);
  if ( v20 >= 1.0 )
  {
    *a4 = flt_106F1CA8;
    a4[1] = flt_106F1CAC;
    a4[2] = flt_106F1CB0;
    return 0;
  }
  else
  {
    v9 = v19;
    v10 = v18;
    v11 = a2[1] * v19 - a2[2] * v18;
    v12 = v17;
    v13 = a2[2] * v17 - *a2 * v19;
    v14 = *a2 * v18 - a2[1] * v17;
    *a4 = v18 * v14 - v19 * v13;
    a4[1] = v9 * v11 - v14 * v12;
    a4[2] = v12 * v13 - v10 * v11;
    off_10689714();
    return 1;
  }
}
