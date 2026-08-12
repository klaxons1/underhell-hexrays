_DWORD *__thiscall sub_1042AFD0(_DWORD *this, char *Str, int a3)
{
  _DWORD *result; // eax

  result = sub_1042ACB0(this, Str, 1);
  if ( result )
  {
    result[3] = a3;
    *((_BYTE *)result + 16) = 2;
  }
  return result;
}
