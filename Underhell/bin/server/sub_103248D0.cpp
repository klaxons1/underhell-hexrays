// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_103248D0@<eax>(unsigned int a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4@<esi>, _DWORD *a5)
{
  unsigned int v5; // eax
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  void *v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // edi
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  _DWORD *v25; // ecx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  float v32[20]; // [esp+40h] [ebp-CCh] BYREF
  _BYTE v33[12]; // [esp+90h] [ebp-7Ch] BYREF
  float v34[19]; // [esp+9Ch] [ebp-70h] BYREF
  _DWORD v35[3]; // [esp+E8h] [ebp-24h] BYREF
  float v36; // [esp+F4h] [ebp-18h] BYREF
  float v37; // [esp+F8h] [ebp-14h]
  int v38; // [esp+FCh] [ebp-10h]
  int v39; // [esp+100h] [ebp-Ch]
  void *v40; // [esp+104h] [ebp-8h]
  void *retaddr; // [esp+10Ch] [ebp+0h]

  v39 = a2;
  v40 = retaddr;
  v5 = a5[11];
  if ( v5 == -1 || off_1061BE18[4 * (a5[11] & 0xFFF) + 2] != v5 >> 12 )
    v7 = 0;
  else
    v7 = off_1061BE18[4 * (a5[11] & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(a1 + 2968), __SPAIR64__(a1, v7), 0.0);
  sub_100DA010((_DWORD *)a1, a5);
  sub_101129A0((unsigned __int16 *)(a1 + 320), *(_WORD *)(a1 + 356) | 4);
  if ( *(_BYTE *)(a1 + 225) )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 0;
  }
  if ( *(_BYTE *)(a1 + 224) != 1 )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    *(_BYTE *)(a1 + 224) = 1;
  }
  if ( (*(int (__thiscall **)(unsigned int, int, int))(*(_DWORD *)a1 + 368))(a1, a3, a4) )
  {
    *(float *)&v38 = 0.0;
LABEL_54:
    sub_103244B0(a1, v38);
    goto LABEL_55;
  }
  if ( !*(_BYTE *)(a1 + 3677)
    || (v8 = *(_DWORD *)(a1 + 3740), v8 == -1)
    || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v8 >> 12
    || !off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1] )
  {
    if ( *(_DWORD *)(a1 + 9888) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF4 + 88))(dword_106BAFF4, *(_DWORD *)(a1 + 9888));
      *(_DWORD *)(a1 + 9888) = 0;
    }
    v38 = 1;
    goto LABEL_54;
  }
  v9 = *(_DWORD *)(a1 + 3736);
  if ( v9 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v9 >> 12 )
    v10 = 0;
  else
    v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
  sub_100DD660(v10, &flt_106F1CA8);
  v11 = *(_DWORD *)(a1 + 3740);
  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = (void *)off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
  sub_100E1BB0(v12);
  v14 = *(_DWORD *)(a1 + 3740);
  if ( v14 == -1
    || (v13 = 2 * (*(_DWORD *)(a1 + 3740) & 0xFFF), off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v14 >> 12) )
  {
    v15 = 0;
  }
  else
  {
    v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
  }
  sub_100E0970(v15, v13, 6, 0);
  v16 = *(_DWORD *)(a1 + 3736);
  if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3736) & 0xFFF) + 1];
  if ( (*(_DWORD *)(v17 + 252) & 0x800) != 0 )
    sub_100DAE60(v17);
  v18 = *(_DWORD *)(a1 + 3740);
  if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v18 >> 12 )
    v19 = 0;
  else
    v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
  sub_100E0D20(v19, (float *)(v17 + 580));
  v20 = *(_DWORD *)(a1 + 3740);
  if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v20 >> 12 )
    v21 = 0;
  else
    v21 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
  sub_101129A0((unsigned __int16 *)(v21 + 320), *(_WORD *)(v21 + 356) & 0xFFFB);
  v22 = *(_DWORD *)(a1 + 3740);
  if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v22 >> 12 )
    v23 = 0;
  else
    v23 = off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
  sub_100EBE30(v23, 1);
  v24 = *(_DWORD *)(a1 + 3740);
  if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 2] != v24 >> 12 )
    v25 = 0;
  else
    v25 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a1 + 3740) & 0xFFF) + 1];
  sub_101CB290(v25);
  if ( *(_DWORD *)(dword_106E511C + 48) )
  {
    v26 = (_DWORD *)sub_1026A890((unsigned int *)(a1 + 3740));
    sub_100EC3F0(v26, 0, 0.0, 0);
    v27 = sub_1026A890((unsigned int *)(a1 + 3740));
    sub_10322D30(v27, 1.0);
  }
LABEL_55:
  if ( (*(_BYTE *)(a1 + 250) & 1) == 0
    || (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 1) )
  {
    sub_103215B0((char *)a1);
  }
  v28 = *(_DWORD *)(a1 + 252);
  v36 = 0.0;
  v37 = 0.0;
  *(float *)&v38 = -1.0;
  if ( (v28 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_10124BC0((float *)(a1 + 580), &v36, 0, 8, COERCE_FLOAT(255));
  if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
    sub_100DAE60(a1);
  v29 = *(_DWORD *)(a1 + 252);
  v36 = *(float *)(a1 + 580);
  v37 = *(float *)(a1 + 584);
  *(float *)&v38 = *(float *)(a1 + 588) - 256.0;
  if ( (v29 & 0x800) != 0 )
    sub_100DAE60(a1);
  sub_1001F180(v32, (float *)(a1 + 580), &v36);
  sub_10265570(v35, a1, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v32,
    16395,
    v35,
    v33);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v33, (int)v34, 255, 0, 0, 1, 5.0);
  if ( v34[8] < 1.0 )
    sub_10265C30((int)v33, 0);
  sub_1023C380((_DWORD *)a1, (int)"NPC_Barnacle.Die", 0.0, 0);
  (*(void (__thiscall **)(unsigned int, int))(*(_DWORD *)a1 + 1416))(a1, 21);
  (*(void (__thiscall **)(unsigned int))(*(_DWORD *)a1 + 728))(a1);
  v36 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v36, 0);
  return sub_100EC3F0((_DWORD *)a1, (int)sub_10323A20, 0.0, 0);
}
