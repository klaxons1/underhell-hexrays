int __thiscall sub_101CB2C0(_DWORD *this, int a2, int a3)
{
  int v3; // eax
  _DWORD *v4; // edx

  v3 = 0;
  if ( (int)this[283] > 0 )
  {
    v4 = this + 289;
    do
    {
      if ( v3 < a3 )
        *(_DWORD *)(a2 + 4 * v3) = *v4;
      ++v3;
      v4 += 6;
    }
    while ( v3 < this[283] );
  }
  return this[283];
}
