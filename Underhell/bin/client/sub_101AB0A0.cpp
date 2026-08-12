char __thiscall sub_101AB0A0(_BYTE *this, int a2, int a3)
{
  int v3; // eax
  int v4; // edx

  v3 = a2;
  v4 = a3;
  if ( a2 > a3 )
  {
    v3 = a3;
    v4 = a2;
  }
  if ( v3 != 8 )
  {
LABEL_6:
    if ( v4 == 8 )
    {
      v4 = 5;
    }
    else if ( v4 == 18 && v3 != 5 )
    {
      v4 = 9;
    }
    if ( this[12] && v3 == 3 )
    {
      if ( v4 == 5 )
        goto LABEL_14;
    }
    else if ( v3 == 23 )
    {
      if ( v4 == 23 )
        goto LABEL_14;
      if ( v4 == 32 )
      {
        LOBYTE(v3) = 0;
        return v3;
      }
    }
    else
    {
      if ( (v3 == 11 || v3 == 5 || v3 == 13) && v4 == 23 )
        goto LABEL_14;
      if ( v3 == 1 )
      {
        if ( v4 == 23 )
          return v3;
      }
      else if ( v3 == 25 )
      {
        if ( v4 == 25 )
        {
          LOBYTE(v3) = 0;
          return v3;
        }
      }
      else if ( v3 == 22 && v4 == 22 )
      {
        goto LABEL_37;
      }
    }
    if ( v4 == 26 && (v3 == 5 || v3 == 9 || v3 == 26) )
      goto LABEL_14;
    switch ( v3 )
    {
      case 27:
        if ( v4 == 27 )
        {
LABEL_37:
          LOBYTE(v3) = 0;
          return v3;
        }
        break;
      case 28:
        if ( v4 == 28 )
        {
          LOBYTE(v3) = 0;
          return v3;
        }
        break;
      case 29:
        if ( v4 == 29 )
        {
          LOBYTE(v3) = 0;
          return v3;
        }
        break;
      default:
        if ( v3 == 11 && (unsigned int)(v4 - 24) <= 7 )
          goto LABEL_14;
        break;
    }
    if ( v4 == 18 && v3 == 5 )
      goto LABEL_14;
    if ( v3 == 19 )
    {
      if ( v4 == 19 )
      {
        LOBYTE(v3) = 0;
        return v3;
      }
    }
    else if ( v3 == 21 && v4 == 21 )
    {
      goto LABEL_14;
    }
    LOBYTE(v3) = sub_100ADF10(v3, v4);
    return v3;
  }
  if ( v4 != 21 )
  {
    v3 = 5;
    goto LABEL_6;
  }
LABEL_14:
  LOBYTE(v3) = 0;
  return v3;
}
