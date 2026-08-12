int __thiscall sub_10126C90(_DWORD *this, int a2)
{
  int v3; // ecx
  int v5; // eax

  v3 = this[19];
  if ( !v3 )
    return 0;
  if ( !this[13] )
    return (int)&this[12 * a2] + v3;
  v5 = sub_101289A0(this[13]);
  if ( v5 )
    return this[19] + v5 + 48 * a2;
  else
    return 0;
}
