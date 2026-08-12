int __cdecl sub_100F7CF0(int a1)
{
  int result; // eax
  int *v3; // esi
  int *v4; // edi
  int v5; // edx
  int v6; // [esp+4h] [ebp-4h]
  char v7; // [esp+13h] [ebp+Bh]

  result = *(_DWORD *)(a1 + 1132) >> 1;
  if ( (*(_DWORD *)(a1 + 1132) & 2) != 0 )
  {
    if ( dword_10435FF0
      && (result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FF0 + 4))(dword_10435FF0, a1),
          (v6 = result) != 0) )
    {
      v3 = *(int **)(result + 8);
      v7 = byte_103E1B48;
      byte_103E1B48 = 0;
      if ( v3 )
      {
        while ( v3 != (int *)result )
        {
          v4 = (int *)v3[2];
          sub_100F7C50(a1, *v3);
          if ( v3 == (int *)dword_10435F04 )
            dword_10435F04 = v3[2];
          --dword_10435EF8;
          v3[2] = 0;
          v3[3] = 0;
          result = sub_1022FD10(v3);
          v3 = v4;
          if ( !v4 )
            break;
          result = v6;
        }
      }
      v5 = *(_DWORD *)(a1 + 1132) >> 1;
      byte_103E1B48 = v7;
      if ( (v5 & 1) != 0 )
      {
        if ( dword_10435FF0 )
          result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10435FF0 + 12))(dword_10435FF0, a1);
        *(_DWORD *)(a1 + 1132) &= ~2u;
      }
      *(_DWORD *)(a1 + 156) = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 156) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 156) = 0;
  }
  return result;
}
