int __usercall sub_100DFC30@<eax>(int a1@<eax>, int a2, int a3)
{
  float *v4; // eax
  double v5; // st7
  int v6; // edi
  double v7; // st7
  double v8; // st7
  int v9; // edi
  int v10; // ecx
  double v11; // st7
  double v12; // st6
  double v13; // st5
  int v14; // edi
  double v15; // st7
  int v16; // edx
  double v17; // st6
  int v18; // esi
  _BYTE v20[48]; // [esp+8h] [ebp-B4h] BYREF
  _BYTE v21[48]; // [esp+38h] [ebp-84h] BYREF
  _BYTE v22[48]; // [esp+68h] [ebp-54h] BYREF
  float v23; // [esp+98h] [ebp-24h] BYREF
  float v24; // [esp+9Ch] [ebp-20h]
  float v25; // [esp+A0h] [ebp-1Ch]
  float v26; // [esp+A4h] [ebp-18h] BYREF
  float v27; // [esp+A8h] [ebp-14h]
  float v28; // [esp+ACh] [ebp-10h]
  float v29; // [esp+B0h] [ebp-Ch]
  float v30; // [esp+B4h] [ebp-8h]
  float v31; // [esp+B8h] [ebp-4h]

  v4 = *(float **)a1;
  if ( v4 )
  {
    v23 = v4[1];
    v24 = v4[2];
    v25 = v4[3];
    v26 = v4[4];
    v27 = v4[5];
    v5 = v4[6];
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( (*(_DWORD *)(v6 + 252) & 0x1000) != 0 )
      sub_100DAFD0(*(_DWORD *)(a1 + 4));
    v7 = *(float *)(a1 + 16);
    v29 = *(float *)(v6 + 476) * v7;
    v30 = *(float *)(v6 + 480) * v7;
    v8 = v7 * *(float *)(v6 + 484);
    v9 = *(_DWORD *)(a1 + 4);
    v10 = *(_DWORD *)(v9 + 252) >> 11;
    v31 = v8;
    if ( (v10 & 1) != 0 )
      sub_100DAE60(v9);
    v11 = *(float *)(v9 + 580) - v29;
    v12 = *(float *)(v9 + 584) - v30;
    v13 = *(float *)(v9 + 588);
    v14 = *(_DWORD *)(a1 + 4);
    v23 = v11;
    v24 = v12;
    v25 = v13 - v31;
    v15 = *(float *)(a1 + 16);
    v16 = *(_DWORD *)(v14 + 252) >> 11;
    v29 = v15 * *(float *)(v14 + 488);
    v30 = *(float *)(v14 + 492) * v15;
    v31 = v15 * *(float *)(v14 + 496);
    if ( (v16 & 1) != 0 )
      sub_100DAE60(v14);
    v17 = *(float *)(v14 + 708) - v30;
    v5 = *(float *)(v14 + 712) - v31;
    v26 = *(float *)(v14 + 704) - v29;
    v27 = v17;
  }
  v28 = v5;
  sub_10425040(&v26, &v23, v21);
  v18 = *(_DWORD *)(a1 + 4);
  if ( (*(_DWORD *)(v18 + 252) & 0x800) != 0 )
    sub_100DAE60(v18);
  sub_10424F80(v18 + 500, v22);
  sub_10421E30(v21, v22, v20);
  if ( (*(_DWORD *)(a3 + 252) & 0x800) != 0 )
    sub_100DAE60(a3);
  return sub_10421E30(v20, a3 + 500, a2);
}
