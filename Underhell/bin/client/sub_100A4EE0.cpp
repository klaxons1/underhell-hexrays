double __thiscall sub_100A4EE0(int this, float a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 16);
  if ( v2 )
  {
    if ( v2 != 1 )
      return -1.0;
    if ( a2 < (double)*(float *)(this + 4) )
    {
      if ( a2 > (double)*(float *)this )
        return sub_10049180(a2, *(float *)this, *(float *)(this + 4), *(float *)(this + 8), *(float *)(this + 12));
      return *(float *)(this + 8);
    }
    return *(float *)(this + 12);
  }
  if ( a2 >= (double)*(float *)(this + 4) )
    return *(float *)(this + 12);
  if ( a2 <= (double)*(float *)this )
    return *(float *)(this + 8);
  return sub_100145F0(a2, *(float *)this, *(float *)(this + 4), *(float *)(this + 8), *(float *)(this + 12));
}
