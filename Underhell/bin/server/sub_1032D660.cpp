double __thiscall sub_1032D660(void *this)
{
  double result; // st7

  if ( *((_BYTE *)this + 3776) )
    return 60.0;
  if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 296))(this)
    && sub_100BE950((int)this, *((_DWORD *)this + 227), *((_DWORD *)this + 547)) )
  {
    return 15.0;
  }
  switch ( *((_DWORD *)this + 593) )
  {
    case 1:
    case 6:
      result = 25.0;
      break;
    case 0xB:
      return 15.0;
    case 0x11:
    case 0x12:
    case 0x40:
    case 0x41:
      result = 120.0;
      break;
    case 0x2B:
    case 0x2C:
      result = 100.0;
      break;
    default:
      result = 90.0;
      break;
  }
  return result;
}
