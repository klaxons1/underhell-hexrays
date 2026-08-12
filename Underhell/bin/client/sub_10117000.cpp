const char *__thiscall sub_10117000(_DWORD *this, int a2)
{
  int v2; // eax
  const char *result; // eax

  v2 = this[6];
  if ( a2 < 0 || a2 >= *(_DWORD *)(v2 + 16) )
    return "<<illegal>>";
  result = *(const char **)(*(_DWORD *)(v2 + 20) + 4 * a2);
  if ( !result )
    return Locale;
  return result;
}
