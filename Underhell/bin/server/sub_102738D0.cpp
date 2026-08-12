void __cdecl sub_102738D0(int a1)
{
  __int16 v1; // ax
  int v2; // edi
  float *v3; // eax
  int (__thiscall *v4)(int, float *); // edx
  float *v5; // eax
  int (__thiscall *v6)(int, _BYTE *); // edx
  float *v7; // eax
  int v8; // esi
  char *v9; // eax
  float v10; // edx
  float v11; // eax
  int v12; // edx
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // edi
  int v18; // eax
  float v19; // edx
  float v20; // eax
  int v21; // eax
  _DWORD *v22; // esi
  int v23; // ecx
  void (__thiscall *v24)(_DWORD *); // eax
  char *v25; // eax
  float *v26; // [esp+0h] [ebp-C8h]
  char *v27; // [esp+0h] [ebp-C8h]
  char *v28; // [esp+14h] [ebp-B4h]
  _BYTE v29[12]; // [esp+20h] [ebp-A8h] BYREF
  _BYTE v30[12]; // [esp+2Ch] [ebp-9Ch] BYREF
  int v31; // [esp+38h] [ebp-90h]
  float v32; // [esp+3Ch] [ebp-8Ch]
  float v33; // [esp+40h] [ebp-88h]
  float v34; // [esp+58h] [ebp-70h]
  char v35; // [esp+63h] [ebp-65h]
  float v36[3]; // [esp+80h] [ebp-48h] BYREF
  float v37[3]; // [esp+8Ch] [ebp-3Ch] BYREF
  int v38; // [esp+98h] [ebp-30h]
  float v39; // [esp+9Ch] [ebp-2Ch]
  float v40; // [esp+A0h] [ebp-28h]
  float v41; // [esp+A4h] [ebp-24h] BYREF
  float v42; // [esp+A8h] [ebp-20h]
  float v43; // [esp+ACh] [ebp-1Ch]
  int v44; // [esp+B0h] [ebp-18h] BYREF
  float v45; // [esp+B4h] [ebp-14h]
  float v46; // [esp+B8h] [ebp-10h]
  float v47; // [esp+BCh] [ebp-Ch] BYREF
  float v48; // [esp+C0h] [ebp-8h]
  float v49; // [esp+C4h] [ebp-4h]
  int savedregs; // [esp+C8h] [ebp+0h] BYREF

  if ( !sub_10273440() || !a1 )
    return;
  v1 = *(_WORD *)(a1 + 356);
  v38 = a1 + 320;
  sub_101129A0((unsigned __int16 *)(a1 + 320), v1 | 4);
  v2 = dword_10693634;
  *(float *)&v44 = flt_106F1CA8;
  v45 = flt_106F1CAC;
  v46 = flt_106F1CB0;
  if ( !byte_1069362E )
  {
    sub_100F5A30((_DWORD *)a1, (int)v36, 0, 0);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504))(a1, v37);
    v6 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 504);
    v47 = v36[0] * 56755.84;
    v48 = v36[1] * 56755.84;
    v49 = 56755.84 * v36[2];
    v7 = (float *)v6(a1, v29);
    v41 = *v7 + v47;
    v42 = v7[1] + v48;
    v43 = v7[2] + v49;
    sub_1002A5F0((int)&savedregs, a1, v37, &v41, 33701899, a1, 0, (int)v30);
    if ( 1.0 != v34 )
    {
      v44 = v31;
      v45 = v32;
      v46 = v33 + 48.0;
      goto LABEL_8;
    }
LABEL_29:
    v27 = sub_10073730(v2);
    v25 = sub_10073710(v2);
    sub_1011BB20((int)&v44, (int)v25, (int)v27, 255, 0, 0, 0, 0.1);
