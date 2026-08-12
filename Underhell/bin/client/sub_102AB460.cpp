char __thiscall sub_102AB460(void *this, int a2, int a3, _DWORD *a4)
{
  int v5; // eax
  void *v7; // esp
  _BYTE *v8; // edi
  void *v9; // esp
  int v10; // eax
  int v11; // edi
  __int16 v12; // ax
  const char *v13; // ebx
  int v14; // eax
  int v15; // edi
  char *v16; // ecx
  char *v17; // edi
  int v18; // ebx
  int v19; // edi
  bool v20; // cc
  bool v21; // bl
  _BYTE v22[12]; // [esp+0h] [ebp-948h] BYREF
  char Src[2048]; // [esp+Ch] [ebp-93Ch] BYREF
  char v24[256]; // [esp+80Ch] [ebp-13Ch] BYREF
  _DWORD v25[4]; // [esp+90Ch] [ebp-3Ch] BYREF
  int v26[5]; // [esp+91Ch] [ebp-2Ch] BYREF
  void *v27; // [esp+930h] [ebp-18h]
  int v28; // [esp+934h] [ebp-14h]
  int v29; // [esp+938h] [ebp-10h]
  int v30; // [esp+93Ch] [ebp-Ch]
  int v31; // [esp+940h] [ebp-8h] BYREF
  bool v32; // [esp+947h] [ebp-1h]
  _BYTE *v33; // [esp+950h] [ebp+8h]

  v27 = this;
  if ( (unsigned int)a3 > 2 )
    return 0;
  v32 = a3 >= 2;
  while ( 1 )
  {
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      HIBYTE(a3) = 0;
      sub_1022F5B0(a2, "%c", (char *)&a3 + 3);
    }
    else
    {
      if ( !sub_1022E380(a2, 1) )
        break;
      v5 = *(_DWORD *)(a2 + 12) + 1;
      HIBYTE(a3) = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
      *(_DWORD *)(a2 + 12) = v5;
    }
    if ( !HIBYTE(a3) )
      break;
    if ( *(_BYTE *)(a2 + 20) )
      return 0;
  }
  v30 = 0;
  v33 = 0;
  a3 = 0;
  if ( v32 )
  {
    v30 = sub_1011C9A0((_DWORD *)a2);
    v7 = alloca(4 * v30);
    v33 = v22;
    v8 = sub_102AAF90((_DWORD *)a2, (int)v22, v30);
    v9 = alloca((int)v8);
    a3 = (int)v22;
    sub_1022E7D0((_BYTE *)a2, v22, (size_t)v8);
  }
  v10 = sub_10097990((_DWORD *)a2);
  v11 = v10;
  v29 = v10;
  if ( !v10 )
    return 1;
  sub_101F6B40(v26, 0, v10);
  v28 = 0;
  if ( v11 > 0 )
  {
    do
    {
      if ( v32 )
      {
        v12 = sub_1011C9A0((_DWORD *)a2);
        if ( v12 >= v30 )
        {
          sub_1011A810(v26);
          return 0;
        }
        v13 = (const char *)(a3 + *(_DWORD *)&v33[4 * v12]);
      }
      else
      {
        sub_1022F000(a2, v24, 256);
        v13 = v24;
      }
      sub_1022F000(a2, Src, 2048);
      sub_1022E7D0((_BYTE *)a2, v25, 0x10u);
      if ( dword_10482954
        && ((v14 = (dword_10482984 + 47) & ~(dword_10482984 - 1),
             v31 = dword_10482970,
             v15 = v14 + dword_10482970,
             v14 + dword_10482970 <= (unsigned int)dword_10482974)
         || sub_1022E130(&dword_10482970, v14 + dword_10482970)
          ? (char *)(v16 = (char *)v31, dword_10482970 = v15)
          : (v16 = 0),
            v16) )
      {
        v17 = sub_102AA9A0(v16, v13);
      }
      else
      {
        v17 = 0;
      }
      v31 = (int)v17;
      sub_102AA700(v17, 1);
      sub_102AAB50((int *)v17, "name");
      sub_102AD500(Src);
      sub_102AA410(v17, v25);
      if ( v17 )
        sub_102AA700(v17, 0);
      sub_10258C50(v26, v26[3], &v31);
      ++v28;
    }
    while ( v28 < v29 );
  }
  v18 = v26[0];
  v19 = 0;
  v20 = v29 <= 0;
  *a4 = *(_DWORD *)v26[0];
  if ( !v20 )
  {
    do
      sub_102AB210(v27, a2, *(_BYTE **)(v18 + 4 * v19++), v26, v30, (int)v33, a3);
    while ( v19 < v29 );
  }
  v21 = *(_BYTE *)(a2 + 20) == 0;
  sub_1011A810(v26);
  return v21;
}
