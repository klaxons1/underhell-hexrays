int __thiscall sub_100D0290(_DWORD *this)
{
  int v2; // edi

  v2 = sub_100DA1F0();
  if ( !(unsigned __int8)sub_100D9B10(this) && (this[62] & 2) == 0 )
    return v2 | 0x210;
  return v2;
}
