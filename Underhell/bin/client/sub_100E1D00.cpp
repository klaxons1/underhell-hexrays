const char *__thiscall sub_100E1D00(_DWORD *this, int a2, int a3)
{
  int v3; // ecx
  bool v4; // cc
  _DWORD *v5; // ecx

  if ( a2 >= 0
    && a2 < this[6]
    && a3 >= 0
    && (v3 = this[3], v4 = a3 < *(_DWORD *)(v3 + 20 * a2 + 12), v5 = (_DWORD *)(v3 + 20 * a2), v4) )
  {
    return (const char *)(*v5 + (a3 << 9));
  }
  else
  {
    return Locale;
  }
}
