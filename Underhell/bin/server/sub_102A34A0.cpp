void __userpurge sub_102A34A0(int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, int a5)
{
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  int v14; // esi
  unsigned int v15; // eax
  int v16; // esi
  int v17; // ecx
  float v19[22]; // [esp+30h] [ebp-12Ch] BYREF
  _BYTE v20[12]; // [esp+88h] [ebp-D4h] BYREF
  float v21[5]; // [esp+94h] [ebp-C8h] BYREF
  float v22; // [esp+A8h] [ebp-B4h]
  float v23; // [esp+B4h] [ebp-A8h]
  char v24; // [esp+BEh] [ebp-9Eh]
  char v25; // [esp+BFh] [ebp-9Dh]
  int v26; // [esp+D4h] [ebp-88h]
  float v27[3]; // [esp+E0h] [ebp-7Ch] BYREF
  float v28[3]; // [esp+ECh] [ebp-70h] BYREF
  float v29[3]; // [esp+F8h] [ebp-64h] BYREF
  _DWORD v30[3]; // [esp+104h] [ebp-58h] BYREF
  float v31; // [esp+110h] [ebp-4Ch]
  float *v32; // [esp+114h] [ebp-48h]
  float *v33; // [esp+118h] [ebp-44h]
  float v34; // [esp+11Ch] [ebp-40h]
  float v35; // [esp+120h] [ebp-3Ch] BYREF
  float v36[2]; // [esp+124h] [ebp-38h] BYREF
  float v37[3]; // [esp+12Ch] [ebp-30h] BYREF
  float v38; // [esp+138h] [ebp-24h] BYREF
  float v39; // [esp+13Ch] [ebp-20h]
  float v40; // [esp+140h] [ebp-1Ch]
  float v41; // [esp+144h] [ebp-18h] BYREF
  float v42; // [esp+148h] [ebp-14h]
  float v43; // [esp+14Ch] [ebp-10h]
  int v44; // [esp+150h] [ebp-Ch]
  void *v45; // [esp+154h] [ebp-8h]
  void *retaddr; // [esp+15Ch] [ebp+0h]

  v44 = a2;
  v45 = retaddr;
  if ( *(float *)(dword_106DB654 + 44) < (double)*(float *)(a5 + 4) )
  {
    v6 = *(_DWORD *)(a1 + 68);
    if ( v6 == -1
      || (v7 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1],
          off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v6 >> 12) )
    {
      v8 = 0;
    }
    else
    {
      v8 = *v7;
    }
    (*(void (__thiscall **)(int, float *, _DWORD, _DWORD, int, int))(*(_DWORD *)v8 + 528))(v8, &v41, 0, 0, a3, a4);
    v27[0] = -24.0;
    v27[1] = -24.0;
    v32 = &v35;
    v27[2] = 32.0;
    v33 = v36;
    v28[0] = 24.0;
    v28[1] = 24.0;
    v28[2] = 64.0;
    v34 = *(float *)(a5 + 4) * 0.60000002;
    v36[1] = 0.0;
    v31 = 0.60000002 * *(float *)(a1 + 52) * 0.017453292;
    v35 = cos(v31);
    v36[0] = sin(v31);
    v9 = *(_DWORD *)(a1 + 68);
    if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v9 >> 12 )
      v10 = 0;
    else
      v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
    if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
      sub_100DAE60(v10);
    v38 = *(float *)(v10 + 704);
    v39 = *(float *)(v10 + 708) + 90.0;
    v40 = *(float *)(v10 + 712);
    sub_10424E70(&v35, &v38, v37);
    v41 = v37[0] + v41;
    v42 = v37[1] + v42;
    v43 = v37[2] + v43;
    off_10689714();
    v11 = *(_DWORD *)(a1 + 68);
    if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v11 >> 12 )
      v12 = 0;
    else
      v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
    sub_10265570(v30, v12, 0);
    v13 = *(_DWORD *)(a1 + 68);
    v30[0] = &CTraceFilterNoNPCsOrPlayer::`vftable';
    v38 = v41 * v34;
    v39 = v42 * v34;
    v40 = v34 * v43;
    if ( v13 == -1 || off_1061BE18[4 * (v13 & 0xFFF) + 2] != v13 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (v13 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v14 + 252) & 0x800) != 0 )
      sub_100DAE60(v14);
    v15 = *(_DWORD *)(a1 + 68);
    v29[0] = *(float *)(v14 + 580) + v38;
    v29[1] = *(float *)(v14 + 584) + v39;
    v29[2] = *(float *)(v14 + 588) + v40;
    if ( v15 == -1 || off_1061BE18[4 * (v15 & 0xFFF) + 2] != v15 >> 12 )
      v16 = 0;
    else
      v16 = off_1061BE18[4 * (v15 & 0xFFF) + 1];
    if ( (*(_DWORD *)(v16 + 252) & 0x800) != 0 )
      sub_100DAE60(v16);
    sub_1001F200(v19, (float *)(v16 + 580), v29, v27, v28);
    (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
      dword_106B31F4,
      v19,
      33570827,
      v30,
      v20);
    if ( *(_DWORD *)(dword_106CE63C + 48) )
      sub_101A0AD0((int)v20, (int)v21, 255, 255, 0, 1, -1.0);
    if ( (v23 < 1.0 || v24 || v25)
      && v43 * v22 + v21[4] * v42 + v21[3] * v41 < -0.89999998
      && v22 < 0.75
      && (!v26
       || (v17 = *(_DWORD *)(v26 + 424)) == 0
       || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 40))(v17)) )
    {
      sub_1004C1E0((char **)a1, 100013);
    }
  }
  if ( *(_DWORD *)(dword_106DB6E4 + 48) )
    sub_102A31E0(a1, a1);
}
