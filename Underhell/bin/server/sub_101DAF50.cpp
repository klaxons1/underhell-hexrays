char __cdecl sub_101DAF50(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // edx
  int v6; // ebx
  const char *v7; // eax
  void (__thiscall *v8)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)); // edx
  _DWORD *v9; // esi
  int v10; // ecx
  const char *v11; // eax
  _DWORD v13[399]; // [esp+Ch] [ebp-640h] BYREF
  char v14; // [esp+64Bh] [ebp-1h]

  v4 = a1;
  v14 = 0;
  memset(a1, 0, 0x63Cu);
  v5 = a3;
  qmemcpy(v4 + 388, &unk_105046B8, 0x2Cu);
  v6 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106BAFF0 + 152))(dword_106BAFF0, *(_DWORD *)(v5 + 8));
  while ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
  {
    v7 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
    if ( !_stricmp(v7, "solid") )
    {
      memset(v13, 0, sizeof(v13));
      v8 = *(void (__thiscall **)(int, _DWORD *, int (__stdcall ***)(int, char *, char *)))(*(_DWORD *)v6 + 12);
      qmemcpy(&v13[388], &unk_105046B8, 0x2Cu);
      v8(v6, v13, &off_1063AFBC);
      if ( a4 < 0 || v13[0] == a4 )
      {
        v9 = a1;
        v14 = 1;
        sub_101DAEB0(a1, (int)v13);
        goto LABEL_9;
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v6);
    }
  }
  v9 = a1;
LABEL_9:
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0, v6);
  v10 = a2;
  *((_BYTE *)v9 + 1592) = 1;
  v9[395] = v10;
  v11 = *(const char **)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v10 + 28))(v10, &a1);
  if ( !v11 )
    v11 = String;
  v9[394] = v11;
  return v14;
}
