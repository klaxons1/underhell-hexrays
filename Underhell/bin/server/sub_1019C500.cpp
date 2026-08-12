void __thiscall sub_1019C500(float *this, float *a2)
{
  long double v2; // st7
  long double v3; // st6
  int v4; // edi
  int v5; // edx
  int v6; // eax
  int v7; // eax

  if ( (this[5] + this[2]) * 0.5 >= a2[9] )
  {
    *((_DWORD *)this + 12) = a2;
  }
  else
  {
    v2 = a2[7] - *this;
    v3 = a2[8] - this[1];
    if ( fabs(v3) >= fabs(v2) )
    {
      if ( v3 <= 0.0 )
        v4 = 0;
      else
        v4 = 2;
    }
    else if ( v2 <= 0.0 )
    {
      v4 = 3;
    }
    else
    {
      v4 = 1;
    }
    v5 = *((_DWORD *)this + 13);
    if ( v5 == v4 )
    {
      *((_DWORD *)this + 11) = a2;
    }
    else
    {
      switch ( v5 )
      {
        case 0:
          v6 = 2;
          break;
        case 1:
          v6 = 3;
          break;
        case 3:
          v6 = 1;
          break;
        default:
          v6 = 0;
          break;
      }
      if ( v6 == v4 )
      {
        *((_DWORD *)this + 8) = a2;
      }
      else
      {
        switch ( v5 )
        {
          case 0:
            v7 = 3;
            break;
          case 2:
            v7 = 1;
            break;
          case 3:
            v7 = 2;
            break;
          default:
            v7 = 0;
            break;
        }
        if ( v7 == v4 )
          *((_DWORD *)this + 9) = a2;
        else
          *((_DWORD *)this + 10) = a2;
      }
    }
  }
}
