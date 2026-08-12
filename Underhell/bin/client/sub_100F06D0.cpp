_DWORD *__userpurge sub_100F06D0@<eax>(int a1@<ecx>, int a2@<esi>, int a3, int a4)
{
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  int v9; // [esp+14h] [ebp+Ch]

  sub_100EFAE0(*(_DWORD *)(a1 + 144), a4, a2, a4);
  if ( a3 > 96 || *(_DWORD *)(dword_10435904 + 48) && sub_10115FB0() % 10 <= 6 )
    return 0;
  v9 = *(_DWORD *)(a1 + 144);
  if ( *(int *)(v9 + 4) >= 4096 )
    return 0;
  v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 96);
  if ( !v7 )
    return 0;
  ++*(_DWORD *)(v9 + 4);
  v8 = sub_100EFCA0((int *)a1, a4) + 1;
  *v7 = v8;
  v7[1] = v8[1];
  v8[1] = v7;
  *(_DWORD *)v7[1] = v7;
  if ( a4 )
    v7[2] = a4;
  else
    v7[2] = *(_DWORD *)(a1 + 144) + 208;
  ++*(_WORD *)(a1 + 132);
  return v7;
}
