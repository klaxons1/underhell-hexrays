char __thiscall sub_102F4330(_DWORD *this, int a2)
{
  int v2; // eax

  v2 = sub_10039AE0(this, a2, 0);
  if ( v2 > 270 )
  {
    switch ( v2 )
    {
      case 273:
      case 275:
      case 282:
      case 283:
      case 284:
      case 285:
      case 286:
      case 287:
      case 364:
        return 1;
      default:
        return 0;
    }
  }
  if ( v2 != 270 )
  {
    if ( v2 > 69 )
    {
      if ( v2 != 265 )
        return 0;
    }
    else if ( v2 != 69 && v2 != 5 && (v2 <= 18 || v2 > 20) )
    {
      return 0;
    }
  }
  return 1;
}
