int __stdcall sub_10016D90(int a1, int a2)
{
  int result; // eax

  switch ( a1 )
  {
    case 4:
      result = 2 * a2 - 2;
      break;
    case 5:
      result = 2 * a2;
      break;
    case 6:
      result = 3 * a2 - 6;
      break;
    case 7:
      result = 6 * a2 / 4;
      break;
    case 8:
      result = 0;
      break;
    default:
      result = a2;
      break;
  }
  return result;
}
