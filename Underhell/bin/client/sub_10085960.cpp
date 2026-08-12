char __thiscall sub_10085960(int this, int a2, int a3, char a4)
{
  int (__thiscall *v4)(int); // edx
  unsigned __int16 v6; // ax
  __int16 v7; // ax
  bool v9; // zf
  bool v10; // cl
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int i; // esi
  _BYTE v19[471]; // [esp+Ch] [ebp-1D8h] BYREF
  char v20; // [esp+1E3h] [ebp-1h]

  v4 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 28);
  v20 = 0;
  v6 = v4(a2);
  if ( v6 == 0xFFFF )
    goto LABEL_17;
  v7 = *(_WORD *)(168 * v6 + *(_DWORD *)(this + 36) + 8);
  if ( (v7 & 4) != 0 )
  {
    if ( !*(_BYTE *)(this + 208) )
      return 0;
    if ( (*(_BYTE *)(this + 208) != 0) == -1 )
      goto LABEL_17;
  }
  else if ( (v7 & 0x10) == 0 )
  {
    return 0;
  }
  if ( a4 )
  {
    v11 = *(_DWORD *)dword_10413178;
    v12 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
    v13 = (*(int (__thiscall **)(int, int))(v11 + 36))(dword_10413178, v12);
    v10 = v13 == 3;
    v9 = v13 == 1;
  }
  else
  {
    v10 = (*(_BYTE *)(a3 + 8) & 0x40) == 0;
    v9 = (*(_BYTE *)(a3 + 8) & 0x40) != 0;
  }
  if ( v10 )
  {
    v14 = *(_DWORD *)dword_10413160;
    v15 = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a2 + 156))(a2, v19, 0);
    v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 44))(a2, v15);
    v17 = (*(int (__thiscall **)(int, int, int))(v14 + 44))(dword_10413160, a2, v16);
    if ( v17 )
      (*(void (__thiscall **)(int, int, _BYTE *, int))(*(_DWORD *)dword_10413160 + 48))(dword_10413160, a2, v19, v17);
    goto LABEL_16;
  }
  if ( v9 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10413168 + 128))(dword_10413168, a2);
LABEL_16:
    v20 = 1;
  }
LABEL_17:
  for ( i = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 116))(a2);
        i;
        i = (*(int (__thiscall **)(int))(*(_DWORD *)i + 120))(i) )
  {
    if ( (unsigned __int8)sub_10085960(i, a3, 1) )
      v20 = 1;
  }
  return v20;
}
