unsigned int __thiscall sub_1034B8F0(_DWORD *this, int a2)
{
  int *v2; // eax

  v2 = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = &a2;
  }
  this[1009] = *v2;
  return sub_1034B030((int)this, 1);
}
