_DWORD *__cdecl sub_100D8850(int a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  _DWORD *result; // eax
  int v5; // [esp-8h] [ebp-Ch]

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31D0 + 16))(dword_106B31D0, a1, 1);
  if ( v1 == -1 )
    return 0;
  v2 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 4))(dword_106B31F0, v1);
  if ( !v2 )
    return 0;
  if ( sub_10184390(144) )
  {
    v5 = dword_10700AC8;
    v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31F0 + 112))(dword_106B31F0, v2);
    result = (_DWORD *)sub_10246610(v3, v5);
  }
  else
  {
    result = 0;
  }
  if ( !*result )
    return 0;
  return result;
}
