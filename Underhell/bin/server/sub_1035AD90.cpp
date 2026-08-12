double __thiscall sub_1035AD90(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx

  v1 = this[429];
  if ( v1 == -1 )
    return sub_101DC8E0(0);
  v2 = &off_1061BE18[4 * (this[429] & 0xFFF) + 1];
  if ( v2[1] != v1 >> 12 )
    return sub_101DC8E0(0);
  else
    return sub_101DC8E0((float *)*v2);
}
