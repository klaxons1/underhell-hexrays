_BYTE *__stdcall sub_10238490(int a1, _DWORD *a2, int a3)
{
  int *v3; // ebx
  int v4; // edi
  _BYTE *result; // eax
  _BYTE *v6; // esi

  v3 = (int *)(*(int (__cdecl **)(int))(a3 + 20))(a1);
  v4 = -1;
  result = (_BYTE *)sub_1022B4C0(a2, *(char **)a3, (int)Locale);
  v6 = result;
  if ( result && *result )
  {
    v4 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)dword_1047CA6C + 112))(dword_1047CA6C, result);
    if ( v4 == -1 )
      v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    result = (_BYTE *)(*(int (__thiscall **)(int, int, _BYTE *, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 120))(
                        dword_1047CA6C,
                        v4,
                        v6,
                        0,
                        1);
  }
  *v3 = v4;
  return result;
}
