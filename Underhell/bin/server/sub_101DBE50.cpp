char __usercall sub_101DBE50@<al>(int a1@<edi>, int a2@<esi>, char *a3, int a4, int a5, int a6)
{
  int v6; // ebx
  int v8; // ebx
  const char *v9; // eax
  void (__thiscall *v10)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)); // edx
  char *v11; // esi
  const char *v12; // eax
  _DWORD v13[399]; // [esp+4h] [ebp-644h] BYREF
  _BYTE v14[7]; // [esp+640h] [ebp-8h] BYREF
  char v15; // [esp+647h] [ebp-1h]

  v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 16))(dword_106B31F0, a5);
  if ( !v6 )
    return 0;
  v15 = 0;
  memset(a3, 0, 0x63Cu);
  qmemcpy(a3 + 1552, &unk_105046B8, 0x2Cu);
  v8 = (*(int (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_106BAFF0 + 152))(
         dword_106BAFF0,
         *(_DWORD *)(v6 + 8),
         a1,
         a2);
  while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
  {
    v9 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
    if ( !_stricmp(v9, "solid") )
    {
      memset(v13, 0, sizeof(v13));
      v10 = *(void (__thiscall **)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)))(*(_DWORD *)v8 + 12);
      qmemcpy(&v13[388], &unk_105046B8, 0x2Cu);
      v10(v8, v13, &off_1063AFBC);
      if ( a6 < 0 || v13[0] == a6 )
      {
        v11 = a3;
        v15 = 1;
        sub_101DAEB0(a3, (int)v13);
        goto LABEL_11;
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 36))(v8);
    }
  }
  v11 = a3;
LABEL_11:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0, v8);
  v11[1592] = 1;
  *((_DWORD *)v11 + 395) = a4;
  v12 = *(const char **)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a4 + 28))(a4, v14);
  if ( !v12 )
    v12 = String;
  *((_DWORD *)v11 + 394) = v12;
  return v15;
}
