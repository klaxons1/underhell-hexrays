int __userpurge sub_10149F60@<eax>(int a1@<ecx>, int a2@<esi>, int a3, int a4, char a5)
{
  int v5; // edi
  float *v6; // ebx
  char *v7; // eax
  int v9; // esi
  float *v10; // eax
  volatile signed __int32 *v11; // esi
  void (__thiscall ***v12)(_DWORD); // eax
  void (__thiscall ***v13)(_DWORD); // esi
  volatile signed __int32 *v14; // esi
  _DWORD *v15; // eax
  int v16; // esi
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // esi
  int v20; // edx
  float v21; // eax
  int v22; // esi
  int v23; // edx
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  double v30; // st7
  int v31; // esi
  void (__thiscall *v32)(int, float *, int, int); // edx
  int v33; // ecx
  void (__thiscall **v34)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // esi
  int v35; // eax
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // eax
  int v40; // [esp+7Ch] [ebp-130h]
  float v41; // [esp+80h] [ebp-12Ch]
  int v42; // [esp+80h] [ebp-12Ch]
  _BYTE v43[116]; // [esp+8Ch] [ebp-120h] BYREF
  float v44[30]; // [esp+100h] [ebp-ACh] BYREF
  float v45[2]; // [esp+178h] [ebp-34h] BYREF
  float v46[3]; // [esp+180h] [ebp-2Ch] BYREF
  const void *v47; // [esp+18Ch] [ebp-20h]
  int v48; // [esp+190h] [ebp-1Ch]
  int v49; // [esp+194h] [ebp-18h]
  char v50; // [esp+198h] [ebp-14h] BYREF
  char v51; // [esp+199h] [ebp-13h] BYREF
  char v52; // [esp+19Ah] [ebp-12h] BYREF
  char v53; // [esp+19Bh] [ebp-11h] BYREF
  int v54; // [esp+19Ch] [ebp-10h] BYREF
  int v55; // [esp+1A0h] [ebp-Ch]
  int v56; // [esp+1A4h] [ebp-8h] BYREF
  char v57; // [esp+1ABh] [ebp-1h] BYREF

  v5 = a1;
  v49 = a1;
  sub_10233210(a1 + 292);
  v6 = (float *)a3;
  v47 = (const void *)(v5 + 152);
  sub_100748E0((_DWORD *)(v5 + 152), a3);
  sub_1002E560(&v57, 1, 1);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) < 80
    && (v7 = sub_10001DD0(), !_stricmp(v7, "tf")) )
  {
    if ( byte_103E82CA )
    {
      byte_103E82CA = 0;
      Msg("This game has a minimum requirement of DirectX 8.0 to run properly.\n");
    }
    return sub_1002B550();
  }
  else
  {
    v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C, a2);
    if ( v9 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
    v48 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 28))(v9);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 12))(v9);
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    if ( *(_BYTE *)(v5 + 564) || *((float *)off_103DC81C + 3) >= (double)*(float *)(v5 + 568) )
    {
      flt_1043BD10 = 0.0;
      (*(void (__thiscall **)(void *))(*(_DWORD *)off_103DD080 + 144))(off_103DD080);
      if ( *(_DWORD *)(dword_1043C78C + 48)
        && (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) >= 70
        && (a5 & 4) == 0
        && sub_100536D0(v6, v45) )
      {
        sub_10149C00((_DWORD *)v5, *(float *)&v6);
      }
      byte_1043BD09 = 1;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 32))(dword_10413168);
      v12 = (void (__thiscall ***)(_DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      v13 = v12;
      if ( v12 )
        (**v12)(v12);
      (*v13)[2](v13);
      (*v13)[151](v13);
      (*v13)[3](v13);
      (*v13)[1](v13);
      v14 = 0;
      v56 = 0;
      sub_10142430((int *)v5, (int)v6, &a4);
      v54 = 0;
      v15 = (_DWORD *)sub_100DDA40(160);
      if ( v15 )
        v14 = sub_10144170(v15, v5);
      LOBYTE(v55) = sub_10146990(v14, v6, (unsigned int *)&a4, &v54);
      if ( (_BYTE)v55 )
      {
        (**(void (__thiscall ***)(int, volatile signed __int32 *))(v5 + 556))(v5 + 556, v14);
        sub_1011DBC0(off_103E524C, 0);
      }
      if ( v14
        && !_InterlockedDecrement(v14 + 1)
        && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v14 + 4))(v14) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v14)(v14, 1);
      }
      if ( (a4 & 1) == 0
        && (**(int (__thiscall ***)(int, int, _DWORD))dword_104131A0)(dword_104131A0, (int)(v6 + 11), 0) == 1 )
      {
        a4 |= 1u;
      }
      if ( dword_1043BD0C )
        (*(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v5 + 148))(v5, v6, a4, dword_1043BD0C);
      else
        sub_10149780((_DWORD *)v5, v55, v54, (int)v6, a4, 0, a5 & 1, 0, 0);
      byte_1043BD08 = 1;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 296))(dword_1041315C);
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      if ( v16 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 8))(v16);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 172))(v16, 0);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 12))(v16);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 4))(v16);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 36))(dword_10413168);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10413168 + 64))(dword_10413168);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 132))(v5);
      if ( !*(_DWORD *)(dword_1042F8D4 + 48)
        && *((_BYTE *)v6 + 112)
        && *(_DWORD *)(dword_1043BAC4 + 48)
        && (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) >= 90 )
      {
        sub_1011E7B0(&v56, dword_1047C96C);
        sub_10140ED0((int)v6, v5, v16, v6, *(_DWORD *)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2), *((_DWORD *)v6 + 3));
        sub_1011E780(&v56);
      }
      sub_10148420((_DWORD *)v5, (int)v6, v5, v6, a5 & 1);
      sub_1011DBC0(off_103E524C, v55);
      sub_10144820(v5, v5, v16);
      sub_1005BE40();
      ((void (__thiscall *)(void ***, char *, char *, char *, char *, char *))(*off_103E77E8)[2])(
        off_103E77E8,
        &v50,
        &v51,
        &v52,
        &v53,
        (char *)&a3 + 3);
      sub_1017CCA0();
      v17 = (_DWORD *)(v5 + 284);
      if ( !HIBYTE(a3) )
        v17 = (_DWORD *)(v5 + 280);
      (*(void (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)dword_10413168 + 96))(dword_10413168, &v50, *v17);
      sub_101446D0(v5, (int)v6, v5, *(_DWORD *)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2), *((_DWORD *)v6 + 3));
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 136))(dword_1041315C);
      if ( !*(_DWORD *)(dword_1042F8D4 + 48) && *((_BYTE *)v6 + 112) )
      {
        sub_1011E7B0(&v56, dword_1047C96C);
        LOBYTE(a4) = 0;
        v18 = sub_100422D0();
        if ( v18 )
          LOBYTE(a4) = (*(_DWORD *)(v18 + 112) & 4) != 0;
        sub_10141600(*(_DWORD *)v6, *((_DWORD *)v6 + 1), *((_DWORD *)v6 + 2), *((_DWORD *)v6 + 3), a4, 0);
        v19 = v56;
        if ( v56 )
        {
          (*(void (__thiscall **)(int))(*(_DWORD *)v56 + 12))(v56);
          (*(void (__thiscall **)(int))(*(_DWORD *)v19 + 4))(v19);
        }
        v56 = 0;
      }
      sub_1011DBE0(off_103E524C);
      (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)dword_1041315C + 372))(
        dword_1041315C,
        *(_DWORD *)v6,
        *((_DWORD *)v6 + 1),
        *((_DWORD *)v6 + 2),
        *((_DWORD *)v6 + 3));
      v20 = *((_DWORD *)v6 + 1);
      v21 = *v6;
      v22 = *((_DWORD *)v6 + 3);
      a4 = *((_DWORD *)v6 + 2);
      v55 = v20;
      v23 = *(_DWORD *)dword_1041315C;
      v54 = LODWORD(v21);
      if ( !(*(unsigned __int8 (__thiscall **)(int))(v23 + 376))(dword_1041315C) )
        ((void (__thiscall *)(int (***)(), int, int, int, int))(*off_103E4FC0)[10])(off_103E4FC0, v54, v55, a4, v22);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 200))(dword_1047C97C) == 1 )
      {
        sub_1011E7B0(&v56, dword_1047C96C);
        v24 = v56;
        v46[0] = 1.0;
        v46[1] = 1.0;
        v46[2] = 1.0;
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v56 + 608))(v56, v46);
        (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 12))(v24);
        (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 4))(v24);
      }
      v25 = *(_DWORD *)dword_10413168;
      v26 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5);
      (*(void (__thiscall **)(int, int))(v25 + 160))(dword_10413168, v26);
      if ( *(_BYTE *)(v5 + 564) )
      {
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
        if ( v27 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27);
        a4 = *(_DWORD *)v27 + 444;
        v28 = sub_10116220();
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD))a4)(v27, v28, 0, 0, 0);
        (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 12))(v27);
        (*(void (__thiscall **)(int))(*(_DWORD *)v27 + 4))(v27);
        *(_BYTE *)(v5 + 564) = 0;
      }
      v29 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      if ( v29 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 8))(v29);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v29 + 24))(v29, v48);
      (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 12))(v29);
      (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 4))(v29);
      if ( *(_BYTE *)(v5 + 440) )
      {
        qmemcpy(v43, v47, sizeof(v43));
        qmemcpy(v44, (const void *)(v49 + 316), 0x74u);
        v41 = v44[22] * 0.75;
        v30 = sub_10135880(v44[9], v41);
        v31 = v49;
        v44[9] = v30;
        v42 = *(_DWORD *)(v49 + 436);
        v40 = *(_DWORD *)(v49 + 432);
        v32 = *(void (__thiscall **)(int, float *, int, int))(*(_DWORD *)v49 + 24);
        v33 = v49;
        LOBYTE(v44[28]) = 0;
        *(_BYTE *)(v49 + 440) = 0;
        v32(v33, v44, v40, v42);
        sub_100748E0((_DWORD *)(v31 + 152), (int)v43);
        v5 = v31;
      }
    }
    else
    {
      v10 = (float *)sub_100DDA40(164);
      if ( v10 )
        v11 = (volatile signed __int32 *)sub_10144240(v10, v5);
      else
        v11 = 0;
      sub_10146A40((int)v11, v6);
      (**(void (__thiscall ***)(int, volatile signed __int32 *))(v5 + 556))(v5 + 556, v11);
      byte_1043BD09 = 1;
      byte_1043BD08 = 1;
      if ( v11
        && !_InterlockedDecrement(v11 + 1)
        && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v11 + 4))(v11) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v11)(v11, 1);
      }
    }
    v34 = *(void (__thiscall ***)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))dword_10413168;
    v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5);
    ((void (__thiscall **)(int, float *, _DWORD, int, int))v34)[39](dword_10413168, v6, 0, v48, v35);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 136))(v5, v6);
    if ( (a5 & 2) != 0 )
    {
      CVProfile::EnterScope(g_VProfCurrentProfile, "VGui_DrawHud", 0, "VGUI", 0, 4);
      sub_10132280();
      v36 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041317C + 4))(dword_1041317C, 2);
      if ( v36 )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA70 + 8))(
          dword_1047CA70,
          v36,
          *(_DWORD *)v6,
          *((_DWORD *)v6 + 1));
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA70 + 16))(
          dword_1047CA70,
          v36,
          *((_DWORD *)v6 + 2),
          *((_DWORD *)v6 + 3));
      }
      v37 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1041317C + 4))(dword_1041317C, 6);
      if ( v37 )
      {
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA70 + 8))(
          dword_1047CA70,
          v37,
          *(_DWORD *)v6,
          *((_DWORD *)v6 + 1));
        (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA70 + 16))(
          dword_1047CA70,
          v37,
          *((_DWORD *)v6 + 2),
          *((_DWORD *)v6 + 3));
      }
      byte_1043BD08 = 1;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 144))(dword_10413168, 2);
      byte_1043BD08 = 0;
      nullsub_4();
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 116))(dword_1044CC48);
      v34 = (void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
      if ( v34 )
        (*((void (__thiscall **)(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))*v34 + 2))(v34);
      (*((void (__thiscall **)(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD), _DWORD))*v34 + 4))(v34, 0);
      (*((void (__thiscall **)(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))*v34 + 3))(v34);
      (*((void (__thiscall **)(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD)))*v34 + 1))(v34);
      CVProfile::ExitScope(g_VProfCurrentProfile);
    }
    sub_1013DF70((int)v6, (int *)v6);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 140))(v5, v6);
    byte_1043BD09 = 0;
    byte_1043BD08 = 0;
    sub_1013C8F0();
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C97C + 124))(dword_1047C97C) >= 70 )
      sub_10149D60((int *)v5, v5, (int)v34, v6);
    v38 = *(_DWORD *)dword_10413168;
    v39 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 40))(v5);
    (*(void (__thiscall **)(int, int))(v38 + 160))(dword_10413168, v39);
    sub_10147E10(dword_103E7ED8);
    return sub_1002B550();
  }
}