LABEL_30:
    sub_10112C00(v38, 2);
    return;
  }
  v3 = sub_10273260(v37);
  v44 = *(int *)v3;
  v45 = v3[1];
  v4 = *(int (__thiscall **)(int, float *))(*(_DWORD *)a1 + 504);
  v46 = v3[2];
  v5 = (float *)v4(a1, v37);
  sub_1002A5F0((int)&savedregs, a1, v5, (float *)&v44, 147467, a1, 0, (int)v30);
  if ( 1.0 != v34 )
    goto LABEL_29;
LABEL_8:
  v8 = sub_10073900((const char *)a1);
  v28 = sub_10073730(v2);
  v9 = sub_10073710(v2);
  sub_1025F360((_DWORD *)v8, (int)v9, (int)v28);
  sub_100E10C0(v8, (float *)&v44);
  if ( !byte_1069362E )
  {
    sub_102615C0(v8, 33701899, 0);
    if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
      sub_100DAE60(v8);
    v44 = *(int *)(v8 + 580);
    v45 = *(float *)(v8 + 584);
    v46 = *(float *)(v8 + 588);
    sub_10265570(v37, v8, 0);
    if ( !(unsigned __int8)sub_102616E0(v8, v37, *(float *)(dword_106B741C + 44)) )
      goto LABEL_28;
  }
  if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
    sub_100DAE60(v8);
  v10 = *(float *)(v8 + 580);
  v11 = *(float *)(v8 + 584);
  v49 = *(float *)(v8 + 588);
  v47 = v10;
  v12 = *(_DWORD *)(v8 + 252) >> 11;
  v49 = v49 + 1.0;
  v48 = v11;
  if ( (v12 & 1) != 0 )
    sub_100DAE60(v8);
  v26 = (float *)sub_10073730(v2);
  v13 = (float *)sub_10073710(v2);
  sub_100231A0((int)&savedregs, v8, (float *)(v8 + 580), &v47, v13, v26, 33701899, v8, 0, (int)v30);
  if ( v35 || 1.0 != v34 )
  {
LABEL_28:
    sub_100739B0();
    goto LABEL_29;
  }
  v14 = (float *)sub_10019640((_DWORD *)v8);
  v39 = floor(v14[2]);
  v15 = (float *)sub_10019640((_DWORD *)v8);
  v40 = floor(v15[1]);
  v16 = (float *)sub_10019640((_DWORD *)v8);
  v41 = floor(*v16);
  v42 = v40;
  v43 = v39;
  sub_100E10C0(v8, &v41);
  v17 = (float *)(v8 + 716);
  if ( byte_1069362E )
  {
    v18 = sub_10123D90(
            (char)"info_node_air",
            **(_DWORD **)(dword_10693628 + 804),
            *v17,
            *(float *)(v8 + 720),
            *(float *)(v8 + 724),
            0);
  }
  else
  {
    v19 = *v17;
    v20 = *(float *)(v8 + 720);
    v49 = *(float *)(v8 + 724);
    v47 = v19;
    v49 = v49 + 24.0;
    v48 = v20;
    sub_100E10C0(v8, &v47);
    v18 = sub_10123D90(
            (char)"info_node",
            **(_DWORD **)(dword_10693628 + 804),
            *v17,
            *(float *)(v8 + 720),
            *(float *)(v8 + 724),
            0);
  }
  if ( v18 == 2 )
  {
    Msg("Worldcraft failed on creation...\n");
    sub_100739B0();
    sub_10112C00(v38, 2);
    return;
  }
  if ( v18 )
    goto LABEL_30;
  if ( byte_1069362E )
    v21 = sub_101811E0("info_node_air", -1);
  else
    v21 = sub_101811E0("info_node", -1);
  v22 = (_DWORD *)v21;
  sub_100E10C0(v21, v17);
  sub_100739B0();
  v23 = **(_DWORD **)(dword_10693628 + 804);
  v24 = *(void (__thiscall **)(_DWORD *))(*v22 + 96);
  v22[59] |= 0x1000000u;
  v22[213] = v23;
  v24(v22);
  sub_10112C00(v38, 2);
}
