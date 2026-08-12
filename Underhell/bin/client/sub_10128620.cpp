void __thiscall sub_10128620(int this, char *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  v3 = *(_DWORD *)this;
  *(_BYTE *)(this + 8) = 0;
  if ( v3 )
  {
    sub_10034930(v3);
    *(_DWORD *)this = 0;
  }
  v4 = *(_DWORD *)(this + 24);
  if ( v4 > 0 )
  {
    v5 = 0;
    do
    {
      *(_DWORD *)(*(_DWORD *)(this + 12) + v5 + 12) = 0;
      v5 += 20;
      --v4;
    }
    while ( v4 );
  }
  sub_101282D0((int *)this, a2);
}
