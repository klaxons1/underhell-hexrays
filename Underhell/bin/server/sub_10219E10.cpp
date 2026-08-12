_DWORD *__stdcall sub_10219E10(_DWORD *a1)
{
  _DWORD *result; // eax
  int i; // edi
  _DWORD *v3; // esi
  int v4; // [esp+8h] [ebp-4h] BYREF

  result = (_DWORD *)dword_106B31C8;
  for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
  {
    result = (_DWORD *)sub_1025FB50(i);
    v3 = result;
    if ( result )
    {
      result = (_DWORD *)sub_100D87F0(result);
      if ( result != a1 )
      {
        v4 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v3[6]);
        result = (_DWORD *)sub_1023E0F0(&v4);
      }
    }
  }
  return result;
}
