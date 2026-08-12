int __cdecl sub_1024BA60(_DWORD *a1)
{
  int result; // eax
  int v2; // esi
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  void *v11; // eax
  _DWORD *v12; // esi
  int j; // esi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  char *v17; // edi
  _DWORD *v18; // esi
  char *v19; // eax
  int v20; // ebx
  int v21; // esi
  _BYTE *v22; // eax
  int v23; // edx
  int i; // esi
  int v25; // ebx
  int v26; // edi
  char **v27; // esi
  int *v28; // esi
  int v29; // ebx
  int v30; // esi
  char Str[2048]; // [esp+8h] [ebp-2068h] BYREF
  char String1[2048]; // [esp+808h] [ebp-1868h] BYREF
  _DWORD v33[515]; // [esp+1008h] [ebp-1068h] BYREF
  char v34[2048]; // [esp+1814h] [ebp-85Ch] BYREF
  char *v35; // [esp+2014h] [ebp-5Ch] BYREF
  _DWORD *v36; // [esp+201Ch] [ebp-54h]
  bool (__cdecl *v37)(const char **, const char **); // [esp+2020h] [ebp-50h] BYREF
  int v38; // [esp+2024h] [ebp-4Ch]
  int v39; // [esp+2028h] [ebp-48h]
  int v40; // [esp+202Ch] [ebp-44h]
  int v41; // [esp+2030h] [ebp-40h]
  int v42; // [esp+2034h] [ebp-3Ch]
  int v43; // [esp+2038h] [ebp-38h]
  int v44; // [esp+203Ch] [ebp-34h]
  int v45; // [esp+2040h] [ebp-30h]
  _DWORD *v46; // [esp+2044h] [ebp-2Ch]
  int v47; // [esp+2048h] [ebp-28h] BYREF
  int v48; // [esp+204Ch] [ebp-24h]
  int v49; // [esp+2050h] [ebp-20h]
  int v50; // [esp+2054h] [ebp-1Ch]
  int v51; // [esp+2058h] [ebp-18h]
  char *Source; // [esp+205Ch] [ebp-14h] BYREF
  _BYTE *v53; // [esp+2060h] [ebp-10h]
  int v54; // [esp+2064h] [ebp-Ch]
  int v55; // [esp+2068h] [ebp-8h]
  int v56; // [esp+206Ch] [ebp-4h]

  result = sub_10201E20(a1);
  v2 = result;
  v3 = 0;
  v56 = result;
  if ( !result )
    return result;
  v4 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v55 = 0;
  if ( result > 0 )
  {
    do
    {
      v33[513] = sub_10201E50(a1, v3);
      v5 = sub_10184390(12);
      if ( v5 )
      {
        v6 = *(_DWORD *)(dword_106C68C0 + 4 * v33[513]);
        v7 = *(_DWORD *)(v6 + 12);
        v8 = *(_DWORD *)(v6 + 4);
        *(_DWORD *)v5 = v8;
        *(_DWORD *)(v5 + 4) = v7;
        *(_DWORD *)(v5 + 8) = v8;
      }
      else
      {
        v5 = 0;
      }
      v33[0] = v5;
      sub_101825E0((char **)v5, "targetname", (char *)&v33[1]);
      LOBYTE(v33[514]) = 0;
      v9 = v4;
      if ( v4 + 1 > v48 )
      {
        sub_1024B2B0(&v47, v4 - v48 + 1);
        v4 = v50;
      }
      v10 = v47;
      v50 = ++v4;
      v51 = v47;
      if ( v4 - v9 - 1 > 0 )
      {
        memcpy((void *)(2060 * v9 + v47 + 2060), (const void *)(2060 * v9 + v47), 2060 * (v4 - v9 - 1));
        v10 = v47;
      }
      v11 = (void *)(v10 + 2060 * v9);
      if ( v11 )
      {
        qmemcpy(v11, v33, 0x80Cu);
        v3 = v55;
      }
      v55 = ++v3;
    }
    while ( v3 < v56 );
    v2 = v56;
  }
  if ( sub_10201E40(a1) )
  {
    v55 = 0;
    if ( v2 <= 0 )
      goto LABEL_52;
    v54 = v47;
    do
    {
      v12 = *(_DWORD **)v54;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      v41 = -1;
      v42 = 0;
      v43 = -1;
      v44 = -1;
      v45 = 0;
      v37 = sub_10002010;
      v46 = v12;
      if ( sub_10182600((char **)v12, String1, Str) )
      {
        do
        {
          if ( _stricmp(String1, "targetname") )
          {
            v35 = String1;
            v14 = sub_100BB910((unsigned __int8 (__cdecl **)(int, int))&v37, (int)&v35);
            if ( v14 == -1 )
            {
              Source = 0;
              v14 = sub_100BC380((int)&v37, String1, &Source);
            }
            v15 = v38;
            v16 = 3 * v14;
            ++*(_DWORD *)(v38 + 8 * v16 + 20);
            v17 = Str;
            v18 = (_DWORD *)(v15 + 8 * v16 + 20);
            v36 = v18;
            v19 = strchr(Str, 44);
            Source = v19;
            if ( v19 )
            {
              sub_104299C0((char *)&v33[3], Str, v19 - Str + 1);
              v17 = (char *)&v33[3];
            }
            v20 = 0;
            v53 = (_BYTE *)(v47 + 2056);
            do
            {
              if ( !_stricmp(v53 - 2052, v17) )
              {
                if ( *(_DWORD *)(dword_106C6894 + 48) )
                  Msg(
                    "Template Connection Found: Key %s (\"%s\") in entity named \"%s\"(%d) matches entity %d's targetname\n",
                    String1,
                    v17,
                    (const char *)(v54 + 4),
                    v55,
                    v20);
                v21 = *v18 - 1;
                if ( Source )
                {
                  sub_104299C0(v34, (char *)&v33[3], 0x800u);
                  sub_10429750((int)v34, off_1064F858, 2048, -1);
                  sub_10429750((int)v34, Source, 2048, -1);
                }
                else
                {
                  sub_104299C0(v34, v17, 0x800u);
                  sub_10429750((int)v34, off_1064F858, 2048, -1);
                }
                sub_101820D0(v46, String1, v34, v21);
                v22 = v53;
                v23 = v54;
                v18 = v36;
                *v53 = 1;
                *(_BYTE *)(*(_DWORD *)(dword_106C68C0 + 4 * *(_DWORD *)(v23 + 2052)) + 16) = 1;
                *(_BYTE *)(*(_DWORD *)(dword_106C68C0 + 4 * *((_DWORD *)v22 - 1)) + 16) = 1;
              }
              v53 += 2060;
              ++v20;
            }
            while ( v20 < v56 );
            v12 = v46;
          }
        }
        while ( sub_10181FD0((char **)v12, String1, Str) );
        for ( i = sub_100BB3F0(&v37); i != -1; i = sub_100BBAC0(&v37, i) )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v38 + 24 * i + 16));
      }
      else
      {
        for ( j = sub_100BB3F0(&v37); j != -1; j = sub_100BBAC0(&v37, j) )
          (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(24 * j + 0x10));
      }
      sub_100BBA00(&v37);
      sub_100BBA00(&v37);
      if ( v40 >= 0 && v38 )
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v38);
      v54 += 2060;
      ++v55;
    }
    while ( v55 < v56 );
    if ( v56 <= 0 )
      goto LABEL_52;
    v25 = v47;
    v26 = v56;
    do
    {
      if ( *(_BYTE *)(v25 + 2056) )
      {
        v27 = *(char ***)v25;
        sub_101825E0(*(char ***)v25, "targetname", v34);
        sub_10429750((int)v34, off_1064F858, 2048, -1);
        sub_101820D0(v27, "targetname", v34, 0);
      }
      v25 += 2060;
      --v26;
    }
    while ( v26 );
    v2 = v56;
  }
  if ( v2 > 0 )
  {
    v28 = (int *)v47;
    v29 = v56;
    do
    {
      sub_10184660(*v28);
      v28 += 515;
      --v29;
    }
    while ( v29 );
  }
LABEL_52:
  v30 = v49;
  result = v47;
  if ( v49 >= 0 )
  {
    if ( v47 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v47);
      v47 = 0;
      result = 0;
    }
    if ( v30 >= 0 )
    {
      if ( result )
        return (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
    }
  }
  return result;
}
