int __fastcall sub_10190B00(int a1, int a2, int a3)
{
  int v4; // eax
  int v5; // edi
  _DWORD *v6; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int (__thiscall **v12)(int, int, int, int, _DWORD, int); // [esp+8h] [ebp-4h]

  v4 = *(_DWORD *)(a1 + 1956);
  v5 = 0;
  if ( v4 <= 0 || v4 > *((_DWORD *)off_103DC81C + 5) )
    return 0;
  if ( !*(_DWORD *)(a1 + 1936) && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 36))(a1) )
    sub_10026520(a1 - 4);
  v6 = *(_DWORD **)(a1 + 1936);
  if ( !v6 || !*v6 || !*(_BYTE *)(a1 + 116) )
    return 0;
  v8 = sub_1007A6A0(off_103DCD78, *(_DWORD *)(a1 + 1956));
  if ( __RTDynamicCast(
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&C_BasePlayer `RTTI Type Descriptor',
         0) )
  {
    v12 = *(int (__thiscall ***)(int, int, int, int, _DWORD, int))dword_10413160;
    v9 = (*(int (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(a1 - 4) + 40))(
           a1 - 4,
           *(_DWORD *)(a1 + 1192),
           *(_DWORD *)(a1 + 1196),
           *(_DWORD *)(a1 + 1200),
           0,
           0);
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(a1 - 4) + 36))(a1 - 4, v9);
    v11 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 36))(a1, v10);
    return (*v12)(dword_10413160, a3, a1 != 4 ? a1 : 0, 0xFFFF, *(_DWORD *)(a1 + 1956), v11);
  }
  return v5;
}
