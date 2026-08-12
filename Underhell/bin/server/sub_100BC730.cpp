void __thiscall sub_100BC730(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // et2
  int v6; // edi
  int v7; // eax

  v2 = this[7];
  if ( v2 > 0 )
  {
    v3 = this[22];
    if ( v3 >= this[8] )
    {
      v5 = v3 % v2;
      v4 = v3 / v2;
      v6 = v4;
      if ( !v5 && v4 > this[23] )
      {
        sub_100BC510(this);
        v7 = this[26];
        this[23] = v6;
        *(_BYTE *)(v7 + 456) = 1;
      }
    }
  }
}
