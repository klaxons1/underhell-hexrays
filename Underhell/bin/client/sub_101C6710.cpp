unsigned int __cdecl sub_101C6710(int a1, int a2, int a3)
{
  int v3; // eax
  unsigned int result; // eax

  switch ( a1 )
  {
    case 2:
    case 11:
      v3 = 1;
      goto LABEL_4;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 12:
    case 13:
    case 14:
      v3 = 2;
LABEL_4:
      result = (4 * 4 * ((unsigned int)(a3 + 3) >> 2) * 4 * ((unsigned int)(a2 + 3) >> 2) * v3) >> 3;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
