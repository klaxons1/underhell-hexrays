unsigned __int8 (__cdecl *__usercall sub_10284800@<eax>(int a1@<ecx>, int a2@<ebp>, int a3@<edi>))(int, int)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // ebp
  void (__thiscall **v13)(_DWORD, const char *, _DWORD); // edi
  const char *v14; // eax
  int *v15; // eax
  int *v16; // eax
  int *v17; // eax
  int *v18; // eax
  int v19; // eax
  int (__thiscall ***v20)(void *, int, int); // eax
  _BYTE *v21; // edi
  int (__thiscall ***v22)(_DWORD); // eax
  int (__thiscall ***v23)(void *, int, int); // eax
  _BYTE *v24; // edi
  int (__thiscall ***v25)(_DWORD); // eax
  int (__thiscall ***v26)(void *, int, int); // eax
  int v27; // eax
  int v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  int v35; // ebp
  _DWORD *v36; // ebx
  int v37; // eax
  int v38; // ecx
  unsigned __int8 (__cdecl *v39)(int, int); // edx
  int v40; // edi
  bool v41; // zf
  int v42; // edx
  int j; // edi
  int v44; // eax
  int (__thiscall ***v45)(void *, int, int); // eax
  int v46; // eax
  int (__thiscall ***v47)(void *, int, int); // eax
  int v48; // eax
  int (__thiscall ***v49)(void *, int, int); // eax
  int v50; // eax
  int (__thiscall ***v51)(void *, int, int); // eax
  _DWORD *v52; // eax
  _DWORD *v53; // eax
  int v54; // eax
  int (__thiscall ***v55)(void *, int, int); // eax
  _WORD *v56; // eax
  int (__thiscall ***v57)(void *, int, int); // eax
  _DWORD *v58; // eax
  _DWORD *v59; // edi
  int v60; // eax
  _DWORD *k; // edi
  const char *v62; // eax
  int v63; // eax
  int v64; // eax
  void (__thiscall **v65)(int, int, int, int, _DWORD); // ebp
  int v66; // eax
  unsigned __int8 (__cdecl *result)(int, int); // eax
  int v68; // [esp+6Ch] [ebp-7Ch]
  char v71; // [esp+8Bh] [ebp-5Dh] BYREF
  int i; // [esp+8Ch] [ebp-5Ch]
  unsigned __int8 (__cdecl *v73)(int, int); // [esp+90h] [ebp-58h] BYREF
  int v74; // [esp+94h] [ebp-54h]
  int v75; // [esp+98h] [ebp-50h] BYREF
  int v76; // [esp+9Ch] [ebp-4Ch]
  unsigned __int8 (__cdecl *v77)(int, int); // [esp+A0h] [ebp-48h]
  int v78; // [esp+A4h] [ebp-44h]
  int v79; // [esp+A8h] [ebp-40h]
  char Buffer[24]; // [esp+ACh] [ebp-3Ch] BYREF
  int v81; // [esp+C4h] [ebp-24h] BYREF
  int v82; // [esp+C8h] [ebp-20h]
  bool (__cdecl *v83)(const char **, const char **); // [esp+CCh] [ebp-1Ch] BYREF
  int v84; // [esp+D0h] [ebp-18h]
  int v85; // [esp+D4h] [ebp-14h]
  int v86; // [esp+D8h] [ebp-10h]
  int v87; // [esp+DCh] [ebp-Ch]
  int v88; // [esp+E0h] [ebp-8h]
  int v89; // [esp+E4h] [ebp-4h]
  int retaddr; // [esp+E8h] [ebp+0h]

  v4 = (_DWORD *)sub_100DDA40(28);
  if ( v4 )
  {
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    v4[4] = 0;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(a1 + 472) = v4;
  v5 = (_DWORD *)sub_10229D00(32);
  if ( v5 )
    v6 = sub_10229D20(v5, (int)"BuildDialog");
  else
    v6 = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 472) + 20) = v6;
  v7 = sub_100DDA40(292);
  if ( v7 )
    v8 = sub_102874F0(v7, a1, "BuildModeControls");
  else
    v8 = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 472) + 24) = v8;
  v9 = sub_100DDA40(972);
  if ( v9 )
    v10 = sub_102602A0(v9, (int (__thiscall ***)(_DWORD))a1, "FileSelectionCombo", 10, 0);
  else
    v10 = 0;
  v11 = *(_DWORD **)(a1 + 456);
  *(_DWORD *)(a1 + 464) = v10;
  v12 = 0;
  if ( sub_10278050(v11) > 0 )
  {
    do
    {
      v13 = (void (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(a1 + 464) + 1072);
      v14 = sub_10280250(*(_DWORD **)(a1 + 456), v12);
      (*v13)(*(_DWORD *)(a1 + 464), v14, 0);
      ++v12;
    }
    while ( v12 < sub_10278050(*(_DWORD **)(a1 + 456)) );
  }
  if ( (*(int (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 + 464) + 1076))(*(_DWORD *)(a1 + 464), a3, a2) < 2 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 464) + 200))(*(_DWORD *)(a1 + 464), 0);
  v15 = (int *)sub_100DDA40(284);
  if ( v15 )
    v16 = sub_1024B100(v15, (int (__thiscall ***)(_DWORD))a1, "StatusLabel", "[nothing currently selected]");
  else
    v16 = 0;
  *(_DWORD *)(a1 + 460) = v16;
  (*(void (__thiscall **)(int *, int))(*v16 + 812))(v16, 1);
  sub_10237520(*(int (__thiscall ****)(void *, int *, _BYTE *))(a1 + 460), (_BYTE *)0x12);
  v17 = (int *)sub_100DDA40(208);
  if ( v17 )
    v18 = sub_102605B0(v17, (int (__thiscall ***)(_DWORD))a1, "Divider");
  else
    v18 = 0;
  *(_DWORD *)(a1 + 468) = v18;
  v19 = sub_100DDA40(972);
  if ( v19 )
    v20 = (int (__thiscall ***)(void *, int, int))sub_102602A0(v19, (int (__thiscall ***)(_DWORD))a1, 0, 30, 0);
  else
    v20 = 0;
  *(_DWORD *)(a1 + 504) = v20;
  sub_102361A0(v20, 116, 18);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 504) + 1140))(*(_DWORD *)(a1 + 504), 3);
  v21 = (_BYTE *)sub_100DDA40(980);
  if ( v21 )
  {
    v22 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 456) + 36))(*(_DWORD *)(a1 + 456));
    v23 = (int (__thiscall ***)(void *, int, int))sub_10282440(v21, (int (__thiscall ***)(_DWORD))a1, 0, 15, 0, 1, v22);
  }
  else
  {
    v23 = 0;
  }
  *(_DWORD *)(a1 + 784) = v23;
  sub_102361A0(v23, 116, 18);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 784) + 1140))(*(_DWORD *)(a1 + 784), 3);
  v24 = (_BYTE *)sub_100DDA40(980);
  if ( v24 )
  {
    v25 = (int (__thiscall ***)(_DWORD))(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 456) + 36))(*(_DWORD *)(a1 + 456));
    v26 = (int (__thiscall ***)(void *, int, int))sub_10282440(v24, (int (__thiscall ***)(_DWORD))a1, 0, 15, 0, 0, v25);
  }
  else
  {
    v26 = 0;
  }
  *(_DWORD *)(a1 + 788) = v26;
  sub_102361A0(v26, 116, 18);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 788) + 1140))(*(_DWORD *)(a1 + 788), 3);
  v27 = sub_100DDA40(364);
  if ( v27 )
    v28 = sub_1025C5C0(v27, (int (__thiscall ***)(_DWORD))a1, "NextChild", "Next", (int (***)(void))a1, 0);
  else
    v28 = 0;
  *(_DWORD *)(a1 + 792) = v28;
  v29 = (_DWORD *)sub_10229D00(32);
  if ( v29 )
    v30 = sub_1022B1A0(v29, (int)"OnChangeChild", "direction", 1);
  else
    v30 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 792) + 1028))(*(_DWORD *)(a1 + 792), v30);
  v31 = sub_100DDA40(364);
  if ( v31 )
    v32 = sub_1025C5C0(v31, (int (__thiscall ***)(_DWORD))a1, "PrevChild", "Prev", (int (***)(void))a1, 0);
  else
    v32 = 0;
  *(_DWORD *)(a1 + 796) = v32;
  v33 = (_DWORD *)sub_10229D00(32);
  if ( v33 )
    v34 = sub_1022B1A0(v33, (int)"OnChangeChild", "direction", -1);
  else
    v34 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 796) + 1028))(*(_DWORD *)(a1 + 796), v34);
  v74 = (*(int (__thiscall **)(_DWORD, const char *, _DWORD))(**(_DWORD **)(a1 + 504) + 1072))(
          *(_DWORD *)(a1 + 504),
          "None",
          0);
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  sub_10250BF0(&v75);
  v35 = 0;
  v83 = sub_100EB470;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = -1;
  v88 = 0;
  v89 = -1;
  retaddr = -1;
  for ( i = 0; i < v78; ++i )
  {
    v36 = (_DWORD *)(v75 + 4 * i);
    sub_10283230((unsigned __int8 (__cdecl **)(int, int))&v83, (int)v36, &v73, &v71);
    v37 = sub_10283320(&v83);
    v38 = v84;
    v39 = v73;
    v40 = 20 * v37;
    v41 = (unsigned __int8 (__cdecl *)(int, int))((char *)v73 + 1) == 0;
    *(_DWORD *)(v84 + v40 + 8) = v73;
    *(_DWORD *)(v38 + v40 + 4) = -1;
    *(_DWORD *)(v38 + v40) = -1;
    *(_DWORD *)(v38 + v40 + 12) = 0;
    if ( v41 )
    {
      v87 = v37;
    }
    else
    {
      v42 = 5 * (_DWORD)v39;
      if ( v71 )
        *(_DWORD *)(v38 + 4 * v42) = v37;
      else
        *(_DWORD *)(v38 + 4 * v42 + 4) = v37;
    }
    sub_10283A30(&v83, v37);
    v35 = v84;
    ++v88;
    if ( v40 + v84 != -16 )
      *(_DWORD *)(v40 + v84 + 16) = *v36;
  }
  for ( j = sub_10283700(&v83); j != -1; j = sub_102837A0(&v83, j) )
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 504) + 1072))(
      *(_DWORD *)(a1 + 504),
      *(_DWORD *)(v35 + 20 * j + 16),
      0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 504) + 1112))(*(_DWORD *)(a1 + 504), v74);
  v44 = sub_100DDA40(364);
  if ( v44 )
    v45 = (int (__thiscall ***)(void *, int, int))sub_1025C5C0(
                                                    v44,
                                                    (int (__thiscall ***)(_DWORD))a1,
                                                    "ExitButton",
                                                    "&Exit",
                                                    0,
                                                    0);
  else
    v45 = 0;
  *(_DWORD *)(a1 + 484) = v45;
  sub_102361A0(v45, 64, 18);
  v46 = sub_100DDA40(364);
  if ( v46 )
    v47 = (int (__thiscall ***)(void *, int, int))sub_1025C5C0(
                                                    v46,
                                                    (int (__thiscall ***)(_DWORD))a1,
                                                    "SaveButton",
                                                    "&Save",
                                                    0,
                                                    0);
  else
    v47 = 0;
  *(_DWORD *)(a1 + 476) = v47;
  sub_102361A0(v47, 64, 18);
  v48 = sub_100DDA40(364);
  if ( v48 )
    v49 = (int (__thiscall ***)(void *, int, int))sub_1025C5C0(
                                                    v48,
                                                    (int (__thiscall ***)(_DWORD))a1,
                                                    "ApplyButton",
                                                    "&Apply",
                                                    0,
                                                    0);
  else
    v49 = 0;
  *(_DWORD *)(a1 + 480) = v49;
  sub_102361A0(v49, 64, 18);
  v50 = sub_100DDA40(364);
  if ( v50 )
    v51 = (int (__thiscall ***)(void *, int, int))sub_1025C5C0(
                                                    v50,
                                                    (int (__thiscall ***)(_DWORD))a1,
                                                    "Localization",
                                                    "&Reload Localization",
                                                    0,
                                                    0);
  else
    v51 = 0;
  *(_DWORD *)(a1 + 492) = v51;
  sub_102361A0(v51, 100, 18);
  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 484) + 1032))(*(_DWORD *)(a1 + 484), "Exit");
  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 476) + 1032))(*(_DWORD *)(a1 + 476), "Save");
  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 480) + 1032))(*(_DWORD *)(a1 + 480), "Apply");
  v52 = (_DWORD *)sub_10229D00(32);
  if ( v52 )
    v53 = sub_10229D20(v52, (int)"ReloadLocalization");
  else
    v53 = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(a1 + 492) + 1028))(*(_DWORD *)(a1 + 492), v53);
  v54 = sub_100DDA40(364);
  if ( v54 )
    v55 = (int (__thiscall ***)(void *, int, int))sub_1025C5C0(
                                                    v54,
                                                    (int (__thiscall ***)(_DWORD))a1,
                                                    "DeletePanelButton",
                                                    "Delete",
                                                    0,
                                                    0);
  else
    v55 = 0;
  *(_DWORD *)(a1 + 488) = v55;
  sub_102361A0(v55, 64, 18);
  (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 488) + 1032))(*(_DWORD *)(a1 + 488), "DeletePanel");
  v56 = (_WORD *)sub_100DDA40(396);
  if ( v56 )
    v57 = (int (__thiscall ***)(void *, int, int))sub_1026EA30(
                                                    v56,
                                                    (int (__thiscall ***)(_DWORD))a1,
                                                    "VarsButton",
                                                    "Variables");
  else
    v57 = 0;
  *(_DWORD *)(a1 + 496) = v57;
  sub_102361A0(v57, 72, 18);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 496) + 1084))(*(_DWORD *)(a1 + 496), 2);
  v58 = sub_1027FA50(*(int **)(a1 + 456));
  v59 = v58;
  if ( v58 && sub_10229C90(v58) )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 496) + 200))(*(_DWORD *)(a1 + 496), 1);
    v60 = sub_100DDA40(392);
    if ( v60 )
      i = sub_1026D6B0(v60, *(int (__thiscall ****)(_DWORD))(a1 + 496), "VarsMenu");
    else
      i = 0;
    for ( k = (_DWORD *)sub_10229C90(v59); k; k = (_DWORD *)sub_1021F0F0(k) )
    {
      v62 = (const char *)sub_10229A00(k);
      _snprintf(Buffer, 0x20u, "%%%s%%", v62);
      v63 = sub_10229D00(32);
      if ( v63 )
        v64 = sub_1022B0E0(v63, (int)"SetClipboardText", "text", Buffer);
      else
        v64 = 0;
      v68 = v64;
      v65 = (void (__thiscall **)(int, int, int, int, _DWORD))(*(_DWORD *)i + 780);
      v66 = sub_10229A00(k);
      (*v65)(i, v66, v68, a1, 0);
    }
    (*(void (__cdecl **)(int))(**(_DWORD **)(a1 + 496) + 1064))(i);
  }
  else
  {
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)(a1 + 496) + 200))(0);
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 480) + 248))(*(_DWORD *)(a1 + 480), 1);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 472) + 24) + 248))(
    *(_DWORD *)(*(_DWORD *)(a1 + 472) + 24),
    2);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 496) + 248))(*(_DWORD *)(a1 + 496), 3);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 488) + 248))(*(_DWORD *)(a1 + 488), 4);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 504) + 248))(*(_DWORD *)(a1 + 504), 5);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 476) + 248))(*(_DWORD *)(a1 + 476), 6);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 484) + 248))(*(_DWORD *)(a1 + 484), 7);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 784) + 248))(*(_DWORD *)(a1 + 784), 8);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 788) + 248))(*(_DWORD *)(a1 + 788), 9);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 796) + 248))(*(_DWORD *)(a1 + 796), 10);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 792) + 248))(*(_DWORD *)(a1 + 792), 11);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 492) + 248))(*(_DWORD *)(a1 + 492), 12);
  sub_102839A0(&v81);
  if ( v84 >= 0 && v82 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v82);
  result = v73;
  v76 = 0;
  if ( v75 >= 0 )
  {
    if ( v73 )
    {
      (*(void (__thiscall **)(_DWORD, unsigned __int8 (__cdecl *)(int, int)))(*g_pMemAlloc + 20))(g_pMemAlloc, v73);
      result = 0;
      v73 = 0;
    }
    v74 = 0;
  }
  v77 = result;
  if ( v75 >= 0 )
  {
    if ( result )
      return (unsigned __int8 (__cdecl *)(int, int))(*(int (__thiscall **)(_DWORD, unsigned __int8 (__cdecl *)(int, int)))(*g_pMemAlloc + 20))(
                                                      g_pMemAlloc,
                                                      result);
  }
  return result;
}
