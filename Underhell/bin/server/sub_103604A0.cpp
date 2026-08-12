void __userpurge sub_103604A0(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, char *String1)
{
  unsigned int v5; // eax
  int *v6; // ecx
  int *v7; // edx
  int v8; // edi
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ebx
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int *v23; // ecx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // ecx
  int v27; // ecx
  __int64 v28; // [esp+24h] [ebp-18h]

  v5 = *(_DWORD *)(a1 + 4184);
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
    if ( v6[1] == v5 >> 12 )
    {
      if ( *v6 )
      {
        sub_100BCCF0((_DWORD *)a1);
        v8 = sub_100BEF30(a1, String1);
        if ( !v8 )
          v8 = *(_DWORD *)(a1 + 4192);
        v9 = *(_DWORD *)(a1 + 4184);
        if ( v9 == -1 || (v7 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v9 >> 12) )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        v11 = *(_DWORD *)(v10 + 424);
        if ( v11 )
        {
          (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)v11 + 268))(
            v11,
            10000.0,
            10000.0,
            0,
            0,
            a3,
            a2);
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
            sub_100DAE60(a1);
          (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v11 + 272))(v11, a1 + 580, a1 + 704);
        }
        v12 = *(_DWORD *)(a1 + 4184);
        if ( v12 == -1 || (v7 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v12 >> 12) )
          v13 = 0;
        else
          v13 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        *(_DWORD *)(a1 + 4280) = *(unsigned __int8 *)(v13 + 306);
        v14 = *(_DWORD *)(a1 + 4184);
        if ( v14 == -1 || (v7 = off_1061BE18, off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v14 >> 12) )
          v15 = 0;
        else
          v15 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        sub_100E0970(v15, (int)v7, 0, 0);
        v16 = *(_DWORD *)(a1 + 4184);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 140))(v17, a1, v8);
        v18 = *(_DWORD *)(a1 + 4184);
        if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v18 >> 12 )
          v19 = 0;
        else
          v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        sub_100E10C0(v19, &flt_106F1CA8);
        v20 = *(_DWORD *)(a1 + 4184);
        if ( v20 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v20 >> 12 )
          v21 = 0;
        else
          v21 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        sub_100E11A0(v21, &flt_106F1CB4);
        v22 = *(_DWORD *)(a1 + 4184);
        if ( v22 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v22 >> 12 )
          v23 = 0;
        else
          v23 = (unsigned int *)off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        sub_101C73D0(v23, 0);
        v24 = *(_DWORD *)(a1 + 4184);
        if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != *(_DWORD *)(a1 + 4184) >> 12 )
          v25 = 0;
        else
          v25 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
        v26 = *(_DWORD *)(v25 + 412);
        if ( v26 == -1 || off_1061BE18[4 * (v26 & 0xFFF) + 2] != v26 >> 12 || !off_1061BE18[4 * (v26 & 0xFFF) + 1] )
        {
          if ( v24 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 2] != v24 >> 12 )
            v27 = 0;
          else
            v27 = off_1061BE18[4 * (*(_DWORD *)(a1 + 4184) & 0xFFF) + 1];
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v27 + 76))(v27, a1);
        }
        if ( v11 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 104))(v11);
        HIDWORD(v28) = a1;
        LODWORD(v28) = a1;
        *(_BYTE *)(a1 + 4288) = 1;
        sub_1010DD80((_DWORD *)(a1 + 4252), v28, 0.0);
      }
    }
  }
}
