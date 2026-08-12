int __thiscall sub_101280C0(_DWORD *this, int a2)
{
  int v2; // edx
  int v4; // edi
  int v5; // eax
  char *v6; // ecx
  int v7; // eax
  int i; // eax

  v2 = a2;
  if ( a2 )
  {
    this[1] = a2;
    v4 = *(_DWORD *)(a2 + 100);
    this[5] = 0;
    if ( v4 )
    {
      v5 = this[3];
      if ( v4 > v5 )
      {
        sub_1010AFF0(this + 2, v4 - v5);
        v2 = a2;
      }
      this[5] += v4;
      v6 = (char *)this[2];
      v7 = this[5] - v4;
      this[6] = v6;
      if ( v7 > 0 && v4 > 0 )
      {
        memcpy(&v6[4 * v4], v6, 4 * v7);
        v2 = a2;
      }
    }
    for ( i = 0; i < this[5]; ++i )
      *(_DWORD *)(this[2] + 4 * i) = 0;
    return v2;
  }
  else
  {
    this[1] = 0;
    return 0;
  }
}
