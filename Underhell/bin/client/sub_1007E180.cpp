void __thiscall sub_1007E180(_DWORD *this)
{
  int v1; // edx
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // eax

  if ( this[7] != -1 )
  {
    v1 = this[3];
    if ( v1 != 0xFFFF )
    {
      do
      {
        v2 = 16 * v1 + *this;
        v3 = *(unsigned __int16 *)(v2 + 14);
        *(_WORD *)(v2 + 12) = v1;
        if ( v3 == 0xFFFF )
          v4 = this[5];
        else
          LOWORD(v4) = v3;
        *(_WORD *)(v2 + 14) = v4;
        v1 = v3;
      }
      while ( v3 != 0xFFFF );
    }
    v5 = this[3];
    if ( v5 != 0xFFFF )
      this[5] = v5;
    this[3] = 0xFFFF;
    this[4] = 0xFFFF;
    this[6] = 0;
  }
}
