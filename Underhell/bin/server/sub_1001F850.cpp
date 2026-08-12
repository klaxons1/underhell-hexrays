double __stdcall sub_1001F850(int a1, int a2)
{
  double result; // st7

  switch ( a1 )
  {
    case 1:
      result = *(float *)(dword_106908D4 + 44);
      break;
    case 2:
      result = *(float *)(dword_1069091C + 44);
      break;
    case 3:
      result = *(float *)(dword_10690964 + 44);
      break;
    case 4:
    case 5:
      result = *(float *)(dword_106909AC + 44);
      break;
    case 6:
    case 7:
      result = *(float *)(dword_106909F4 + 44);
      break;
    default:
      result = 1.0;
      break;
  }
  return result;
}
