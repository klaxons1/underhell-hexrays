int *__thiscall sub_1022ABA0(_DWORD *this, char *Str, const char *Src)
{
  int *result; // eax
  int *v4; // esi
  const char *v5; // ebx
  unsigned int v6; // kr00_4
  void *v7; // eax

  result = sub_1022A6A0(this, Str, 1);
  v4 = result;
  if ( result )
  {
    sub_10034930(result[1]);
    sub_10034930(v4[2]);
    v5 = Src;
    v4[2] = 0;
    if ( !Src )
      v5 = Locale;
    v6 = strlen(v5);
    v7 = (void *)sub_100DDA40(v6 + 1);
    v4[1] = (int)v7;
    result = (int *)memcpy_0(v7, v5, v6 + 1);
    *((_BYTE *)v4 + 16) = 1;
  }
  return result;
}
