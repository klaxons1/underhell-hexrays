double __thiscall sub_10389450(_DWORD *this)
{
  double result; // st7

  switch ( this[593] )
  {
    case 6:
    case 8:
    case 0xD:
      result = 25.0;
      break;
    case 0xB:
    case 0x6A:
      result = 15.0;
      break;
    case 0x2B:
    case 0x2C:
      result = 120.0;
      break;
    default:
      result = 45.0;
      break;
  }
  return result;
}
