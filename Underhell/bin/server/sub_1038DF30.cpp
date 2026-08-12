int __thiscall sub_1038DF30(_DWORD *this, int a2)
{
  int result; // eax

  result = this[64] >> 27;
  if ( (this[64] & 0x8000000) == 0 )
    return sub_100AC410((int)(this + 1290), "METROPOLICE_DIE", -1, 0);
  return result;
}
