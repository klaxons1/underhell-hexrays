char __thiscall sub_101E5F30(_DWORD *this)
{
  int v1; // edx
  _DWORD *i; // esi

  v1 = 0;
  for ( i = this + 477;
        *i == -1 || off_1061BE18[4 * (*i & 0xFFF) + 2] != *i >> 12 || !off_1061BE18[4 * (*i & 0xFFF) + 1];
        ++i )
  {
    if ( ++v1 >= 48 )
      return 0;
  }
  return 1;
}
