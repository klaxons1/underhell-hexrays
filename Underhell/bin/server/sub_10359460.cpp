double __thiscall sub_10359460(int this, int a2, int a3)
{
  double result; // st7

  switch ( a2 )
  {
    case 1:
      result = 2.0;
      break;
    case 2:
    case 3:
      if ( !*(_BYTE *)(this + 5012) || !*(_DWORD *)(this + 5000) )
        goto LABEL_9;
      result = *(float *)(dword_1069091C + 44) * 0.5;
      break;
    case 6:
    case 7:
      if ( !*(_BYTE *)(this + 5012) || *(_DWORD *)(this + 5008) != 4 )
        goto LABEL_9;
      result = *(float *)(dword_106909F4 + 44) * 0.5;
      break;
    default:
LABEL_9:
      result = sub_1001F850(a2, a3);
      break;
  }
  return result;
}
