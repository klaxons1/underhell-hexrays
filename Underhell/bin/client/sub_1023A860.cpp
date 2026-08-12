_BYTE *__stdcall sub_1023A860(int a1, _DWORD *a2, int a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  _BYTE *result; // eax
  _BYTE *v8; // ebp
  char **v9; // esi
  int v10; // eax
  _DWORD *v11; // ebx
  _DWORD *v12; // edi
  _BYTE *v13; // eax
  int (__thiscall *v14)(_BYTE *, int *, _BYTE *, _DWORD); // edx
  int v15; // [esp-4h] [ebp-14h]

  v3 = a1;
  v4 = dword_1047CA7C;
  v5 = *(_DWORD *)dword_1047CA7C;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
  result = (_BYTE *)(*(int (__thiscall **)(int, int))(v5 + 32))(v4, v6);
  v8 = result;
  if ( result )
  {
    v15 = v3;
    v9 = (char **)a3;
    v10 = (*(int (__cdecl **)(int))(a3 + 20))(v15);
    v11 = a2;
    v12 = (_DWORD *)v10;
    v13 = (_BYTE *)sub_1022B4C0(a2, *v9, (int)Locale);
    if ( v13 && *v13 )
    {
      v14 = *(int (__thiscall **)(_BYTE *, int *, _BYTE *, _DWORD))(*(_DWORD *)v8 + 20);
      a1 = 0;
      result = *(_BYTE **)v14(v8, &a1, v13, 0);
      *v12 = result;
    }
    else
    {
      result = sub_1022AA10(v11, &a1, *v9);
      *v12 = *(_DWORD *)result;
    }
  }
  return result;
}
