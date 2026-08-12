int **__thiscall sub_1042C820(int **this, int *a2)
{
  int **result; // eax
  int *v3; // ecx

  result = this;
  v3 = a2;
  if ( !a2 )
    v3 = &dword_106FE558;
  *result = v3;
  if ( v3 )
    result[1] = v3 - 6;
  else
    result[1] = 0;
  return result;
}
