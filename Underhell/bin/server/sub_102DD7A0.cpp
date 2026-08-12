bool __thiscall sub_102DD7A0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  bool result; // al

  v1 = this[878];
  result = 0;
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (this[878] & 0xFFF) + 1];
    if ( v2[1] == v1 >> 12 )
    {
      if ( *v2 )
        return 1;
    }
  }
  return result;
}
