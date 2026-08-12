bool __thiscall sub_102FDDD0(int this)
{
  char *v3; // edi
  char *v4; // eax
  char *v5; // edi
  double v6; // st7
  int v7; // eax
  double v8; // st5
  double v9; // st4
  char *v10; // edi
  char *v11; // eax
  int v12; // edx
  double v13; // st6
  double v14; // rt2
  char *v15; // edi
  char *v16; // eax
  int v17; // ecx
  double v18; // st6
  double v19; // rtt
  char *v20; // edi
  double v21; // st7
  int v22; // eax
  double v23; // st6
  double v24; // rt0
  int v25; // [esp-10h] [ebp-84h]
  int v26; // [esp-Ch] [ebp-80h]
  int v27; // [esp-Ch] [ebp-80h]
  int v28; // [esp-Ch] [ebp-80h]
  int v29; // [esp-Ch] [ebp-80h]
  _BYTE v30[44]; // [esp+4h] [ebp-70h] BYREF
  float v31; // [esp+30h] [ebp-44h]
  float v32; // [esp+58h] [ebp-1Ch] BYREF
  float v33; // [esp+5Ch] [ebp-18h]
  float v34; // [esp+60h] [ebp-14h]
  float v35; // [esp+64h] [ebp-10h] BYREF
  float v36; // [esp+68h] [ebp-Ch]
  float v37; // [esp+6Ch] [ebp-8h]
  float v38; // [esp+70h] [ebp-4h]
  int savedregs; // [esp+74h] [ebp+0h] BYREF

  if ( (*(_BYTE *)(this + 256) & 1) == 0 )
    return 0;
  v3 = sub_10073730(*(_DWORD *)(this + 1676));
  v4 = sub_10073710(*(_DWORD *)(this + 1676));
  v25 = *(_DWORD *)(this + 1676);
  v38 = fabs(*((float *)v3 + 2) - *((float *)v4 + 2));
  v5 = sub_10073710(v25);
  v6 = *(float *)sub_10073710(*(_DWORD *)(this + 1676));
  v7 = *(_DWORD *)(this + 252);
  v32 = v6;
  v33 = *((float *)v5 + 1);
  if ( (v7 & 0x800) != 0 )
    sub_100DAE60(this);
  v26 = *(_DWORD *)(this + 420);
  v35 = v32 + *(float *)(this + 580);
  v36 = v33 + *(float *)(this + 584);
  v8 = *(float *)(this + 588);
  v37 = *(float *)(this + 588);
  v9 = v38 * 0.5;
  v38 = v9;
  v32 = v35;
  v33 = v36;
  v34 = v8 - v9;
  sub_1002A5F0((int)&savedregs, this, &v35, &v32, 33701899, this, v26, (int)v30);
  if ( 1.0 != v31 )
    return 1;
  v10 = sub_10073710(*(_DWORD *)(this + 1676));
  v11 = sub_10073710(*(_DWORD *)(this + 1676));
  v12 = *(_DWORD *)(this + 252);
  v32 = *(float *)v11;
  v33 = *((float *)v10 + 1);
  if ( (v12 & 0x800) != 0 )
    sub_100DAE60(this);
  v13 = *(float *)(this + 584) - v33;
  v27 = *(_DWORD *)(this + 420);
  v14 = *(float *)(this + 588);
  v35 = *(float *)(this + 580) - v32;
  v32 = v35;
  v36 = v13;
  v33 = v13;
  v37 = v14;
  v34 = v14 - v38;
  sub_1002A5F0((int)&savedregs, this, &v35, &v32, 33701899, this, v27, (int)v30);
  if ( 1.0 != v31 )
    return 1;
  v15 = sub_10073710(*(_DWORD *)(this + 1676));
  v16 = sub_10073710(*(_DWORD *)(this + 1676));
  v17 = *(_DWORD *)(this + 252);
  v32 = *(float *)v16;
  v33 = -*((float *)v15 + 1);
  if ( (v17 & 0x800) != 0 )
    sub_100DAE60(this);
  v18 = v33 + *(float *)(this + 584);
  v28 = *(_DWORD *)(this + 420);
  v19 = *(float *)(this + 588);
  v35 = v32 + *(float *)(this + 580);
  v32 = v35;
  v36 = v18;
  v33 = v18;
  v37 = v19;
  v34 = v19 - v38;
  sub_1002A5F0((int)&savedregs, this, &v35, &v32, 33701899, this, v28, (int)v30);
  if ( 1.0 != v31 )
    return 1;
  v20 = sub_10073710(*(_DWORD *)(this + 1676));
  v21 = *(float *)sub_10073710(*(_DWORD *)(this + 1676));
  v22 = *(_DWORD *)(this + 252);
  v32 = -v21;
  v33 = *((float *)v20 + 1);
  if ( (v22 & 0x800) != 0 )
    sub_100DAE60(this);
  v23 = v33 + *(float *)(this + 584);
  v29 = *(_DWORD *)(this + 420);
  v24 = *(float *)(this + 588);
  v35 = v32 + *(float *)(this + 580);
  v32 = v35;
  v36 = v23;
  v33 = v23;
  v37 = v24;
  v34 = v24 - v38;
  sub_1002A5F0((int)&savedregs, this, &v35, &v32, 33701899, this, v29, (int)v30);
  return 1.0 != v31;
}
