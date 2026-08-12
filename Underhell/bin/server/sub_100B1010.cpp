BOOL __thiscall sub_100B1010(_DWORD *this, int a2)
{
  unsigned int v2; // eax
  int *v3; // ecx

  v2 = this[22];
  if ( v2 == -1 )
    return a2 == 0;
  v3 = &off_1061BE18[4 * (this[22] & 0xFFF) + 1];
  if ( v3[1] != v2 >> 12 )
    return a2 == 0;
  else
    return *v3 == a2;
}
