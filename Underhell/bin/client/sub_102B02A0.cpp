bool __cdecl sub_102B02A0(int a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // eax
  void **v4; // ebx
  int v5; // edi
  void *v6; // ebx
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  char v13; // cl
  char v14; // al
  int v15; // [esp-4h] [ebp-18h]
  int v16; // [esp+Ch] [ebp-8h] BYREF
  char v17; // [esp+13h] [ebp-1h] BYREF

  v2 = a1;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    v8 = sub_102B0150(a1, &v16);
    if ( v8 < 0 )
      return 0;
    sub_1022E840((_DWORD *)v2);
    v15 = v8;
    v9 = a2;
    v10 = 0;
    sub_1022CF10(a2, v15);
    if ( *(_DWORD *)(v2 + 12) < v16 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
        {
          HIBYTE(a1) = 0;
          sub_1022F5B0(v2, "%c", (char *)&a1 + 3);
        }
        else if ( sub_1022E380(v2, 1) )
        {
          v11 = *(_DWORD *)(v2 + 12) + 1;
          HIBYTE(a1) = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
          *(_DWORD *)(v2 + 12) = v11;
        }
        else
        {
          HIBYTE(a1) = 0;
        }
        if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
        {
          v17 = 0;
          sub_1022F5B0(v2, "%c", &v17);
        }
        else if ( sub_1022E380(v2, 1) )
        {
          v12 = *(_DWORD *)(v2 + 12) + 1;
          v17 = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
          *(_DWORD *)(v2 + 12) = v12;
        }
        else
        {
          v17 = 0;
        }
        if ( (unsigned int)(SHIBYTE(a1) - 48) > 9 )
        {
          if ( (unsigned int)(SHIBYTE(a1) - 65) > 5 )
            v13 = (unsigned int)(SHIBYTE(a1) - 97) > 5 ? -1 : HIBYTE(a1) - 87;
          else
            v13 = HIBYTE(a1) - 55;
        }
        else
        {
          v13 = HIBYTE(a1) - 48;
        }
        if ( (unsigned int)(v17 - 48) > 9 )
        {
          if ( (unsigned int)(v17 - 65) > 5 )
            v14 = (unsigned int)(v17 - 97) > 5 ? -1 : v17 - 87;
          else
            v14 = v17 - 55;
        }
        else
        {
          v14 = v17 - 48;
        }
        if ( v13 == -1 || v14 == -1 )
          break;
        *(_BYTE *)(v10 + *v9) = v14 | (16 * v13);
        ++v10;
        sub_1022E840((_DWORD *)v2);
        if ( *(_DWORD *)(v2 + 12) >= v16 )
          return 1;
      }
      return 0;
    }
    return 1;
  }
  else
  {
    v3 = sub_10097990((_DWORD *)a1);
    v4 = (void **)a2;
    v5 = v3;
    sub_1022CF10(a2, v3);
    if ( v4[3] )
      sub_1022E7D0((_BYTE *)v2, *v4, (size_t)v4[3]);
    v6 = v4[3];
    if ( (void *)v5 != v6 )
    {
      sub_1022E490(v2, 1, v5 - (_DWORD)v6);
      return 0;
    }
    return *(_BYTE *)(v2 + 20) == 0;
  }
}
