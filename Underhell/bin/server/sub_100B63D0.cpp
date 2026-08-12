void __thiscall sub_100B63D0(_DWORD *this, float *a2)
{
  unsigned int v2; // edx
  int *v3; // eax
  unsigned int v4; // edx

  v2 = this[911];
  if ( v2 != -1
    && (v3 = &off_1061BE18[4 * (this[911] & 0xFFF) + 1], v4 = v2 >> 12, off_1061BE18[4 * (this[911] & 0xFFF) + 2] == v4)
    && *v3 )
  {
    if ( off_1061BE18[4 * (this[911] & 0xFFF) + 2] == v4 )
      sub_100B5730(*v3, a2);
    else
      sub_100B5730(0, a2);
  }
  else
  {
    *a2 = 0.0;
    a2[1] = 0.0;
    a2[2] = 1.0;
  }
}
