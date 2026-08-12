void __thiscall sub_1026F3A0(_DWORD *this, _DWORD *a2)
{
  void *v3; // ecx

  v3 = (void *)this[99];
  if ( v3 )
  {
    sub_1022AF00(v3);
    this[99] = 0;
  }
  if ( a2 )
    this[99] = sub_1022AD00(a2);
}
