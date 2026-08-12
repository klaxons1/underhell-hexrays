int __thiscall sub_1010B490(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = this[3];
  if ( v2 )
  {
    result = sub_1022AF00(v2);
    this[3] = 0;
  }
  return result;
}
