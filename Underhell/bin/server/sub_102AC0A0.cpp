_DWORD *__thiscall sub_102AC0A0(_DWORD *this, char *String2, int a3, int a4)
{
  char *v4; // eax
  _DWORD *result; // eax

  v4 = String2;
  if ( !String2 )
    v4 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v4, 0, a3, a4, 0);
  if ( result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*result + 8))(result);
    this[250] = *result;
  }
  return result;
}
