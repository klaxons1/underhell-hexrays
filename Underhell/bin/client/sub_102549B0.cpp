wchar_t *__thiscall sub_102549B0(int this, wchar_t *Destination, int a3)
{
  signed int v3; // esi
  wchar_t *result; // eax

  v3 = *(_DWORD *)(this + 232);
  if ( v3 )
  {
    if ( v3 >= a3 / 2 - 1 )
      v3 = a3 / 2 - 1;
    result = wcsncpy(Destination, *(const wchar_t **)(this + 220), v3);
    Destination[v3] = 0;
  }
  else
  {
    *Destination = 0;
  }
  return result;
}
