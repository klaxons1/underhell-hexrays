int __thiscall sub_102AD010(void *this)
{
  int result; // eax

  result = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( (unsigned int)(result - 15) <= 0xD )
    {
      result -= 15;
      switch ( result )
      {
        case 0:
          result = sub_1011A810(*((int **)this + 2));
          goto LABEL_12;
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
          result = sub_1011A810(*((int **)this + 2));
          *(_DWORD *)this = 0;
          break;
        case 4:
          result = sub_100CF530(*((int **)this + 2));
          *(_DWORD *)this = 0;
          break;
        case 5:
          result = sub_102ACE90(*((int **)this + 2));
          *(_DWORD *)this = 0;
          break;
        default:
          goto LABEL_12;
      }
    }
    else if ( result == 5 )
    {
      result = sub_100CE4D0(*((int **)this + 2));
      *(_DWORD *)this = 0;
    }
    else if ( result == 6 )
    {
      result = sub_102AC0D0(*((int **)this + 2));
      *(_DWORD *)this = 0;
    }
    else
    {
LABEL_12:
      *(_DWORD *)this = 0;
    }
  }
  return result;
}
