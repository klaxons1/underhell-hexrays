float *__thiscall sub_103A6B80(int this, float *a2)
{
  float *v3; // eax
  unsigned int v4; // eax
  float *result; // eax
  float v6; // ecx
  float v7; // edx
  unsigned int v8; // eax
  float *v9; // eax
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  long double v15; // st7
  long double v16; // st5
  long double v17; // st6
  double v18; // st3
  long double v19; // st7
  float v20; // edx
  float v21; // eax
  double v22; // st6
  double v23; // st7
  int v24; // edx
  double v25; // st5
  double v26; // st6
  double v27; // st7
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  float v31; // [esp+0h] [ebp-84h]
  float v32; // [esp+0h] [ebp-84h]
  _BYTE v33[12]; // [esp+Ch] [ebp-78h] BYREF
  int v34; // [esp+18h] [ebp-6Ch]
  int v35; // [esp+1Ch] [ebp-68h]
  int v36; // [esp+20h] [ebp-64h]
  float v37[3]; // [esp+60h] [ebp-24h] BYREF
  float v38; // [esp+6Ch] [ebp-18h]
  float v39; // [esp+70h] [ebp-14h]
  float v40; // [esp+74h] [ebp-10h]
  float v41; // [esp+78h] [ebp-Ch]
  float v42; // [esp+7Ch] [ebp-8h]
  float v43; // [esp+80h] [ebp-4h]
  int savedregs; // [esp+84h] [ebp+0h] BYREF

  v3 = (float *)sub_103A5910((float *)this, v37);
  v41 = *v3 - *(float *)(this + 716);
  v42 = v3[1] - *(float *)(this + 720);
  v43 = v3[2] - *(float *)(this + 724);
  off_10689714();
  v4 = *(_DWORD *)(this + 3916);
  if ( v4 != -1
    && off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 2] == v4 >> 12
    && off_1061BE18[4 * (*(_DWORD *)(this + 3916) & 0xFFF) + 1] )
  {
    v8 = *(_DWORD *)(this + 3920);
    if ( v8 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 2] != v8 >> 12 )
      v9 = 0;
    else
      v9 = (float *)off_1061BE18[4 * (*(_DWORD *)(this + 3920) & 0xFFF) + 1];
    v10 = v9[180] - *(float *)(this + 720);
    v11 = v10 * v10;
    v12 = v9[179] - *(float *)(this + 716);
    v13 = v11;
    v14 = v9[181] - *(float *)(this + 724);
    v31 = v12 * v12 + v13 + v14 * v14;
    v15 = atan2(50.0 / off_10689708(v31), 1.0);
    v16 = (v41 - *(float *)(this + 3924)) * v15;
    v17 = (v42 - *(float *)(this + 3928)) * v15;
    v18 = *(float *)(this + 3940) * 0.40000001;
    v19 = v15 * (v43 - *(float *)(this + 3932)) * 0.60000002 + 0.40000001 * *(float *)(this + 3944);
    *(float *)(this + 3936) = v16 * 0.60000002 + *(float *)(this + 3936) * 0.40000001;
    *(float *)(this + 3940) = v17 * 0.60000002 + v18;
    *(float *)(this + 3944) = v19;
    v32 = *(float *)(this + 3944) * *(float *)(this + 3944)
        + *(float *)(this + 3936) * *(float *)(this + 3936)
        + *(float *)(this + 3940) * *(float *)(this + 3940);
    if ( off_10689708(v32) > 1.0 )
    {
      v20 = *(float *)(this + 3936);
      v21 = *(float *)(this + 3940);
      v40 = *(float *)(this + 3944);
      v38 = v20;
      v39 = v21;
      off_10689714();
      *(float *)(this + 3936) = v38;
      *(float *)(this + 3940) = v39;
      *(float *)(this + 3944) = v40;
    }
    v22 = *(float *)(this + 3928) + *(float *)(this + 3940);
    v23 = *(float *)(this + 3932) + *(float *)(this + 3944);
    *(float *)(this + 3924) = *(float *)(this + 3924) + *(float *)(this + 3936);
    *(float *)(this + 3928) = v22;
    *(float *)(this + 3932) = v23;
    *(float *)(this + 3924) = *(float *)(this + 3924);
    *(float *)(this + 3928) = *(float *)(this + 3928);
    *(float *)(this + 3932) = *(float *)(this + 3932);
    off_10689714();
    v24 = *(_DWORD *)(this + 252) >> 11;
    v25 = *(float *)(this + 3928) * 2.0;
    v26 = 2.0 * *(float *)(this + 3932);
    v27 = *(float *)(this + 3952);
    v38 = *(float *)(this + 3924) * 2.0 * v27;
    v39 = v25 * v27;
    v40 = v27 * v26;
    if ( (v24 & 1) != 0 )
      sub_100DAE60(this);
    v28 = *(_DWORD *)(this + 252) >> 11;
    v37[0] = v38 + *(float *)(this + 580);
    v37[1] = *(float *)(this + 584) + v39;
    v37[2] = *(float *)(this + 588) + v40;
    if ( (v28 & 1) != 0 )
      sub_100DAE60(this);
    sub_1002A5F0((int)&savedregs, this, (float *)(this + 580), v37, 16513, this, 0, (int)v33);
    result = a2;
    v29 = v35;
    *(_DWORD *)a2 = v34;
    v30 = v36;
    *((_DWORD *)a2 + 1) = v29;
    *((_DWORD *)a2 + 2) = v30;
  }
  else
  {
    DevMsg("Spotlight pos. called w/o spotlight!\n");
    result = a2;
    v6 = flt_106F1CAC;
    *a2 = flt_106F1CA8;
    v7 = flt_106F1CB0;
    a2[1] = v6;
    a2[2] = v7;
  }
  return result;
}
