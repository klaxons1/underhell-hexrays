void __thiscall sub_1026DDF0(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // ebx
  int v4; // esi
  char *v5; // edi
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  const char *v9; // ebx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  _DWORD *v15; // eax
  int v16; // esi
  _DWORD *v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // eax
  _BYTE *v23; // [esp-4h] [ebp-14h]
  _BYTE *v24; // [esp-4h] [ebp-14h]
  int v25; // [esp+Ch] [ebp-4h] BYREF

  v3 = a2;
  v4 = this[11];
  v5 = (char *)sub_1042B460("target_attachment", (int)String);
  v6 = sub_100BEF30(v4, v5);
  v7 = a3;
  a3[1] = v6;
  *v7 = *sub_10162BE0(&a2, v5);
  v8 = sub_1042A2F0(v3);
  if ( v8 )
  {
    while ( 1 )
    {
      v9 = (const char *)sub_1042A070(v8);
      if ( !_stricmp(v9, "entry") )
        break;
      if ( !_stricmp(v9, "exit") )
      {
        v18 = v7[10];
        v19 = v7[8];
        if ( v18 + 1 > v19 )
          sub_10226330(v7 + 7, v18 - v19 + 1);
        ++v7[10];
        v20 = v7[7];
        v21 = v7[10] - v18 - 1;
        v7[11] = v20;
        if ( v21 > 0 )
          memcpy((void *)(v20 + 8 * v18 + 8), (const void *)(v20 + 8 * v18), 8 * v21);
        v14 = 8 * v18;
        v22 = (_DWORD *)(v14 + v7[7]);
        if ( v22 )
        {
          *v22 = 0;
          v22[1] = -1;
        }
        v16 = v7[7];
        v24 = (_BYTE *)sub_1042B460("animation", (int)String);
        v17 = sub_10162BE0(&v25, v24);
        goto LABEL_18;
      }
LABEL_19:
      v8 = sub_1042A300(v8);
      if ( !v8 )
        goto LABEL_20;
    }
    v10 = v7[5];
    v11 = v7[3];
    if ( v10 + 1 > v11 )
      sub_10226330(v7 + 2, v10 - v11 + 1);
    ++v7[5];
    v12 = v7[2];
    v13 = v7[5] - v10 - 1;
    v7[6] = v12;
    if ( v13 > 0 )
      memcpy((void *)(v12 + 8 * v10 + 8), (const void *)(v12 + 8 * v10), 8 * v13);
    v14 = 8 * v10;
    v15 = (_DWORD *)(v14 + v7[2]);
    if ( v15 )
    {
      *v15 = 0;
      v15[1] = -1;
    }
    v16 = v7[2];
    v23 = (_BYTE *)sub_1042B460("animation", (int)String);
    v17 = sub_10162BE0(&a2, v23);
LABEL_18:
    *(_DWORD *)(v16 + v14) = *v17;
    *(_DWORD *)(v16 + v14 + 4) = sub_1042AE10("priority", 0);
    v7 = a3;
    goto LABEL_19;
  }
LABEL_20:
  sub_1004C500((int)(v7 + 2), (_CoreCrtNonSecureSearchSortCompareFunction)sub_1026A050);
  sub_1004C500((int)(v7 + 7), (_CoreCrtNonSecureSearchSortCompareFunction)sub_1026A050);
}
