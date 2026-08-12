double __thiscall sub_10090C40(void *this, float a2)
{
  double result; // st7
  double v4; // st7
  bool v5; // c0
  bool v6; // c3

  if ( sub_100737B0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 2600) + 4) + 1676)) > a2 )
    return sub_100737B0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 2600) + 4) + 1676));
  v4 = flt_104A3400[sub_10023500()];
  v5 = a2 < v4;
  v6 = a2 == v4;
  result = a2;
  if ( !v5 && !v6 )
    return flt_104A3400[sub_10023500()];
  return result;
}
