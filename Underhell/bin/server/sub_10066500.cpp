const char *__thiscall sub_10066500(int this, int a2)
{
  const char *result; // eax

  if ( a2 < 0 )
    return String;
  if ( a2 >= *(__int16 *)(this + 18) )
    return String;
  result = (const char *)(*(_DWORD *)(this + 4) + 80 * (__int16)a2 + 10);
  if ( *(_DWORD *)(this + 4) + 80 * (__int16)a2 == -10 )
    return String;
  return result;
}
