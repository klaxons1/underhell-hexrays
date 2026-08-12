int (*__usercall sub_101C2470@<eax>(int a1@<eax>))()
{
  int (*result)(); // eax

  switch ( a1 )
  {
    case 0:
      result = sub_101C03E0;
      break;
    case 1:
      result = sub_101C08E0;
      break;
    case 2:
      result = sub_101C0400;
      break;
    case 3:
      result = (int (*)())sub_101C0440;
      break;
    case 5:
      result = (int (*)())sub_101C0480;
      break;
    case 6:
      result = (int (*)())sub_101C0510;
      break;
    case 8:
      result = (int (*)())sub_101C05B0;
      break;
    case 9:
      result = (int (*)())sub_101C05E0;
      break;
    case 10:
      result = (int (*)())sub_101C0630;
      break;
    case 11:
      result = (int (*)())sub_101C0680;
      break;
    case 12:
      result = (int (*)())sub_101C0B80;
      break;
    case 16:
      result = (int (*)())sub_101C06C0;
      break;
    case 17:
      result = (int (*)())sub_101C0700;
      break;
    case 18:
      result = (int (*)())sub_101C0770;
      break;
    case 19:
      result = (int (*)())sub_101C0840;
      break;
    case 21:
      result = sub_101C07D0;
      break;
    case 22:
      result = (int (*)())sub_101C08B0;
      break;
    case 23:
      result = sub_101C03E0;
      break;
    case 26:
      result = sub_101C03E0;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
