int __thiscall sub_101FCC60(int *this)
{
  int result; // eax
  int v3; // edi
  int i; // esi
  int v5; // edx
  int v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // ecx

  result = this[35];
  if ( result )
  {
    v3 = *(_DWORD *)(result + 88);
    for ( i = 0; i < v3; ++i )
      sub_101FC0D0(*(_DWORD *)(*(_DWORD *)(this[35] + 76) + 4 * i));
    v5 = this[35];
    v6 = *(unsigned __int16 *)(v5 + 38);
    v7 = 0;
    if ( *(_WORD *)(v5 + 38) )
    {
      do
      {
        v8 = this[35];
        if ( v7 == 0xFFFF || v7 >= *(unsigned __int16 *)(v8 + 38) )
          v9 = 0;
        else
          v9 = *(_DWORD *)(*(_DWORD *)v8 + 4 * (unsigned __int16)v7);
        sub_101FC0D0(v9);
        ++v7;
      }
      while ( v7 < v6 );
    }
    sub_101FAF70(this + 36);
    return sub_10230D40(this + 41);
  }
  return result;
}
