int __thiscall sub_1025B010(_DWORD *this, int a2)
{
  void *v3; // ecx
  int result; // eax

  v3 = (void *)this[75];
  if ( v3 )
  {
    sub_1022AF00(v3);
    result = a2;
  }
  this[75] = a2;
  return result;
}
