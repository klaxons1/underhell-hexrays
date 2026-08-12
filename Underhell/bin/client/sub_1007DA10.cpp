void __thiscall sub_1007DA10(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // eax

  if ( this[7] != -1 )
  {
    v1 = this[3];
    if ( v1 != 0xFFFF )
    {
      do
      {
        v2 = *this + 36 * v1;
        v3 = *(unsigned __int16 *)(v2 + 34);
        *(_WORD *)(v2 + 32) = v1;
        if ( v3 == 0xFFFF )
          v4 = this[5];
        else
          LOWORD(v4) = v3;
        *(_WORD *)(v2 + 34) = v4;
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
