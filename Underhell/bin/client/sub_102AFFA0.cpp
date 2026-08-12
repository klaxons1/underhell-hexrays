BOOL __cdecl sub_102AFFA0(int a1, _BYTE *a2)
{
  int v2; // esi
  int v3; // eax
  _BYTE *v4; // ecx
  char v6; // al
  _BYTE *v7; // edi
  char v8; // al
  char v9; // al
  char v10; // al
  int v11; // [esp-18h] [ebp-2Ch]
  int v12; // [esp+8h] [ebp-Ch] BYREF
  int v13; // [esp+Ch] [ebp-8h] BYREF
  int v14; // [esp+10h] [ebp-4h] BYREF

  v2 = a1;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    v11 = a1;
    a1 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 255;
    v3 = sub_1022F5B0(v11, "%d %d %d %d", &a1, &v14, &v13, &v12);
    v4 = a2;
    *a2 = a1;
    v4[1] = v14;
    v4[2] = v13;
    v4[3] = v12;
    return v3 == 4 && !*(_BYTE *)(v2 + 20);
  }
  else
  {
    if ( sub_1022E380(a1, 1) )
    {
      v6 = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
      ++*(_DWORD *)(v2 + 12);
    }
    else
    {
      v6 = 0;
    }
    v7 = a2;
    *a2 = v6;
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    {
      HIBYTE(a1) = 0;
      sub_1022F5B0(v2, "%u", (char *)&a1 + 3);
      v8 = HIBYTE(a1);
    }
    else if ( sub_1022E380(v2, 1) )
    {
      v8 = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
      ++*(_DWORD *)(v2 + 12);
    }
    else
    {
      v8 = 0;
    }
    v7[1] = v8;
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    {
      HIBYTE(a1) = 0;
      sub_1022F5B0(v2, "%u", (char *)&a1 + 3);
      v9 = HIBYTE(a1);
    }
    else if ( sub_1022E380(v2, 1) )
    {
      v9 = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
      ++*(_DWORD *)(v2 + 12);
    }
    else
    {
      v9 = 0;
    }
    v7[2] = v9;
    if ( (*(_BYTE *)(v2 + 21) & 1) != 0 )
    {
      HIBYTE(a1) = 0;
      sub_1022F5B0(v2, "%u", (char *)&a1 + 3);
      v7[3] = HIBYTE(a1);
      return *(_BYTE *)(v2 + 20) == 0;
    }
    else
    {
      if ( sub_1022E380(v2, 1) )
      {
        v10 = *(_BYTE *)(*(_DWORD *)(v2 + 12) - *(_DWORD *)(v2 + 32) + *(_DWORD *)v2);
        ++*(_DWORD *)(v2 + 12);
        v7[3] = v10;
      }
      else
      {
        v7[3] = 0;
      }
      return *(_BYTE *)(v2 + 20) == 0;
    }
  }
}
