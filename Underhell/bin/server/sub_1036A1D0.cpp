double __thiscall sub_1036A1D0(_DWORD *this)
{
  int v1; // eax
  double result; // st7

  v1 = this[593];
  if ( v1 == dword_106E80E8 )
    return 30.0;
  switch ( v1 )
  {
    case 6:
    case 11:
      result = 10.0;
      break;
    default:
      return 30.0;
  }
  return result;
}
