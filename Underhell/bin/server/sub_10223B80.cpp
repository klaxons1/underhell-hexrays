int __stdcall sub_10223B80(int a1, int a2, int a3)
{
  int result; // eax

  result = sub_1041CAA0(a1);
  if ( !(_BYTE)result )
  {
    result = sub_104185B0(a3);
    if ( result )
      return sub_1041E210(1, 0.0, 0.0);
  }
  return result;
}
