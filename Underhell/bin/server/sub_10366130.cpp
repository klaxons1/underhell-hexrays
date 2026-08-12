double __thiscall sub_10366130(_DWORD *this)
{
  double result; // st7

  switch ( this[593] )
  {
    case 1:
    case 6:
      result = 25.0;
      break;
    case 0xB:
      result = 160.0;
      break;
    case 0x2B:
    case 0x2C:
      result = 120.0;
      break;
    default:
      result = 20.0;
      break;
  }
  return result;
}
