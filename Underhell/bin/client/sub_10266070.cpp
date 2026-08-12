void __usercall sub_10266070(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st0>, int a5)
{
  int v6; // edi
  int v7; // eax
  char v8; // dl
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // ebx
  int v12; // ebp
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // edi
  int v17; // ebx
  int v18; // ebp
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // edx
  int v23; // eax
  _DWORD *v24; // ecx
  int v25; // edx
  int v26; // [esp+Ch] [ebp-4h]
  int v27; // [esp+Ch] [ebp-4h]
  int retaddr; // [esp+10h] [ebp+0h]

  *((_BYTE *)a1 + 376) &= ~1u;
  if ( a1[84] > 1 )
  {
    v6 = (*(int (__thiscall **)(int *, int, int))(*a1 + 1036))(a1, a3, a2);
    (*(void (__thiscall **)(int *))(*a1 + 1032))(a1);
    retaddr = -1;
    if ( a1[102] != -1 && a1[100] > 0 )
    {
      v7 = sub_100B41A0(a1 + 81, a1 + 102);
      if ( v7 >= v6 && v7 <= v6 + (int)a4 )
        retaddr = v7 - v6;
    }
    v8 = *((_BYTE *)a1 + 376);
    byte_103FD4BD = (v8 & 4) != 0;
    v9 = a1[86];
    dword_10480434 = (int)a1;
    dword_10480440 = sub_102614C0;
    byte_103FD4BC = (v8 & 2) != 0;
    dword_10480444 = sub_102614C0;
    if ( v9 >= 0 && v9 < a1[68] )
    {
      v10 = (_DWORD *)(a1[54] + 72 * *(unsigned __int8 *)(a1[65] + v9) + 28);
      v11 = sub_10265260(v10);
      a5 = sub_10265490(v10);
      v12 = 0;
      v26 = 1;
      while ( 1 )
      {
        v13 = 24 * v11 + v10[1];
        v14 = *(_DWORD *)(v13 + 16);
        if ( *(_BYTE *)(v14 + 48) )
        {
          if ( !v12 || v12 != *(_DWORD *)(v13 + 20) )
            ++v26;
          *(_DWORD *)(v14 + 52) = v26;
          v12 = *(_DWORD *)(24 * v11 + v10[1] + 20);
        }
        if ( v11 == a5 )
          break;
        v11 = sub_10265300(v10, v11);
      }
    }
    v15 = a1[87];
    if ( v15 >= 0 && v15 < a1[68] )
    {
      v16 = (_DWORD *)(a1[54] + 72 * *(unsigned __int8 *)(a1[65] + v15) + 28);
      v17 = sub_10265260(v16);
      a5 = sub_10265490(v16);
      v27 = 1;
      v18 = 0;
      while ( 1 )
      {
        v19 = v16[1];
        v20 = *(_DWORD *)(v19 + 24 * v17 + 16);
        v21 = 24 * v17 + v19;
        if ( *(_BYTE *)(v20 + 48) )
        {
          if ( !v18 || v18 != *(_DWORD *)(v21 + 20) )
            ++v27;
          *(_DWORD *)(v20 + 56) = v27;
          v18 = *(_DWORD *)(v16[1] + 24 * v17 + 20);
        }
        if ( v17 == a5 )
          break;
        v17 = sub_10265300(v16, v17);
      }
    }
    qsort((void *)a1[81], a1[84], 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_10261360);
    if ( retaddr != -1 )
    {
      v22 = a1[84];
      v23 = 0;
      if ( v22 <= 0 )
      {
LABEL_32:
        v23 = -1;
      }
      else
      {
        v24 = (_DWORD *)a1[81];
        while ( *v24 != a1[102] )
        {
          ++v23;
          ++v24;
          if ( v23 >= v22 )
            goto LABEL_32;
        }
      }
      v25 = *(_DWORD *)a1[92];
      if ( v23 <= retaddr )
        (*(void (__stdcall **)(_DWORD))(v25 + 768))(0);
      else
        (*(void (__stdcall **)(int))(v25 + 768))(v23 - retaddr);
    }
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*a1 + 244))(a1, 0, 0);
    (*(void (__thiscall **)(int *, int))(*a1 + 16))(a1, a5);
  }
}
