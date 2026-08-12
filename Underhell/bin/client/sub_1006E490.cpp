void __thiscall sub_1006E490(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // eax

  if ( this[7] != -1 )
  {
    v1 = this[3];
    if ( v1 != -1 )
    {
      do
      {
        v2 = *this + 68 * v1;
        v3 = *(_DWORD *)(v2 + 64);
        *(_DWORD *)(v2 + 60) = v1;
        if ( v3 == -1 )
          v4 = this[5];
        else
          v4 = v3;
        *(_DWORD *)(v2 + 64) = v4;
        v1 = v3;
      }
      while ( v3 != -1 );
    }
    v5 = this[3];
    if ( v5 != -1 )
      this[5] = v5;
    this[3] = -1;
    this[4] = -1;
    this[6] = 0;
  }
}
