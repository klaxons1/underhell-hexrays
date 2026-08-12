bool __thiscall sub_10033900(_DWORD *this)
{
  bool result; // al
  int v3; // edi
  bool v4; // bl
  bool v5; // zf

  if ( !this[497] || (this[27] & 0x20) != 0 )
    return 0;
  v3 = sub_1000BAC0(this - 1);
  if ( !v3 )
    return 1;
  v4 = this[505] == 2;
  if ( v3 == sub_100422D0() )
    return v4;
  v5 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 504))(v3) == 0;
  result = v4;
  if ( v5 )
    return 1;
  return result;
}
