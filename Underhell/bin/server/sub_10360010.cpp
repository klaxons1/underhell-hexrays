_DWORD *__thiscall sub_10360010(_DWORD *this, int *a2)
{
  char **v3; // ecx
  char *v4; // eax
  _DWORD *result; // eax

  v3 = (char **)(a2 + 2);
  if ( a2[6] == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460((int)v3);
  }
  result = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, *a2, a2[1], 0);
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
    this[1047] = *result;
  }
  else
  {
    this[1047] = -1;
  }
  return result;
}
