wchar_t *__thiscall sub_10254A00(_DWORD *this, wchar_t *Destination, int a3, int a4)
{
  int v4; // edx
  int v5; // edi
  size_t v6; // edi
  int v7; // eax
  int v8; // eax
  wchar_t *result; // eax

  v4 = this[58];
  v5 = a4;
  if ( a4 >= v4 - a3 )
    v5 = this[58] - a3;
  if ( v5 >= 0 )
  {
    v6 = a4;
    if ( a4 >= v4 - a3 )
      v6 = this[58] - a3;
  }
  else
  {
    v6 = 0;
  }
  v7 = this[58];
  if ( v4 >= a3 )
    v7 = a3;
  if ( v7 >= 0 )
  {
    v8 = this[58];
    if ( v4 >= a3 )
      v8 = a3;
  }
  else
  {
    v8 = 0;
  }
  result = wcsncpy(Destination, (const wchar_t *)(this[55] + 2 * v8), v6);
  Destination[v6] = 0;
  return result;
}
