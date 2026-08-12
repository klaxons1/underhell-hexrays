int __cdecl sub_102DA4D0(int a1)
{
  int result; // eax
  int v3; // esi
  int v4; // edx
  int v5; // edx
  int *v6; // ecx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // [esp-8h] [ebp-Ch]
  int v10; // [esp+Ch] [ebp+8h]

  result = *(_DWORD *)(a1 + 192) >> 5;
  if ( (*(_DWORD *)(a1 + 192) & 0x20) == 0 )
  {
    v3 = dword_106DEA60;
    sub_100C3050(dword_106DEA60, *(float *)&a1);
    sub_100E0970(v3, v4, 5, 0);
    if ( (*(_DWORD *)(a1 + 252) & 0x1000) != 0 )
      sub_100DAFD0(a1);
    sub_100DD660(v3, (float *)(a1 + 476));
    sub_100EAA00((_DWORD *)v3);
    v5 = sub_1025FD10(a1);
    v10 = v5;
    if ( *(_DWORD *)(v3 + 1120) != v5 )
    {
      if ( *(_BYTE *)(v3 + 84) )
      {
        *(_BYTE *)(v3 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v3 + 24);
        if ( v6 )
        {
          sub_100194B0(v6, 1120);
          v5 = v10;
        }
      }
      *(_DWORD *)(v3 + 1120) = v5;
    }
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_100E11A0(v3, (float *)(a1 + 704));
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    sub_1025F370((void *)v3, (float *)(a1 + 580), 0);
    v9 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 8))(a1 + 320);
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 320) + 4))(a1 + 320);
    sub_1025F360((_DWORD *)v3, v7, v9);
    v8 = *(_DWORD *)(v3 + 412);
    if ( v8 == -1 || off_1061BE18[4 * (v8 & 0xFFF) + 2] != v8 >> 12 )
    {
      result = 0;
      dword_106DEA60 = 0;
    }
    else
    {
      result = off_1061BE18[4 * (v8 & 0xFFF) + 1];
      dword_106DEA60 = result;
    }
  }
  return result;
}
