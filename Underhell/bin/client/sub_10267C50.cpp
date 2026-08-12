void __userpurge sub_10267C50(int a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4, int a5, unsigned __int8 a6)
{
  unsigned __int8 v7; // bl
  int v8; // esi
  unsigned __int8 v9; // cl
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // edi
  int v13; // esi
  int v14; // ebx

  if ( a4 >= 0 && a4 < *(_DWORD *)(a1 + 272) )
  {
    v7 = *(_BYTE *)(a4 + *(_DWORD *)(a1 + 260));
    if ( *(_DWORD *)(a1 + 272) - a4 - 1 > 0 )
      memcpy(
        (void *)(*(_DWORD *)(a1 + 260) + a4),
        (const void *)(*(_DWORD *)(a1 + 260) + a4 + 1),
        *(_DWORD *)(a1 + 272) - a4 - 1);
    --*(_DWORD *)(a1 + 272);
    v8 = *(_DWORD *)(a1 + 252);
    v9 = 0;
    if ( v8 > 0 )
    {
      v10 = *(_DWORD *)(a1 + 240);
      v11 = 0;
      while ( *(_BYTE *)(v10 + v11) != v7 )
      {
        v11 = ++v9;
        if ( v9 >= v8 )
          goto LABEL_11;
      }
      *(_BYTE *)(v9 + v10) = -1;
    }
LABEL_11:
    v12 = (_DWORD *)(a1 + 216);
    v13 = 72 * v7;
    sub_102651D0((_DWORD *)(*(_DWORD *)(a1 + 216) + v13 + 28));
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v13 + *v12) + 300))(*(_DWORD *)(v13 + *v12), a2, a3);
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(*v12 + v13 + 16) + 300))(*(_DWORD *)(*v12 + v13 + 16));
    sub_10265F70((int *)(a1 + 216), a6);
    v14 = v13 + *(_DWORD *)(a1 + 216);
    sub_102651D0((_DWORD *)(v14 + 28));
    *(_DWORD *)(v14 + 52) = -1;
    if ( *(int *)(v14 + 40) >= 0 )
    {
      if ( *(_DWORD *)(v14 + 32) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v14 + 32));
        *(_DWORD *)(v14 + 32) = 0;
      }
      *(_DWORD *)(v14 + 36) = 0;
    }
    *(_DWORD *)(v14 + 56) = -1;
    if ( *(int *)(v14 + 40) >= 0 )
    {
      if ( *(_DWORD *)(v14 + 32) )
      {
        (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)(v14 + 32));
        *(_DWORD *)(v14 + 32) = 0;
      }
      *(_DWORD *)(v14 + 36) = 0;
    }
    *(_BYTE *)(v14 + 69) = *(_BYTE *)(a1 + 230);
    *(_BYTE *)(a1 + 230) = a6;
    sub_10261E70((_DWORD *)a1);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)a1 + 244))(a1, 0, 0);
  }
}
