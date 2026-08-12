_DWORD *__thiscall sub_1022ACC0(_DWORD *this, char *Str, float a3)
{
  _DWORD *result; // eax

  result = sub_1022A6A0(this, Str, 1);
  if ( result )
  {
    *((_BYTE *)result + 16) = 3;
    *((float *)result + 3) = a3;
  }
  return result;
}
