_BYTE *__cdecl sub_100AE4D0(_BYTE *a1)
{
  _BYTE *result; // eax

  for ( result = a1; *result; ++result )
  {
    switch ( *result )
    {
      case 0xA:
      case 0xD:
      case 0x1A:
      case 0x22:
      case 0x27:
      case 0x3B:
      case 0x5C:
        *result = 32;
        break;
      default:
        continue;
    }
  }
  return result;
}
