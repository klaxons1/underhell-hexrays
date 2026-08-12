int __thiscall sub_10069910(_DWORD *this, int a2)
{
  int result; // eax
  unsigned int v4; // edx
  int *v5; // ecx
  unsigned int v6; // edx
  const char *v7; // eax
  int v8; // ecx

  result = a2;
  if ( a2 == 2 )
  {
    if ( this[581] == 2 )
    {
      return 10;
    }
    else if ( this[581] == 3 )
    {
      return 16;
    }
  }
  else if ( a2 == 56 )
  {
    v4 = this[672];
    if ( v4 != -1
      && (v5 = &off_1061BE18[4 * (this[672] & 0xFFF) + 1], v6 = v4 >> 12,
                                                           off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v6)
      && *v5 )
    {
      if ( off_1061BE18[4 * (this[672] & 0xFFF) + 2] == v6 )
        v8 = *v5;
      else
        v8 = 0;
      switch ( *(_DWORD *)(v8 + 828) )
      {
        case 0:
        case 4:
          result = 60;
          break;
        case 1:
          result = 57;
          break;
        case 2:
          result = 58;
          break;
        case 3:
          result = 59;
          break;
        case 5:
          result = 61;
          break;
        default:
          return result;
      }
    }
    else
    {
      v7 = (const char *)this[23];
      if ( !v7 )
        v7 = String;
      DevWarning(2, "Script failed for %s\n", v7);
      sub_10033F30(this);
      return 1;
    }
  }
  return result;
}
