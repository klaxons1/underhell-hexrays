char *__thiscall sub_1042CFE0(_BYTE *this, char *a2, _DWORD *a3)
{
  char *result; // eax

  result = a2;
  LOBYTE(result) = this[*a2 + 2320];
  *a3 = (_BYTE)result != 0;
  return result;
}
