_DWORD *__thiscall sub_1022AB60(_DWORD *this, char *Str, int a3)
{
  _DWORD *result; // eax

  result = sub_1022A6A0(this, Str, 1);
  if ( result )
  {
    *((_BYTE *)result + 16) = 6;
    result[3] = a3;
  }
  return result;
}
