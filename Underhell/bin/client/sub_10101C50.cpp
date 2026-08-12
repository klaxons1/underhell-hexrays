int __usercall sub_10101C50@<eax>(int a1@<ebx>, int a2@<esi>, _DWORD *a3, int a4, int a5, int a6, char *a7)
{
  _WORD *v7; // eax
  _WORD *v8; // edi
  char *v9; // esi
  int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // edi
  char v18[1596]; // [esp+4h] [ebp-63Ch] BYREF

  v7 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, a4);
  v8 = v7;
  if ( !v7 || (*v7 & 0x7FFF) == 0 )
    return 0;
  v9 = a7;
  if ( !a7 )
  {
    v9 = v18;
    if ( !sub_10101B20(v18, a3, (int)v7, -1) )
      return 0;
  }
  v11 = -1;
  if ( v9[1028] )
    v11 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_10436258 + 12))(dword_10436258, v9 + 1028);
  v12 = (*(int (__thiscall **)(int, _DWORD, int, int, int, char *))(*(_DWORD *)dword_10436254 + 28))(
          dword_10436254,
          *(_DWORD *)(*((_DWORD *)v8 + 1) + 4 * *(_DWORD *)v9),
          v11,
          a5,
          a6,
          v9 + 1552);
  if ( v12 )
  {
    v13 = *(_DWORD *)dword_10413178;
    v14 = (*(int (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_10413178 + 4))(dword_10413178, a4, a1, a2);
    if ( (*(int (__thiscall **)(int, int))(v13 + 36))(dword_10413178, v14) == 1 )
    {
      v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 108))(dword_10413178, a4);
      v16 = v15;
      if ( (v15 & 0x4030) != 0 )
        v16 = v15 | 1;
      if ( v16 != (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 160))(v12) )
      {
        if ( v16 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 164))(v12, v16);
          (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 104))(v12);
        }
      }
    }
    (*(void (__thiscall **)(void *, int, int))(*(_DWORD *)off_103E1DD0 + 8))(off_103E1DD0, v12, a4);
  }
  return v12;
}
