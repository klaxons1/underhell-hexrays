void __thiscall sub_100EA770(_DWORD *this, int a2)
{
  int v2; // edx
  int v3; // esi
  int v4; // ebx
  _DWORD *i; // eax
  int v6; // ebx
  int v7; // ecx
  int v8; // ebx

  v2 = this[5];
  v3 = 0;
  if ( v2 > 0 )
  {
    v4 = this[2];
    for ( i = (_DWORD *)(v4 + 20); *i != a2; i += 6 )
    {
      if ( ++v3 >= v2 )
        return;
    }
    if ( v3 != -1 )
    {
      *(_DWORD *)(v4 + 24 * v3 + 20) = 0;
      v6 = this[2];
      v7 = *(_DWORD *)(v6 + 24 * v3 + 20);
      v8 = 24 * v3 + v6;
      if ( v7 )
        sub_100F1860(v7);
      sub_1011A810(v8);
      if ( this[5] - v3 - 1 > 0 )
        memcpy((void *)(this[2] + 24 * v3), (const void *)(this[2] + 24 * v3 + 24), 24 * (this[5] - v3 - 1));
      --this[5];
    }
  }
}
