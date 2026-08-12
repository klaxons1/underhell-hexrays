const void **__thiscall sub_100CEED0(const void **this, _DWORD *a2)
{
  int v2; // edi
  const void *v4; // eax
  char *v5; // ecx
  int v6; // eax
  int i; // eax

  v2 = a2[3];
  this[3] = 0;
  if ( v2 )
  {
    v4 = this[1];
    if ( v2 > (int)v4 )
      sub_1010AFF0(v2 - (_DWORD)v4);
    this[3] = (char *)this[3] + v2;
    v5 = (char *)*this;
    v6 = (int)this[3] - v2;
    this[4] = *this;
    if ( v6 > 0 && v2 > 0 )
      memcpy(&v5[4 * v2], v5, 4 * v6);
  }
  for ( i = 0; i < v2; ++i )
    *((_DWORD *)*this + i) = *(_DWORD *)(*a2 + 4 * i);
  return this;
}
