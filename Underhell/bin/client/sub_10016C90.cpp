int __stdcall sub_10016C90(int *a1, int *a2, int a3, int a4)
{
  int result; // eax

  result = a3;
  switch ( a3 )
  {
    case 0:
      result = a4;
      *a2 = a4;
      *a1 = a4;
      break;
    case 1:
      result = 2 * a4;
      *a2 = 2 * a4;
      *a1 = 2 * a4;
      break;
    case 2:
      result = 3 * a4;
      *a2 = 3 * a4;
      *a1 = 3 * a4;
      break;
    case 3:
      result = a4 + 2;
      *a2 = a4 + 2;
      *a1 = a4 + 2;
      break;
    case 4:
      *a1 = a4 + 1;
      result = 2 * a4;
      *a2 = 2 * a4;
      break;
    case 5:
      *a1 = a4;
      result = 2 * a4;
      *a2 = 2 * a4;
      break;
    case 6:
      *a1 = a4;
      result = (int)a2;
      *a2 = 3 * a4 - 6;
      break;
    case 7:
      *a1 = 4 * a4;
      result = (int)a2;
      *a2 = 6 * a4;
      break;
    case 8:
      result = (int)a2;
      *a1 = a4;
      *a2 = 0;
      break;
    default:
      return result;
  }
  return result;
}
