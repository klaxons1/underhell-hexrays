int __thiscall sub_101F2EE0(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  int v4; // [esp-4h] [ebp-8h]

  v1 = 0;
  if ( (int)this[1] > 0 )
  {
    v2 = 0;
    do
    {
      *(_DWORD *)(v2 + this[2]) = 0;
      *(_DWORD *)(v2 + this[2] + 4) = 0;
      *(_DWORD *)(v2 + this[2] + 8) = 0;
      ++v1;
      v2 += 12;
    }
    while ( v1 < this[1] );
  }
  v4 = this[2];
  *this = 0;
  this[1] = 0;
  return sub_10034930(v4);
}
