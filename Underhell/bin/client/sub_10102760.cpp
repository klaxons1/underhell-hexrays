char __usercall sub_10102760@<al>(int a1@<edi>, char *a2, _DWORD *a3, int a4, int a5)
{
  int v5; // ebx
  int v7; // ebx
  const char *v8; // eax
  void (__thiscall *v9)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)); // edx
  char *v10; // esi
  _DWORD v11[399]; // [esp+4h] [ebp-640h] BYREF
  char v12; // [esp+643h] [ebp-1h]

  v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_10413178 + 16))(dword_10413178, a4);
  if ( !v5 )
    return 0;
  v12 = 0;
  memset(a2, 0, 0x63Cu);
  qmemcpy(a2 + 1552, &unk_1030E968, 0x2Cu);
  v7 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_10436250 + 152))(
         dword_10436250,
         *(_DWORD *)(v5 + 8),
         a1);
  while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
  {
    v8 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 4))(v7);
    if ( !_stricmp(v8, "solid") )
    {
      memset(v11, 0, sizeof(v11));
      v9 = *(void (__thiscall **)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)))(*(_DWORD *)v7 + 12);
      qmemcpy(&v11[388], &unk_1030E968, 0x2Cu);
      v9(v7, v11, &off_103E2154);
      if ( a5 < 0 || v11[0] == a5 )
      {
        v10 = a2;
        v12 = 1;
        sub_10101A80(a2, (int)v11);
        goto LABEL_11;
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 36))(v7);
    }
  }
  v10 = a2;
LABEL_11:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10436250 + 156))(dword_10436250, v7);
  v10[1592] = 1;
  *((_DWORD *)v10 + 395) = a3;
  *((_DWORD *)v10 + 394) = sub_10034E90(a3);
  return v12;
}
