_BYTE *__thiscall sub_1010AF00(_DWORD *this, _BYTE *a2, _BYTE *a3, _DWORD *a4)
{
  _BYTE *result; // eax
  char *v6; // eax

  result = a2;
  this[13] = 0;
  this[14] = a2;
  if ( a2 )
  {
    if ( *a2 )
    {
      result = *(_BYTE **)(dword_10436C5C + 48);
      if ( (int)result >= 0
        && a3 == result
        && ((dword_10436C9C & 0x1000) != 0 || (result = *(_BYTE **)(dword_10436CA4 + 36)) != 0 && *result) )
      {
        if ( (dword_10436C9C & 0x1000) != 0 )
        {
          v6 = "FCVAR_NEVER_AS_STRING";
        }
        else
        {
          v6 = *(char **)(dword_10436CA4 + 36);
          if ( !v6 )
            v6 = (char *)Locale;
        }
        result = (_BYTE *)sub_10109D00(v6, a4);
        this[13] = result;
      }
    }
  }
  return result;
}
