int __thiscall sub_101B3A00(float *this, float *a2)
{
  int v2; // esi
  int v3; // edx
  float *i; // ecx

  v2 = *((_DWORD *)this + 188);
  v3 = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = this + 70; *(i - 2) != *a2 || *(i - 1) != a2[1] || *i != a2[2]; i += 5 )
  {
    if ( ++v3 >= v2 )
      return -1;
  }
  return v3;
}
