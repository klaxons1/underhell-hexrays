char *__thiscall sub_100D8590(_DWORD *this, int a2)
{
  char **v2; // eax
  char *result; // eax

  v2 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = (char **)&a2;
  }
  result = *v2;
  this[57] = result;
  if ( result && (result = (char *)sub_1012BF20(0, result, 0, 0, 0, 0)) != 0 )
  {
    result = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)result + 8))(result);
    this[58] = *(_DWORD *)result;
  }
  else
  {
    this[58] = -1;
  }
  return result;
}
