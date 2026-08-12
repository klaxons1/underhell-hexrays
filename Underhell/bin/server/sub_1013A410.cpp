void __thiscall sub_1013A410(_DWORD *this, int a2)
{
  int *v2; // eax

  v2 = (int *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 24) != 2 )
  {
    a2 = 0;
    v2 = &a2;
  }
  this[206] = *v2;
  this[207] = -1;
  sub_1013A160(this);
}
