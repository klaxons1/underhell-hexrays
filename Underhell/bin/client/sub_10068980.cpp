int __thiscall sub_10068980(_DWORD *this)
{
  char *v1; // eax
  int *v2; // esi
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  _BYTE *v6; // edx
  char v7; // cl
  const char *v8; // edx
  bool v9; // zf
  const char *v10; // ecx
  char v11; // al
  const char *v12; // ecx
  int v13; // esi
  int v14; // ebx
  const char **v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  _DWORD *v18; // ebx
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  _DWORD *v23; // ecx
  const char *v24; // ecx
  _BYTE *v25; // edx
  char v26; // al
  _DWORD *v27; // esi
  int v28; // edi
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // esi
  int v34; // edi
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  _DWORD *v38; // eax
  int v39; // edi
  int v40; // ebx
  const char **v41; // esi
  _DWORD *v42; // eax
  _DWORD *v43; // esi
  _DWORD *v44; // edi
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // ecx
  _DWORD *v49; // eax
  _BYTE *v50; // edx
  const char *v51; // ecx
  char v52; // al
  _DWORD *v53; // esi
  int v54; // edi
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  _DWORD *v58; // eax
  _DWORD *v59; // esi
  int v60; // edi
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  _DWORD *v64; // eax
  char *v65; // eax
  char v67[260]; // [esp+4h] [ebp-530h] BYREF
  char Buffer[260]; // [esp+108h] [ebp-42Ch] BYREF
  _BYTE v69[252]; // [esp+20Ch] [ebp-328h] BYREF
  int v70; // [esp+308h] [ebp-22Ch] BYREF
  char v71[260]; // [esp+30Ch] [ebp-228h] BYREF
  char Destination[260]; // [esp+410h] [ebp-124h] BYREF
  int *i; // [esp+514h] [ebp-20h]
  int v74; // [esp+518h] [ebp-1Ch]
  int v75; // [esp+51Ch] [ebp-18h] BYREF
  int v76; // [esp+520h] [ebp-14h]
  const char *v77; // [esp+524h] [ebp-10h]
  const char *v78; // [esp+52Ch] [ebp-8h]
  _DWORD *v79; // [esp+530h] [ebp-4h]

  v79 = this;
  memset(Destination, 0, sizeof(Destination));
  sub_10228370(Buffer, 0x104u, "materials/vgui/%s/*.vmt", (_BYTE)this + 41);
  v1 = (char *)(*(int (__thiscall **)(int, char *, int *))(*(_DWORD *)dword_1047C968 + 108))(
                 dword_1047C968,
                 Buffer,
                 &v75);
  if ( v1 )
    sub_102282F0(Destination, v1, 0x104u);
  v76 = 0;
  if ( Destination[0] )
  {
    v2 = &v70;
    for ( i = &v70; ; v2 = i )
    {
      v3 = v79;
      sub_10228370(v71, 0x104u, "vgui/%s/%s", (_BYTE)v79 + 41);
      *((_BYTE *)v2 + strlen(v71)) = 0;
      v74 = sub_10074490(v71);
      sub_10228370(v67, 0x104u, "materials/vgui/%s/%s", (_BYTE)v3 + 41);
      if ( sub_10229D00(32) )
        sub_10229D20("material");
      if ( dword_1047C968 )
        v4 = dword_1047C968 + 4;
      else
        v4 = 0;
      if ( (unsigned __int8)sub_10229D70(v4, v67, 0) )
      {
        v5 = sub_1022B4C0("%keywords", (int)Locale);
        v6 = &v69[-v5];
        do
        {
          v7 = *(_BYTE *)v5;
          v6[v5] = *(_BYTE *)v5;
          ++v5;
        }
        while ( v7 );
        v8 = v69;
        v77 = v69;
        if ( v69[0] )
        {
          while ( 1 )
          {
            v9 = *v8 == 0;
            v10 = v8;
            v78 = v8;
            if ( !v9 )
            {
              do
              {
                if ( *v10 == 44 )
                  break;
                ++v10;
              }
              while ( *v10 );
              v78 = v10;
            }
            if ( *v10 )
            {
              *v10 = 0;
              v11 = v10[1];
              v12 = v10 + 1;
              v78 = v12;
              if ( v11 )
              {
                do
                {
                  if ( v11 != 44 && v11 != 32 )
                    break;
                  v11 = *++v12;
                }
                while ( v11 );
                v78 = v12;
              }
            }
            v13 = v3[366];
            v14 = 0;
            if ( v13 > 0 )
            {
              v15 = (const char **)v3[363];
              while ( strcmp(*v15, v8) )
              {
                ++v14;
                ++v15;
                if ( v14 >= v13 )
                  break;
                v8 = v77;
              }
            }
            if ( v14 >= v13 )
            {
              v16 = (_DWORD *)sub_100DDA40(104);
              if ( v16 )
              {
                v16[16] = 0;
                v16[17] = 0;
                v16[18] = 0;
                v16[19] = 0;
                v16[20] = 0;
                v16[21] = 0;
                v16[22] = 0;
                v16[23] = 0;
                v16[24] = 0;
                v16[25] = 0;
                v17 = v16;
              }
              else
              {
                v17 = 0;
              }
              v18 = v79;
              v19 = v79[366];
              v20 = v79[364];
              if ( v19 + 1 > v20 )
                sub_1010AFF0(v19 - v20 + 1);
              ++v18[366];
              v21 = v18[363];
              v22 = v18[366] - v19 - 1;
              v18[367] = v21;
              if ( v22 > 0 )
                memcpy((void *)(v21 + 4 * v19 + 4), (const void *)(v21 + 4 * v19), 4 * v22);
              v23 = (_DWORD *)(4 * v19 + v18[363]);
              if ( v23 )
                *v23 = v17;
              v24 = v77;
              v25 = *(_BYTE **)(4 * v19 + v18[363]);
              do
              {
                v26 = *v24;
                *v25++ = *v24++;
              }
              while ( v26 );
              v14 = v19;
            }
            v27 = *(_DWORD **)(v79[363] + 4 * v14);
            v28 = v27[19];
            v29 = v27[17];
            if ( v28 + 1 > v29 )
              sub_1010AFF0(v28 - v29 + 1);
            ++v27[19];
            v30 = v27[16];
            v31 = v27[19] - v28 - 1;
            v27[20] = v30;
            if ( v31 > 0 )
              memcpy((void *)(v30 + 4 * v28 + 4), (const void *)(v30 + 4 * v28), 4 * v31);
            v32 = (_DWORD *)(v27[16] + 4 * v28);
            if ( v32 )
              *v32 = v74;
            v33 = *(_DWORD **)(v79[363] + 4 * v14);
            v34 = v33[24];
            v35 = v33[22];
            if ( v34 + 1 > v35 )
              sub_1010AFF0(v34 - v35 + 1);
            ++v33[24];
            v36 = v33[21];
            v37 = v33[24] - v34 - 1;
            v33[25] = v36;
            if ( v37 > 0 )
              memcpy((void *)(v36 + 4 * v34 + 4), (const void *)(v36 + 4 * v34), 4 * v37);
            v38 = (_DWORD *)(v33[21] + 4 * v34);
            if ( v38 )
              *v38 = v76;
            v9 = *v78 == 0;
            v8 = v78;
            v77 = v78;
            if ( v9 )
              break;
            v3 = v79;
          }
        }
      }
      v39 = v79[366];
      v40 = 0;
      if ( v39 > 0 )
      {
        v41 = (const char **)v79[363];
        do
        {
          if ( !strcmp(*v41, Locale) )
            break;
          ++v40;
          ++v41;
        }
        while ( v40 < v39 );
      }
      if ( v40 >= v39 )
      {
        v42 = (_DWORD *)sub_100DDA40(104);
        v43 = 0;
        if ( v42 )
        {
          v42[16] = 0;
          v42[17] = 0;
          v42[18] = 0;
          v42[19] = 0;
          v42[20] = 0;
          v42[21] = 0;
          v42[22] = 0;
          v42[23] = 0;
          v42[24] = 0;
          v42[25] = 0;
          v43 = v42;
        }
        v44 = v79;
        v45 = v79[366];
        v46 = v79[364];
        if ( v45 + 1 > v46 )
          sub_1010AFF0(v45 - v46 + 1);
        ++v44[366];
        v47 = v44[363];
        v48 = v44[366] - 1;
        v44[367] = v47;
        if ( v48 > 0 )
          memcpy((void *)(v47 + 4), (const void *)v47, 4 * v48);
        v49 = (_DWORD *)v44[363];
        if ( v49 )
          *v49 = v43;
        v50 = *(_BYTE **)v44[363];
        v40 = 0;
        v51 = Locale;
        do
        {
          v52 = *v51;
          *v50++ = *v51++;
        }
        while ( v52 );
      }
      v53 = *(_DWORD **)(v79[363] + 4 * v40);
      v54 = v53[19];
      v55 = v53[17];
      if ( v54 + 1 > v55 )
        sub_1010AFF0(v54 - v55 + 1);
      ++v53[19];
      v56 = v53[16];
      v57 = v53[19] - v54 - 1;
      v53[20] = v56;
      if ( v57 > 0 )
        memcpy((void *)(v56 + 4 * v54 + 4), (const void *)(v56 + 4 * v54), 4 * v57);
      v58 = (_DWORD *)(v53[16] + 4 * v54);
      if ( v58 )
        *v58 = v74;
      v59 = *(_DWORD **)(v79[363] + 4 * v40);
      v60 = v59[24];
      v61 = v59[22];
      if ( v60 + 1 > v61 )
        sub_1010AFF0(v60 - v61 + 1);
      ++v59[24];
      v62 = v59[21];
      v63 = v59[24] - v60 - 1;
      v59[25] = v62;
      if ( v63 > 0 )
        memcpy((void *)(v62 + 4 * v60 + 4), (const void *)(v62 + 4 * v60), 4 * v63);
      v64 = (_DWORD *)(v59[21] + 4 * v60);
      if ( v64 )
        *v64 = v76;
      v65 = (char *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C968 + 112))(dword_1047C968, v75);
      if ( v65 )
        sub_102282F0(Destination, v65, 0x104u);
      else
        Destination[0] = 0;
      ++v76;
      if ( !Destination[0] )
        break;
    }
  }
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047C968 + 120))(dword_1047C968, v75);
}
