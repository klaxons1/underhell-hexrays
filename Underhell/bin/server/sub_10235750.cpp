int __thiscall sub_10235750(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // ecx

  v1 = this[13];
  if ( v1 != -1 && (v2 = &off_1061BE18[4 * (this[13] & 0xFFF) + 1], v2[1] == v1 >> 12) && (v3 = *v2) != 0 )
    return v3 + 12;
  else
    return 0;
}
