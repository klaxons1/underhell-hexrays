_DWORD *__stdcall sub_102AB080(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ebp
  int v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int *v7; // esi
  int v8; // edi
  _DWORD *result; // eax
  int v10; // eax
  bool v11; // zf
  int *v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // [esp-Ch] [ebp-1Ch]

  v3 = a1;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    v4 = 0;
    v17 = a1;
    a1 = 0;
    sub_1022F5B0(v17, "%d", &a1);
  }
  else
  {
    sub_10096130((_DWORD *)a1, &a1);
    v4 = 0;
  }
  v5 = a2;
  if ( *a2 != 15 )
  {
    sub_102AD1A0(15);
    v6 = (_DWORD *)v5[2];
    if ( v6 )
    {
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
    }
  }
  v7 = (int *)v5[2];
  v8 = a1;
  result = (_DWORD *)sub_102AB9D0(a1);
  if ( v8 > 0 )
  {
    a2 = (_DWORD *)v8;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v3 + 21) & 1) != 0 )
      {
        a1 = 0;
        sub_1022F5B0(v3, "%d", &a1);
        v10 = a1;
      }
      else
      {
        if ( !sub_1022E380(v3, 4) )
        {
          v10 = 0;
          a1 = 0;
LABEL_20:
          v11 = *(_DWORD *)(*a3 + 4 * v10) == 0;
          v12 = (int *)(*a3 + 4 * v10);
          if ( !v11 )
            v4 = *v12;
          goto LABEL_22;
        }
        if ( (*(_BYTE *)(v3 + 44) & 1) != 0 )
        {
          sub_1003EE40(
            (_BYTE *)(v3 + 44),
            &a1,
            (char *)(*(_DWORD *)(v3 + 12) + *(_DWORD *)v3 - *(_DWORD *)(v3 + 32)),
            1);
          v10 = a1;
          *(_DWORD *)(v3 + 12) += 4;
        }
        else
        {
          v10 = *(_DWORD *)(*(_DWORD *)v3 - *(_DWORD *)(v3 + 32) + *(_DWORD *)(v3 + 12));
          *(_DWORD *)(v3 + 12) += 4;
          a1 = v10;
        }
      }
      if ( v10 == -2 )
      {
        Warning("Reading externally referenced elements is not supported!\n");
        goto LABEL_22;
      }
      if ( v10 >= 0 )
        goto LABEL_20;
LABEL_22:
      v13 = v7[3];
      v14 = v7[1];
      if ( v13 + 1 > v14 )
        sub_102AA460(v7, v13 - v14 + 1);
      ++v7[3];
      v15 = *v7;
      v16 = v7[3] - v13 - 1;
      v11 = v7[3] - v13 == 1;
      v7[4] = *v7;
      if ( v16 >= 0 && !v11 )
        memcpy((void *)(v15 + 4 * v13 + 4), (const void *)(v15 + 4 * v13), 4 * v16);
      result = (_DWORD *)(*v7 + 4 * v13);
      if ( result )
        *result = v4;
      a2 = (_DWORD *)((char *)a2 - 1);
      if ( !a2 )
        return result;
      v4 = 0;
    }
  }
  return result;
}
