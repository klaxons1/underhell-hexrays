void __usercall sub_1005DF30(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  double v4; // st7
  double v5; // st6
  double v6; // st7
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  char v12; // al
  void (__thiscall *v13)(int, int, int, int); // edx
  double v14; // st7
  int v15; // ebx
  int v16; // eax
  int v17; // edi
  int v18; // eax
  _WORD *v19; // eax
  _WORD *v21; // eax
  int v23; // edi
  char v24; // al
  void (__thiscall *v25)(int, int); // edx
  int v27; // [esp-8h] [ebp-30h]
  int v28; // [esp-8h] [ebp-30h]
  int v30; // [esp-4h] [ebp-2Ch]
  int v31; // [esp-4h] [ebp-2Ch]
  int v32; // [esp+0h] [ebp-28h]
  _BYTE v33[4]; // [esp+4h] [ebp-24h] BYREF
  _BYTE v34[4]; // [esp+8h] [ebp-20h] BYREF
  _BYTE v35[4]; // [esp+Ch] [ebp-1Ch] BYREF
  _BYTE v36[4]; // [esp+10h] [ebp-18h] BYREF
  int v37; // [esp+14h] [ebp-14h] BYREF
  int v38; // [esp+18h] [ebp-10h] BYREF
  float v39; // [esp+20h] [ebp-8h]
  int v40; // [esp+24h] [ebp-4h]

  v4 = (*((float *)off_103DC81C + 3) - *(float *)(a1 + 216)) / (*(float *)(a1 + 220) - *(float *)(a1 + 216));
  v5 = 1.0;
  if ( v4 <= 1.0 )
  {
    if ( v4 < 0.0 )
      v4 = 0.0;
    v5 = v4;
    v6 = 1.0;
  }
  else
  {
    v6 = 1.0;
  }
  v7 = *(_DWORD *)(a1 + 208);
  v39 = v5;
  if ( v7 != -1
    && (v8 = (_DWORD *)((char *)off_103DCD74 + 16 * (v7 & 0xFFF) + 4),
        *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) == v7 >> 12)
    && *v8 )
  {
    if ( v5 >= v6 && *((_DWORD *)off_103DCD74 + 4 * (v7 & 0xFFF) + 2) == v7 >> 12 && *v8 )
    {
      *(_DWORD *)(a1 + 208) = -1;
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48, "HideCommentary");
      sub_10248C80(v32);
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1041315C + 24))(
        dword_1041315C,
        "commentary_finishnode\n");
    }
  }
  else if ( !*(_BYTE *)(a1 + 868) )
  {
    *(_BYTE *)(a1 + 868) = 1;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    sub_10248C80("HideCommentary");
    v9 = sub_100B4090("CHudCloseCaption");
    if ( v9 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 24))(v9);
  }
  if ( *(_BYTE *)(a1 + 212) )
  {
    sub_10236250(v34, v35, &v38, v36);
    v10 = *(_DWORD *)(a1 + 872);
    v11 = *(_DWORD *)(a1 + 880);
    LOWORD(v40) = -21761;
    BYTE2(v40) = 0;
    v12 = sub_10236700(a1, a3, a2);
    v13 = *(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA6C + 40);
    HIBYTE(v40) = v12;
    v13(dword_1047CA6C, v40, v27, v30);
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 56))(
      dword_1047CA6C,
      v10,
      v11,
      v10 + *(_DWORD *)(a1 + 896),
      v11 + *(_DWORD *)(a1 + 888));
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, v40);
    v14 = (double)*(int *)(a1 + 896) * v39;
    v31 = v11 + *(_DWORD *)(a1 + 888) - 2;
    v39 = *(float *)dword_1047CA6C;
    (*(void (__thiscall **)(int, int, int, int, int))(LODWORD(v39) + 48))(
      dword_1047CA6C,
      v10 + 2,
      v11 + 2,
      (int)v14 + v10 - 2,
      v31);
    v15 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_1047CA7C + 20))(dword_1047CA7C, "ClientScheme");
    v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v15);
    v17 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v16 + 12))(v16, "CommentaryDefault", 0);
    if ( !v17 )
    {
      v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA7C + 32))(dword_1047CA7C, v15);
      v17 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v18 + 12))(v18, "Default", 0);
    }
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v17);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v40);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(
      dword_1047CA6C,
      *(_DWORD *)(a1 + 904),
      *(_DWORD *)(a1 + 912));
    v19 = (_WORD *)(a1 + 224);
    while ( *v19++ )
      ;
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
      dword_1047CA6C,
      a1 + 224,
      ((int)v19 - a1 - 226) >> 1,
      0);
    (*(void (__thiscall **)(int, int, int, int *, _BYTE *))(*(_DWORD *)dword_1047CA6C + 288))(
      dword_1047CA6C,
      v17,
      a1 + 736,
      &v37,
      v33);
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(
      v38 - *(_DWORD *)(a1 + 920) - v37,
      *(_DWORD *)(a1 + 928));
    v21 = (_WORD *)(a1 + 736);
    while ( *v21++ )
      ;
    v28 = ((int)v21 - a1 - 738) >> 1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 88))(dword_1047CA6C, a1 + 736);
    v23 = dword_1047CA6C;
    LOWORD(v40) = -21761;
    BYTE2(v40) = 0;
    v24 = sub_10236700(a1, v28, 0);
    v25 = *(void (__thiscall **)(int, int))(*(_DWORD *)v23 + 40);
    HIBYTE(v40) = v24;
    v25(v23, v40);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(a1 + 968));
    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 136))(
      dword_1047CA6C,
      *(_DWORD *)(a1 + 936),
      *(_DWORD *)(a1 + 944),
      *(_DWORD *)(a1 + 952),
      *(_DWORD *)(a1 + 960));
  }
}
