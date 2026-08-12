int __usercall sub_10251380@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<esi>)
{
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  int v15; // eax
  int v16; // esi
  int v17; // ebx
  int v18; // eax
  _DWORD *v19; // ebp
  int v20; // ebx
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  int (__thiscall **v23)(_DWORD *, const char *, void *, _DWORD *, int, _DWORD); // esi
  void *v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // ebp
  int v28; // esi
  int v29; // eax
  int v30; // ebx
  _DWORD *v31; // eax
  _DWORD *v32; // ebp
  void *v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // esi
  int v37; // ebx
  int v38; // eax
  int v39; // ebp
  int v40; // ebx
  _DWORD *v41; // eax
  _DWORD *v42; // esi
  void *v43; // eax
  int v44; // eax
  _DWORD *v46; // [esp+D0h] [ebp-21Ch]
  int v47; // [esp+D0h] [ebp-21Ch]
  int v48; // [esp+D4h] [ebp-218h]
  int v49; // [esp+ECh] [ebp-200h]
  int v50; // [esp+ECh] [ebp-200h]
  int v51; // [esp+F0h] [ebp-1FCh]
  int v52; // [esp+F0h] [ebp-1FCh]
  _WORD *v53; // [esp+F0h] [ebp-1FCh]
  int v54; // [esp+F4h] [ebp-1F8h]
  _BYTE v55[500]; // [esp+F8h] [ebp-1F4h] BYREF

  v5 = *(_DWORD *)(a1 + 392);
  if ( v5 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 120))(v5, 1);
  v6 = sub_100DDA40(392);
  if ( v6 )
    v7 = sub_1026D6B0(v6, a1, "EditMenu");
  else
    v7 = 0;
  v8 = *(_BYTE *)(a1 + 294) == 0;
  *(_DWORD *)(a1 + 392) = v7;
  if ( !v8 )
  {
    if ( *(_BYTE *)(a1 + 293) )
      goto LABEL_17;
    v9 = (_DWORD *)sub_10229D00(32);
    if ( v9 )
      v10 = sub_10229D20(v9, (int)"DoCutSelected");
    else
      v10 = 0;
    (*(void (__thiscall **)(_DWORD, const char *, _DWORD *, int, _DWORD))(**(_DWORD **)(a1 + 392) + 780))(
      *(_DWORD *)(a1 + 392),
      "#TextEntry_Cut",
      v10,
      a1,
      0);
  }
  if ( !*(_BYTE *)(a1 + 293) )
  {
    v11 = (_DWORD *)sub_10229D00(32);
    if ( v11 )
      v12 = sub_10229D20(v11, (int)"DoCopySelected");
    else
      v12 = 0;
    (*(void (__thiscall **)(_DWORD, const char *, _DWORD *, int, _DWORD))(**(_DWORD **)(a1 + 392) + 780))(
      *(_DWORD *)(a1 + 392),
      "#TextEntry_Copy",
      v12,
      a1,
      0);
  }
