int __thiscall sub_10270440(_DWORD *this, int a2)
{
  void *v3; // ecx
  int result; // eax

  v3 = (void *)this[112];
  if ( v3 )
  {
    sub_1022AF00(v3);
    result = a2;
  }
  this[112] = a2;
  return result;
}
