double __thiscall sub_10369F80(_DWORD *this)
{
  double result; // st7
  _DWORD *v2; // eax

  switch ( this[593] )
  {
    case 6:
    case 0xB:
      result = 20.0;
      break;
    case 0x11:
      v2 = (_DWORD *)sub_10043EC0(this);
      if ( v2 && *v2 == 161 )
        goto LABEL_3;
      goto LABEL_6;
    case 0x2B:
    case 0x2C:
LABEL_3:
      result = 15.0;
      break;
    default:
LABEL_6:
      result = 30.0;
      break;
  }
  return result;
}
