char __thiscall sub_100424B0(void *this)
{
  _DWORD *v1; // eax
  char result; // al

  v1 = (_DWORD *)sub_10043EC0(this);
  if ( !v1 )
    return 1;
  switch ( *v1 )
  {
    case 0xC:
    case 0xD:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x79:
    case 0x81:
    case 0x86:
      return 1;
    default:
      result = 0;
      break;
  }
  return result;
}
