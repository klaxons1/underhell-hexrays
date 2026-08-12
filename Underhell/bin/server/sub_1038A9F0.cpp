int __thiscall sub_1038A9F0(_DWORD *this)
{
  int result; // eax

  result = this[62] >> 21;
  if ( (this[62] & 0x200000) == 0 )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_REFIND_ENEMY", 2, 2);
  return result;
}
