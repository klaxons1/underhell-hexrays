void __thiscall sub_100D4930(int this)
{
  double v2; // st7
  float *v3; // ecx
  double v4; // st6
  double v5; // st5
  double v6; // st4
  double v7; // st7
  double v8; // st6
  double v9; // st7
  char *v10; // eax
  float *v11; // esi
  float *v12; // eax
  double v13; // st7
  float v14; // ecx
  float v15; // edx
  float v16; // eax
  int v17; // eax
  double v18; // st7
  double v19; // st5
  double v20; // st3
  double v21; // st6
  double v22; // st5
  double v23; // rt1
  double v24; // st3
  float v25; // [esp+4h] [ebp-A4h]
  float v26; // [esp+4h] [ebp-A4h]
  float v27; // [esp+8h] [ebp-A0h]
  float v28; // [esp+8h] [ebp-A0h]
  float v29; // [esp+Ch] [ebp-9Ch]
  float v30; // [esp+Ch] [ebp-9Ch]
  _BYTE v31[44]; // [esp+14h] [ebp-94h] BYREF
  float v32; // [esp+40h] [ebp-68h]
  float v33; // [esp+68h] [ebp-40h] BYREF
  float v34; // [esp+6Ch] [ebp-3Ch]
  float v35[3]; // [esp+74h] [ebp-34h] BYREF
  float v36; // [esp+80h] [ebp-28h] BYREF
  float v37; // [esp+84h] [ebp-24h]
  float v38; // [esp+88h] [ebp-20h]
  float v39; // [esp+8Ch] [ebp-1Ch]
  float v40; // [esp+90h] [ebp-18h] BYREF
  float v41; // [esp+94h] [ebp-14h]
  float v42; // [esp+98h] [ebp-10h]
  float v43; // [esp+9Ch] [ebp-Ch]
  float v44; // [esp+A0h] [ebp-8h]
  float v45; // [esp+A4h] [ebp-4h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  if ( *(_DWORD *)(this + 248) && *(_BYTE *)(this + 185) )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v33);
    v2 = *(float *)(this + 188);
    v3 = *(float **)(this + 248);
    v43 = *(float *)(this + 188);
    v4 = *(float *)(this + 192);
    v44 = *(float *)(this + 192);
    v5 = *(float *)(this + 196);
    v45 = *(float *)(this + 196);
    v6 = v3[3] + 1.0;
    if ( v6 < 1.0 )
      v6 = 1.0;
    v39 = v6;
    if ( *v3 == v2 - v33 )
    {
      v7 = v6;
    }
    else
    {
      v29 = v6;
      v27 = v33 + *v3;
      v25 = v2;
      v43 = sub_100D3A20(v25, v27, v29);
      v7 = v39;
      v5 = v45;
      v4 = v44;
    }
    if ( v3[1] == v4 - v34 )
    {
      v8 = v5;
    }
    else
    {
      v30 = v7;
      v28 = v34 + v3[1];
      v26 = v4;
      v44 = sub_100D3A20(v26, v28, v30);
      v7 = v39;
      v8 = v45;
    }
    if ( fabs(v8 - v3[2]) >= 2.0 )
      v9 = (v3[2] - v8) / v7 + v8;
    else
      v9 = v3[2];
    v45 = v9;
    v10 = (char *)sub_100422D0();
    v11 = (float *)v10;
    if ( !v10 )
      goto LABEL_17;
    v12 = (float *)sub_10034A00(v10);
    v13 = v11[55];
    v14 = *v12;
    v15 = v12[1];
    v16 = v12[2];
    v41 = v15;
    v42 = v16;
    v40 = v13 + v14;
    v41 = v11[56] + v15;
    v42 = v11[57] + v16;
    v36 = v43;
    v37 = v44;
    v38 = 0.0;
    sub_101EE040(&v36, v35, 0, 0);
    v17 = *(_DWORD *)(this + 248);
    v36 = v40 - v35[0] * v45;
    v37 = v41 - v35[1] * v45;
    v38 = v42 - v45 * v35[2];
    sub_10012C30(
      (int)&savedregs,
      (int)v11,
      &v40,
      &v36,
      (float *)(v17 + 16),
      (float *)(v17 + 28),
      33570827,
      (int)v11,
      0,
      (int)v31);
    if ( v32 < 1.0 )
      v18 = v32 * v45;
    else
LABEL_17:
      v18 = v45;
    if ( v43 < 180.0 )
    {
      v20 = v43;
      v19 = -180.0;
      if ( v43 <= -180.0 )
        v20 = v20 + 360.0;
    }
    else
    {
      v19 = -180.0;
      v20 = v43 - 360.0;
    }
    v21 = v44;
    if ( v44 < 180.0 )
    {
      v23 = v20;
      v24 = v19;
      v22 = v23;
      if ( v24 >= v21 )
        v21 = v21 + 360.0;
    }
    else
    {
      v22 = v20;
      v21 = v21 - 360.0;
    }
    *(float *)(this + 188) = v22;
    *(float *)(this + 192) = v21;
    *(float *)(this + 196) = v18;
  }
}
