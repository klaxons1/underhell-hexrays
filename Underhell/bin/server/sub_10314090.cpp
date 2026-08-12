const char *__thiscall sub_10314090(_DWORD *this, int a2)
{
  const char **v3; // ecx
  const char *result; // eax

  v3 = (const char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    result = *v3;
    if ( !*v3 )
    {
LABEL_7:
      result = 0;
      goto LABEL_8;
    }
  }
  else
  {
    result = sub_1010D460((int)v3);
  }
  if ( !result || !*result )
    goto LABEL_7;
LABEL_8:
  this[1066] = result;
  return result;
}
