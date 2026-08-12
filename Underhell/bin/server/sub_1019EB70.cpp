void __thiscall sub_1019EB70(_DWORD *this)
{
  int v1; // edx
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // eax

  if ( this[7] != -1 )
  {
    v1 = this[3];
    if ( v1 != -1 )
    {
      do
      {
        v2 = 32 * v1 + *this;
        v3 = *(_DWORD *)(v2 + 28);
        *(_DWORD *)(v2 + 24) = v1;
        if ( v3 == -1 )
          v4 = this[5];
        else
          v4 = v3;
        *(_DWORD *)(v2 + 28) = v4;
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
