char *__thiscall sub_1014C140(char *this, int a2)
{
  char *v2; // esi
  char *result; // eax
  unsigned int v4; // edx
  _DWORD *v5; // ecx

  v2 = &this[40 * (unsigned __int8)sub_1014C050(a2)];
  result = (char *)*((_DWORD *)v2 + 9);
  if ( result == v2 )
    return 0;
LABEL_2:
  v4 = 32;
  v5 = result;
  while ( v4 >= 4 )
  {
    if ( *(_DWORD *)((char *)v5 + a2 - (_DWORD)result) != *v5 )
    {
      result = (char *)*((_DWORD *)result + 9);
      if ( result != v2 )
        goto LABEL_2;
      return 0;
    }
    v4 -= 4;
    ++v5;
  }
  return result;
}
