char *__thiscall sub_10263480(_DWORD *this, char *Str, unsigned __int8 a3)
{
  char *result; // eax
  int v4; // esi

  result = Str;
  if ( (int)Str >= 0 && (int)Str < this[73] && (int)Str <= this[79] )
  {
    v4 = 12 * (_DWORD)Str + this[72];
    if ( *(char **)(v4 + 4) != Str || *(char **)(v4 + 8) == Str )
      return (char *)sub_1022ACA0(**(_DWORD ***)(12 * (_DWORD)Str + this[72]), "disabled", a3);
  }
  return result;
}
