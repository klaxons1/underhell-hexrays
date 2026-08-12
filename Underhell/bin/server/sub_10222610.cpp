const void **__thiscall sub_10222610(const void **this, int *a2)
{
  int v2; // edi
  const void *v4; // eax
  char *v5; // ecx
  int v6; // eax
  int i; // eax
  int v8; // ecx
  char *v9; // edx

  v2 = a2[3];
  this[3] = 0;
  if ( v2 )
  {
    v4 = this[1];
    if ( v2 > (int)v4 )
      sub_10226330(v2 - (_DWORD)v4);
    this[3] = (char *)this[3] + v2;
    v5 = (char *)*this;
    v6 = (int)this[3] - v2;
    this[4] = *this;
    if ( v6 > 0 && v2 > 0 )
      memcpy(&v5[8 * v2], v5, 8 * v6);
  }
  for ( i = 0; i < v2; ++i )
  {
    v8 = *a2;
    v9 = (char *)*this;
    *(_DWORD *)&v9[8 * i] = *(_DWORD *)(*a2 + 8 * i);
    *(_DWORD *)&v9[8 * i + 4] = *(_DWORD *)(v8 + 8 * i + 4);
  }
  return this;
}
