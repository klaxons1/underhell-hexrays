char __cdecl sub_10101B20(char *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // ebx
  const char *v5; // eax
  void (__thiscall *v6)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)); // edx
  char *v7; // esi
  _DWORD v9[399]; // [esp+Ch] [ebp-640h] BYREF
  char v10; // [esp+64Bh] [ebp-1h]

  v10 = 0;
  memset(a1, 0, 0x63Cu);
  qmemcpy(a1 + 1552, &unk_1030E968, 0x2Cu);
  v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10436250 + 152))(dword_10436250, *(_DWORD *)(a3 + 8));
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) )
  {
LABEL_8:
    v7 = a1;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v5 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    if ( !_stricmp(v5, "solid") )
      break;
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 36))(v4);
LABEL_7:
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4) )
      goto LABEL_8;
  }
  memset(v9, 0, sizeof(v9));
  v6 = *(void (__thiscall **)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)))(*(_DWORD *)v4 + 12);
  qmemcpy(&v9[388], &unk_1030E968, 0x2Cu);
  v6(v4, v9, &off_103E2154);
  if ( a4 >= 0 && v9[0] != a4 )
    goto LABEL_7;
  v7 = a1;
  v10 = 1;
  sub_10101A80(a1, (int)v9);
LABEL_9:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436250 + 156))(dword_10436250, v4);
  v7[1592] = 1;
  *((_DWORD *)v7 + 395) = a2;
  *((_DWORD *)v7 + 394) = sub_10034E90(a2);
  return v10;
}