LABEL_17:
  if ( *(_BYTE *)(a1 + 294) )
  {
    v13 = (_DWORD *)sub_10229D00(32);
    if ( v13 )
      v14 = sub_10229D20(v13, (int)"DoPaste");
    else
      v14 = 0;
    (*(void (__thiscall **)(_DWORD, const char *, _DWORD *, int, _DWORD))(**(_DWORD **)(a1 + 392) + 780))(
      *(_DWORD *)(a1 + 392),
      "#TextEntry_Paste",
      v14,
      a1,
      0);
  }
  if ( *(_BYTE *)(a1 + 403) )
  {
    v15 = (*(int (__thiscall **)(int, _DWORD, _DWORD, int, int, int))(*(_DWORD *)dword_1047CA68 + 116))(
            dword_1047CA68,
            0,
            0,
            a4,
            a3,
            a2);
    v16 = v15;
    if ( v15 > 0 )
    {
      v17 = sub_100DDA40((272 * (unsigned __int64)(unsigned int)v15) >> 32 != 0 ? -1 : 272 * v15);
      v51 = v17;
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA68 + 116))(dword_1047CA68, v17, v16);
      v18 = sub_100DDA40(392);
      if ( v18 )
        v19 = (_DWORD *)sub_1026D6B0(v18, a1, "LanguageMenu");
      else
        v19 = 0;
      if ( v16 > 0 )
      {
        v20 = v17 + 8;
        v49 = v16;
        do
        {
          v21 = (_DWORD *)sub_10229D00(32);
          if ( v21 )
            v22 = sub_1022B1A0(v21, (int)"DoLanguageChanged", "handle", *(_DWORD *)(v20 + 256));
          else
            v22 = 0;
          v46 = v22;
          v23 = (int (__thiscall **)(_DWORD *, const char *, void *, _DWORD *, int, _DWORD))(*v19 + 816);
          v24 = sub_10251320((_WORD *)v20);
          v25 = (*v23)(v19, "Language", v24, v46, a1, 0);
          if ( *(_BYTE *)(v20 + 260) )
            sub_1026BB40(v25, 1);
          v20 += 272;
          --v49;
        }
        while ( v49 );
        v17 = v51;
      }
      (*(void (__thiscall **)(_DWORD, const char *, const char *, const char *, int, _DWORD *, _DWORD))(**(_DWORD **)(a1 + 392) + 856))(
        *(_DWORD *)(a1 + 392),
        "Language",
        "#TextEntry_Language",
        Locale,
        a1,
        v19,
        0);
      sub_10034930(v17);
    }
    v26 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 120))(dword_1047CA68, 0);
    v27 = v26;
    if ( v26 > 0 )
    {
      v28 = sub_100DDA40((264 * (unsigned __int64)(unsigned int)v26) >> 32 != 0 ? -1 : 264 * v26);
      (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_1047CA68 + 120))(dword_1047CA68, v28, v27, 0);
      v29 = sub_100DDA40(392);
      if ( v29 )
        v30 = sub_1026D6B0(v29, a1, "ConversionModeMenu");
      else
        v30 = 0;
      if ( v27 > 0 )
      {
        v52 = v27;
        do
        {
          v31 = (_DWORD *)sub_10229D00(32);
          if ( v31 )
            v32 = sub_1022B1A0(v31, (int)"DoConversionModeChanged", "handle", *(_DWORD *)(v28 + 256));
          else
            v32 = 0;
          if ( v28 )
          {
            if ( *(_WORD *)v28 == 35 )
            {
              (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(
                dword_1047CA78,
                v28 + 2,
                v55,
                512);
              v33 = (void *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v55);
            }
            else
            {
              v33 = (void *)v28;
            }
          }
          else
          {
            v33 = &unk_10302674;
          }
          v34 = (*(int (__thiscall **)(int, const char *, void *, _DWORD *, int, _DWORD))(*(_DWORD *)v30 + 816))(
                  v30,
                  "ConversionMode",
                  v33,
                  v32,
                  a1,
                  0);
          if ( *(_BYTE *)(v28 + 260) )
            sub_1026BB40(v34, 1);
          v28 += 264;
          --v52;
        }
        while ( v52 );
        v28 = 0;
      }
      (*(void (__thiscall **)(_DWORD, const char *, const char *, const char *, int, int))(**(_DWORD **)(a1 + 392) + 856))(
        *(_DWORD *)(a1 + 392),
        "ConversionMode",
        "#TextEntry_ConversionMode",
        Locale,
        a1,
        v30);
      sub_10034930(v28);
    }
    v35 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA68 + 124))(dword_1047CA68, 0, 0);
    v36 = v35;
    if ( v35 > 0 )
    {
      v37 = sub_100DDA40((264 * (unsigned __int64)(unsigned int)v35) >> 32 != 0 ? -1 : 264 * v35);
      (*(void (__thiscall **)(int, int, int, int, int, _DWORD))(*(_DWORD *)dword_1047CA68 + 124))(
        dword_1047CA68,
        v37,
        v36,
        v47,
        v48,
        0);
      v38 = sub_100DDA40(392);
      if ( v38 )
        v39 = sub_1026D6B0(v38, a1, "SentenceModeMenu");
      else
        v39 = 0;
      if ( v36 > 0 )
      {
        v53 = (_WORD *)v37;
        v40 = 260;
        v50 = v36;
        do
        {
          v41 = (_DWORD *)sub_10229D00(32);
          if ( v41 )
            v42 = sub_1022B1A0(v41, (int)"DoConversionModeChanged", "handle", *(_DWORD *)(v40 - 4));
          else
            v42 = 0;
          v43 = v53;
          if ( v53 )
          {
            if ( *v53 == 35 )
            {
              (*(void (__thiscall **)(int, _WORD *, _BYTE *, int))(*(_DWORD *)dword_1047CA78 + 16))(
                dword_1047CA78,
                v53 + 1,
                v55,
                512);
              v43 = (void *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA78 + 8))(dword_1047CA78, v55);
            }
          }
          else
          {
            v43 = &unk_10302674;
          }
          v44 = (*(int (__thiscall **)(int, const char *, void *, _DWORD *, int, _DWORD))(*(_DWORD *)v39 + 816))(
                  v39,
                  "SentenceMode",
                  v43,
                  v42,
                  a1,
                  0);
          if ( *(_BYTE *)v40 )
            sub_1026BB40(v44, 1);
          v53 += 132;
          v40 += 264;
          --v50;
        }
        while ( v50 );
        v37 = v54;
      }
      (*(void (__thiscall **)(_DWORD, const char *, const char *, const char *))(**(_DWORD **)(a1 + 392) + 856))(
        *(_DWORD *)(a1 + 392),
        "SentenceMode",
        "#TextEntry_SentenceMode",
        Locale);
      sub_10034930(v37);
    }
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 392) + 124))(*(_DWORD *)(a1 + 392), 0);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 392) + 156))(*(_DWORD *)(a1 + 392), a1);
  return (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 392) + 172))(*(_DWORD *)(a1 + 392), a1);
}
