bool __thiscall sub_10027D40(_DWORD *this, int a2)
{
  int v3; // eax
  bool result; // al
  unsigned int v5; // ecx

  v3 = sub_100D7680(a2);
  result = 0;
  if ( !v3 || (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 1488))(v3, this) )
  {
    v5 = this[733];
    if ( v5 == -1
      || off_1061BE18[4 * (this[733] & 0xFFF) + 2] != v5 >> 12
      || !off_1061BE18[4 * (this[733] & 0xFFF) + 1]
      || (unsigned __int8)sub_1013D760(this, a2) )
    {
      return 1;
    }
  }
  return result;
}
