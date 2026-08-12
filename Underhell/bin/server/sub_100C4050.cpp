void __thiscall sub_100C4050(_DWORD *this, char a2, int a3)
{
  int v3; // eax
  _BYTE *v4; // ecx
  int v5; // [esp+4h] [ebp-8h]

  v3 = this[29];
  v4 = this + 29;
  v5 = v3;
  if ( (unsigned __int8)v3 > a3 )
    LOBYTE(v5) = v3 - a2;
  if ( BYTE1(v3) > a3 )
    BYTE1(v5) = BYTE1(v3) - a2;
  if ( BYTE2(v3) > a3 )
    BYTE2(v5) = BYTE2(v3) - a2;
  sub_100C35E0(v4, v5, SBYTE1(v5), SBYTE2(v5));
}
