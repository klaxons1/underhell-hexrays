bool __thiscall sub_102AB210(void *this, int a2, _BYTE *a3, _DWORD *a4, int a5, int a6, int a7)
{
  _BYTE *v7; // edi
  int v8; // eax
  char *v9; // edi
  int v10; // eax
  int v11; // ebp
  _DWORD *v12; // edi
  int v13; // ebp
  int *v14; // edi
  bool v15; // cc
  bool v16; // bl
  char v18; // [esp+13h] [ebp-411h] BYREF
  int v19; // [esp+14h] [ebp-410h] BYREF
  int v20; // [esp+18h] [ebp-40Ch] BYREF
  int v21; // [esp+1Ch] [ebp-408h]
  void *v22; // [esp+20h] [ebp-404h]
  char v23[1024]; // [esp+24h] [ebp-400h] BYREF

  v7 = a3;
  v22 = this;
  sub_102AA700(a3, 1);
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v20 = 0;
    sub_1022F5B0(a2, "%d", &v20);
  }
  else
  {
    sub_10096130((_DWORD *)a2, &v20);
  }
  v21 = 0;
  if ( v20 <= 0 )
  {
LABEL_29:
    v16 = *(_BYTE *)(a2 + 20) == 0;
    if ( v7 )
      sub_102AA700(v7, 0);
    return v16;
  }
  while ( !a7 )
  {
    sub_1022F000(a2, v23, 1024);
    v9 = v23;
LABEL_16:
    if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
    {
      v18 = 0;
      sub_1022F5B0(a2, "%c", &v18);
    }
    else if ( sub_1022E380(a2, 1) )
    {
      v10 = *(_DWORD *)(a2 + 12) + 1;
      v18 = *(_BYTE *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
      *(_DWORD *)(a2 + 12) = v10;
    }
    else
    {
      v18 = 0;
    }
    v11 = v18;
    v12 = sub_102AAB50((int *)a3, v9);
    if ( !v12 )
    {
      if ( a3 )
        sub_102AA700(a3, 0);
      return 0;
    }
    if ( v11 == 1 )
    {
      v13 = sub_102AB010(a2, a4);
      sub_102AD1A0(1);
      v14 = (int *)v12[2];
      if ( v14 )
        *v14 = v13;
    }
    else if ( v11 == 15 )
    {
      sub_102AB080(a2, v12, a4);
    }
    else
    {
      sub_102AD1D0(v11, a2);
    }
    v15 = ++v21 < v20;
    v7 = a3;
    if ( !v15 )
      goto LABEL_29;
  }
  if ( (*(_BYTE *)(a2 + 21) & 1) != 0 )
  {
    v19 = 0;
    sub_1022F5B0(a2, "%d", &v19);
  }
  else if ( sub_1022E380(a2, 2) )
  {
    if ( (*(_BYTE *)(a2 + 44) & 1) != 0 )
    {
      sub_1011C410(
        (_BYTE *)(a2 + 44),
        (char *)&v19,
        (char *)(*(_DWORD *)(a2 + 12) + *(_DWORD *)a2 - *(_DWORD *)(a2 + 32)),
        1);
      *(_DWORD *)(a2 + 12) += 2;
    }
    else
    {
      v8 = *(unsigned __int16 *)(*(_DWORD *)a2 - *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 12));
      *(_DWORD *)(a2 + 12) += 2;
      v19 = v8;
    }
  }
  else
  {
    v19 = 0;
  }
  if ( (__int16)v19 < a5 )
  {
    v9 = (char *)(a7 + *(_DWORD *)(a6 + 4 * (__int16)v19));
    goto LABEL_16;
  }
  if ( v7 )
    sub_102AA700(v7, 0);
  return 0;
}
