int __thiscall sub_100732A0(const void **this, int a2, int a3)
{
  const void *v4; // eax
  char *v5; // ecx
  int v6; // eax
  int result; // eax

  this[3] = 0;
  if ( a3 )
  {
    v4 = this[1];
    if ( a3 > (int)v4 )
      sub_102ABFC0(a3 - (_DWORD)v4);
    this[3] = (char *)this[3] + a3;
    v5 = (char *)*this;
    v6 = (int)this[3] - a3;
    this[4] = *this;
    if ( v6 > 0 && a3 > 0 )
      memcpy(&v5[4 * a3], v5, 4 * v6);
  }
  for ( result = 0; result < a3; ++result )
    *((_DWORD *)*this + result) = *(_DWORD *)(a2 + 4 * result);
  return result;
}
