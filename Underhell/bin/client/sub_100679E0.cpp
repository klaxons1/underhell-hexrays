int __thiscall sub_100679E0(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // ecx
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // eax
  int result; // eax

  v2 = this[315];
  sub_100C2A80(0, v2, 0);
  if ( v2 > 0 )
  {
    v3 = 0;
    do
    {
      v4 = this[312];
      v5 = v3;
      *v3 = *(_DWORD *)((char *)v3 + v4);
      v3[1] = *(_DWORD *)((char *)v3 + v4 + 4);
      v6 = *(_DWORD *)((char *)v3 + v4 + 8);
      v3 += 3;
      --v2;
      v5[2] = v6;
    }
    while ( v2 );
  }
  result = 0;
  this[315] = 0;
  return result;
}
