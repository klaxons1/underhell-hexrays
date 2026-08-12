int __thiscall sub_101DD680(_DWORD *this)
{
  int v2; // esi

  v2 = sub_100DA1F0(this) | 0x40000000;
  if ( (this[62] & 0x80000) != 0 || (this[62] & 0x2000) == 0 && (unsigned __int8)sub_101E48B0((int)this, 35.0, 128.0) )
    return v2 | 0x10;
  return v2;
}
