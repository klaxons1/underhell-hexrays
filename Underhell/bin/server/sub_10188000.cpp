const char *__stdcall sub_10188000(unsigned int a1)
{
  int *v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // esi
  const char *result; // eax
  bool v9; // zf
  const char *v10; // esi
  _BYTE v11[4]; // [esp+8h] [ebp-4h] BYREF

  if ( a1 != -1 && (v1 = &dword_1069E3E4[4 * (a1 & 0xFFF)], v1[1] == a1 >> 12) && (v2 = *v1) != 0 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 16))(v2);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
  }
  else
  {
    v4 = 0;
  }
  v5 = v4;
  if ( (v4 || (v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0)
    && (v6 = *(_DWORD *)(v5 + 12)) != 0 )
  {
    v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6);
  }
  else
  {
    v7 = 0;
  }
  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v4) )
  {
    if ( v7 && *(_DWORD *)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v7 + 28))(v7, v11) )
    {
      result = *(const char **)(*(int (__thiscall **)(_DWORD *, _BYTE *))(*v7 + 28))(v7, v11);
      v9 = result == 0;
    }
    else
    {
      v10 = (const char *)v7[23];
      v9 = v10 == 0;
      result = v10;
    }
  }
  else
  {
    result = *(const char **)(dword_106B31C8 + 60);
    v9 = result == 0;
  }
  if ( v9 )
    return String;
  return result;
}
