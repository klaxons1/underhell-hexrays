_DWORD *__usercall sub_1010ECE0@<eax>(const char *a1@<ebx>, int a2@<esi>, int a3)
{
  int v3; // eax
  _DWORD *result; // eax
  int i; // edi

  if ( *(_DWORD *)a3 == 2 )
  {
    v3 = atoi(*(const char **)(a3 + 1036));
    result = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, v3);
    if ( result
      || (result = (_DWORD *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0)) != 0 )
    {
      result = (_DWORD *)result[3];
      if ( result )
      {
        result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 20))(result);
        if ( result )
          return (_DWORD *)sub_1010EB70(a1, (int)result, a2);
      }
    }
  }
  else
  {
    for ( i = sub_1012BC10(0); i; i = sub_1012BC10(i) )
      sub_1010EB70(a1, i, a2);
    return (_DWORD *)Msg("--- %i links\n", dword_106BA694);
  }
  return result;
}
