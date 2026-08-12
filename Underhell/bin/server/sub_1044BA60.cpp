bool __cdecl sub_1044BA60(int a1, int *a2)
{
  int v2; // edi
  int v3; // ebx
  int v4; // ebp
  int i; // edi
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  int v12; // edi
  _DWORD *v13; // ecx
  int v14; // [esp+8h] [ebp-4h] BYREF

  sub_1044B650(a2);
  v2 = a1;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    sub_1042D6E0((_DWORD *)a1);
    if ( *(_BYTE *)(a1 + 20) )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v7 = a2[3];
        v8 = a2[1];
        if ( v7 + 1 > v8 )
          sub_1044ADB0(a2, v7 - v8 + 1);
        ++a2[3];
        v9 = *a2;
        v10 = a2[3] - v7 - 1;
        v11 = a2[3] - v7 == 1;
        a2[4] = *a2;
        if ( v10 >= 0 && !v11 )
          memcpy((void *)(16 * v7 + v9 + 16), (const void *)(16 * v7 + v9), 16 * v10);
        v12 = 16 * v7;
        v13 = (_DWORD *)(v12 + *a2);
        if ( v13 )
          sub_10431150(v13, 0, 0);
        if ( !(unsigned __int8)sub_1044F210(a1, v12 + *a2) )
          break;
        sub_1042D6E0((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 20) )
          return 1;
      }
      return 0;
    }
  }
  else
  {
    sub_100878C0((_DWORD *)a1, &v14);
    v3 = v14;
    if ( v14 && (sub_1044B060(a2, v14), v4 = 0, v3 > 0) )
    {
      for ( i = 0; ; i += 16 )
      {
        sub_1044B5B0(a2, a2[3]);
        if ( !(unsigned __int8)sub_1044F210(a1, i + *a2) )
          break;
        if ( ++v4 >= v3 )
        {
          v2 = a1;
          return *(_BYTE *)(v2 + 20) == 0;
        }
      }
      return 0;
    }
    else
    {
      return *(_BYTE *)(v2 + 20) == 0;
    }
  }
}
