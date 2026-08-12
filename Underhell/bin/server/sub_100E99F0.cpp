_DWORD *__thiscall sub_100E99F0(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // edx
  unsigned int v3; // ecx
  int *v4; // edx

  result = this;
  if ( this[77] == -1 )
  {
    v2 = 0;
  }
  else if ( off_1061BE18[4 * (this[77] & 0xFFF) + 2] == this[77] >> 12 )
  {
    v2 = off_1061BE18[4 * (this[77] & 0xFFF) + 1];
  }
  else
  {
    v2 = 0;
  }
  while ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 308);
    result = (_DWORD *)v2;
    if ( v3 == -1 || (v4 = &off_1061BE18[4 * (*(_DWORD *)(v2 + 308) & 0xFFF) + 1], v4[1] != v3 >> 12) )
      v2 = 0;
    else
      v2 = *v4;
  }
  return result;
}
