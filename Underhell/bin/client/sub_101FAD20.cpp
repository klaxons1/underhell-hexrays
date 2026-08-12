void __thiscall sub_101FAD20(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // edx

  v1 = this[64];
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      v3 = this[61] + v2 + 4;
      v2 += 24;
      --v1;
      *(_DWORD *)(v3 + 12) = 0;
    }
    while ( v1 );
  }
}
