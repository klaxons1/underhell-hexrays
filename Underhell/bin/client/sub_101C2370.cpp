int (*__usercall sub_101C2370@<eax>(int a1@<eax>))()
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
      result = (int (*)())sub_101C0920;
      break;
    case 3:
      result = (int (*)())sub_101C0970;
      break;
    case 5:
      result = (int (*)())sub_101C09C0;
      break;
    case 6:
      result = (int (*)())sub_101C0A00;
      break;
    case 8:
      result = (int (*)())sub_101C0A40;
      break;
    case 9:
      result = (int (*)())sub_101C0A80;
      break;
    case 10:
      result = sub_101C0AE0;
      break;
    case 11:
      result = sub_101C0B40;
      break;
    case 12:
      result = (int (*)())sub_101C0B80;
      break;
    case 16:
      result = (int (*)())sub_101C0BC0;
      break;
    case 17:
      result = (int (*)())sub_101C0C10;
      break;
    case 18:
      result = (int (*)())sub_101C0C90;
      break;
    case 19:
      result = sub_101C0D90;
      break;
    case 21:
      result = sub_101C0D00;
      break;
    case 22:
      result = (int (*)())sub_101C0E20;
      break;
    case 23:
      result = sub_101C03E0;
      break;
    case 25:
      result = (int (*)())sub_101C0E60;
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
