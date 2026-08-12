bool __cdecl sub_102AC780(int a1, int a2)
{
  int *v2; // esi
  int v3; // edi
  int v4; // ebp
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  _DWORD *v11; // eax

  v2 = (int *)a2;
  v3 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  if ( (*(_BYTE *)(a1 + 21) & 1) != 0 )
  {
    sub_1022E840((_DWORD *)a1);
    if ( *(_BYTE *)(a1 + 20) )
    {
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v6 = v2[3];
        v7 = v2[1];
        if ( v6 + 1 > v7 )
          sub_1010AFF0(v2, v6 - v7 + 1);
        ++v2[3];
        v8 = *v2;
        v9 = v2[3] - v6 - 1;
        v10 = v2[3] - v6 == 1;
        v2[4] = *v2;
        if ( v9 >= 0 && !v10 )
          memcpy((void *)(v8 + 4 * v6 + 4), (const void *)(v8 + 4 * v6), 4 * v9);
        v11 = (_DWORD *)(4 * v6 + *v2);
        if ( v11 )
          *v11 = 0;
        if ( !(unsigned __int8)sub_102AFFA0(a1, 4 * v6 + *v2) )
          break;
        sub_1022E840((_DWORD *)a1);
        if ( *(_BYTE *)(a1 + 20) )
          return 1;
      }
      return 0;
    }
  }
  else
  {
    sub_10096130((_DWORD *)a1, &a2);
    v4 = a2;
    if ( a2 && (sub_102AB9D0(v2, a2), v4 > 0) )
    {
      while ( 1 )
      {
        sub_102ABF90(v2, v2[3]);
        if ( !(unsigned __int8)sub_102AFFA0(a1, *v2 + 4 * v3) )
          break;
        if ( ++v3 >= v4 )
          return *(_BYTE *)(a1 + 20) == 0;
      }
      return 0;
    }
    else
    {
      return *(_BYTE *)(a1 + 20) == 0;
    }
  }
}
