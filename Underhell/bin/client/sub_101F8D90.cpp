const char *__thiscall sub_101F8D90(_DWORD *this)
{
  int v1; // eax

  v1 = this[16];
  if ( v1 )
    return (const char *)sub_1022CF00(v1 + 552);
  else
    return Locale;
}
