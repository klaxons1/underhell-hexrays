void *__thiscall sub_100DD8F0(_DWORD *this, int a2)
{
  char **v3; // ecx
  char *v4; // eax
  void *result; // eax

  v3 = (char **)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) == 2 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = (char *)String;
  }
  else
  {
    v4 = (char *)sub_1010D460(v3);
  }
  result = (void *)sub_100DB0C0(this, v4);
  if ( result != (void *)-1 )
  {
    if ( this[44] - (int)result - 1 > 0 )
      result = memcpy(
                 (void *)(this[41] + 12 * (_DWORD)result),
                 (const void *)(this[41] + 12 * (_DWORD)result + 12),
                 12 * (this[44] - (_DWORD)result - 1));
    --this[44];
  }
  return result;
}
