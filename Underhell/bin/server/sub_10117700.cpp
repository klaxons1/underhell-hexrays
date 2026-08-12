unsigned int __thiscall sub_10117700(_DWORD *this)
{
  unsigned int v1; // esi

  v1 = 0;
  if ( (this[62] & 0x8000) != 0 )
    v1 = 0x80000000;
  return v1 | sub_100DA1F0(this) & 0xFFFFFFFD;
}
