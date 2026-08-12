int __userpurge sub_10148DD0@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, float *a4, int a5, int a6)
{
  int v6; // ebx
  _DWORD *v7; // eax
  double v8; // st7
  int v9; // esi
  int v10; // edi
  unsigned __int8 v11; // al
  int v12; // edi
  int v13; // eax
  int v14; // eax
  int v16; // edi
  unsigned __int8 v17; // al
  int v18; // edi
  int (__thiscall *v19)(int, const char *, _DWORD, int); // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  int v24; // edi
  int v25; // edx
  int v26; // ecx
  double v27; // st7
  int v28; // ecx
  int v29; // eax
  int v30; // edi
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // edi
  int v38; // edx
  int v39; // eax
  int v40; // edi
  _DWORD *v41; // eax
  float v43; // [esp+9Ch] [ebp-B4h]
  float v44; // [esp+A0h] [ebp-B0h]
  float v45; // [esp+A4h] [ebp-ACh]
  float v46; // [esp+A8h] [ebp-A8h]
  float v47; // [esp+ACh] [ebp-A4h]
  float v48[29]; // [esp+B4h] [ebp-9Ch] BYREF
  int v49; // [esp+128h] [ebp-28h] BYREF
  int v50; // [esp+12Ch] [ebp-24h]
  int v51; // [esp+130h] [ebp-20h]
  int v52; // [esp+134h] [ebp-1Ch]
  void (__thiscall **v53)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int); // [esp+138h] [ebp-18h]
  char v54[4]; // [esp+13Ch] [ebp-14h] BYREF
  int v55; // [esp+140h] [ebp-10h]
  int v56; // [esp+144h] [ebp-Ch]
  int v57; // [esp+148h] [ebp-8h]
  int v58; // [esp+14Ch] [ebp-4h]
  int i; // [esp+158h] [ebp+8h]
  int v60; // [esp+158h] [ebp+8h]
  int v61; // [esp+160h] [ebp+10h]

  v57 = a1;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  if ( v6 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  dword_1043A1C8 = *((_DWORD *)off_103DC81C + 1) - 1;
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int, int, int))(*(_DWORD *)v6 + 292))(v6, 0, 0, 0, 255, a2, a3);
  v7 = sub_100F0920();
  sub_100ED9B0((int)v7);
  if ( *(_BYTE *)a6 )
  {
    v8 = *(float *)(a6 + 4);
    qmemcpy(v48, a4, sizeof(v48));
    v48[11] = v8;
    v48[12] = *(float *)(a6 + 8);
    v48[13] = *(float *)(a6 + 12);
    v48[14] = *(float *)(a6 + 16);
    v48[15] = *(float *)(a6 + 20);
    v48[16] = *(float *)(a6 + 24);
    if ( 0.0 != *(float *)(a6 + 28) )
    {
      v47 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 352))(dword_1041315C) * 0.75;
      v48[9] = sub_10135880(*(float *)(a6 + 28), v47);
    }
    (*(void (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 52))(off_103DD080);
    if ( *(_DWORD *)(dword_1042C2A4 + 48) )
      (*(void (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 160))(off_103DD080, v48);
    sub_10144510(&v48[11], &v48[14], 5);
    sub_100D3280();
    v9 = v57;
    v10 = *(_DWORD *)dword_10413168;
    v11 = (*(int (__thiscall **)(int, int, float *, char *))(*(_DWORD *)v57 + 144))(v57, 1, &v48[11], v54);
    (*(void (__thiscall **)(int, _DWORD))(v10 + 168))(dword_10413168, v11);
    v12 = *(_DWORD *)dword_10413168;
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9);
    (*(void (__thiscall **)(int, float *, int, _DWORD, int))(v12 + 152))(dword_10413168, v48, 3, 0, v13);
    sub_10148AC0(v9, 1, v48, 3, 0);
    a2 = *(_DWORD *)dword_10413168;
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 40))(v9);
    (*(void (__thiscall **)(int, int))(a2 + 160))(dword_10413168, v14);
    if ( *(_DWORD *)(dword_1042C2A4 + 48) )
      (*(void (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 108))(off_103DD080);
  }
  else
  {
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v6 + 48))(v6, 1, 1, 0);
  }
  sub_10053B20(v6, a2, 0, *(_DWORD *)a4, *((_DWORD *)a4 + 1), *((_DWORD *)a4 + 2), *((_DWORD *)a4 + 3), 0, &v49);
  (*(void (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 52))(off_103DD080);
  if ( *(_DWORD *)(dword_1042C2A4 + 48) )
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 160))(off_103DD080, a4);
  sub_10144510(a4 + 11, a4 + 14, 6);
  sub_100D3280();
  v16 = *(_DWORD *)dword_10413168;
  v17 = (*(int (__thiscall **)(int, int, _DWORD *, char *))(*(_DWORD *)v57 + 144))(v57, 1, (_DWORD *)a4 + 11, v54);
  (*(void (__thiscall **)(int, _DWORD))(v16 + 168))(dword_10413168, v17);
  (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v6 + 292))(v6, 0, 0, 0, 255);
  sub_10148AC0(v57, 1, a4, 3, 0);
  sub_10053B20(v6, v16, 1, *(_DWORD *)a4, *((_DWORD *)a4 + 1), *((_DWORD *)a4 + 2), *((_DWORD *)a4 + 3), 0, 0);
  v18 = (*(int (__thiscall **)(int, const char *, const char *, int, _DWORD))(*(_DWORD *)dword_1047C96C + 280))(
          dword_1047C96C,
          "scripted/intro_screenspaceeffect",
          "Other textures",
          1,
          0);
  v19 = *(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)v18 + 44);
  v55 = v18;
  v20 = v19(v18, "$mode", 0, 1);
  v21 = *(_DWORD *)v18;
  v57 = v20;
  v22 = (*(int (__thiscall **)(int, const char *, _DWORD, int))(v21 + 44))(v18, "$alpha", 0, 1);
  v23 = *(_DWORD *)v6;
  v24 = v22;
  v56 = v22;
  (*(void (__thiscall **)(int, int, int, _DWORD))(v23 + 48))(v6, 1, 1, 0);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 80))(v6, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 84))(v6);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 84))(v6);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 124))(v6);
  v25 = 0;
  for ( i = 0; v25 < *(_DWORD *)(a6 + 44); i = v25 )
  {
    v26 = *(_DWORD *)(a6 + 32);
    v27 = *(float *)(v26 + 8 * v25 + 4);
    v28 = v26 + 8 * v25;
    v58 = v28;
    if ( 0.0 != v27 )
    {
      v29 = *(_DWORD *)v28;
      if ( *(int *)v28 >= 0 && v29 <= 9 )
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v57 + 16))(v57, v29);
        v28 = v58;
      }
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v24 + 12))(v24, *(float *)(v28 + 4));
      v30 = sub_101163A0(0);
      v31 = *(_DWORD *)v30;
      v53 = (void (__thiscall **)(int, int, _DWORD, _DWORD, int, int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v6 + 412);
      v32 = (*(int (__thiscall **)(int, _DWORD, int, int))(v31 + 16))(v30, 0, 1, 1);
      v33 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v30 + 12))(v30, v32);
      v58 = v52 + v50 - 1;
      v34 = *((_DWORD *)a4 + 3);
      v35 = *((_DWORD *)a4 + 2);
      v46 = (float)v58;
      v58 = v51 + v49 - 1;
      v45 = (float)v58;
      v44 = (float)v50;
      v43 = (float)v49;
      (*v53)(
        v6,
        v55,
        *(_DWORD *)a4,
        *((_DWORD *)a4 + 1),
        v35,
        v34,
        LODWORD(v43),
        LODWORD(v44),
        LODWORD(v45),
        LODWORD(v46),
        v33);
      v25 = i;
      v24 = v56;
    }
    ++v25;
  }
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 80))(v6, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 88))(v6);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 80))(v6, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 88))(v6);
  v36 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v37 = v36;
  if ( v36 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v36 + 8))(v36);
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v37 + 172))(v37, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 12))(v37);
  (*(void (__thiscall **)(int))(*(_DWORD *)v37 + 4))(v37);
  sub_100B0B50((int)a4, *((unsigned __int8 *)a4 + 113));
  sub_1005B2D0();
  v38 = *((_DWORD *)a4 + 2);
  v39 = *((_DWORD *)a4 + 1);
  v40 = *((_DWORD *)a4 + 3);
  v56 = *(_DWORD *)a4;
  v61 = v38;
  v60 = v39;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 376))(dword_1041315C) )
    ((void (__thiscall *)(int (***)(), int, int, int, int))(*off_103E4FC0)[10])(off_103E4FC0, v56, v60, v61, v40);
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 136))(dword_1041315C);
  sub_1013C760();
  v41 = sub_100F0920();
  sub_100EDA00((int)v41);
  byte_1043BD08 = 0;
  if ( *(_DWORD *)(dword_1042C2A4 + 48) )
    (*(void (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 108))(off_103DD080);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
}
