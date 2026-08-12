double __thiscall sub_10346680(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx

  v1 = this[911];
  if ( v1 != -1 && (v2 = &off_1061BE18[4 * (this[911] & 0xFFF) + 1], v2[1] == v1 >> 12) && *v2 )
    return 180.0;
  else
    return 60.0;
}
