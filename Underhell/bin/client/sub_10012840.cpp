int __thiscall sub_10012840(int this, int a2, char a3)
{
  int result; // eax
  double v4; // st7

  result = a2;
  switch ( a2 )
  {
    case 0:
    case 3:
      result = a3 != 0 ? 400 : 300;
      v4 = (double)result;
      goto LABEL_5;
    case 1:
      v4 = 350.0;
      goto LABEL_5;
    case 2:
      v4 = 600.0;
LABEL_5:
      *(float *)(this + 4124) = v4;
      break;
    default:
      break;
  }
  if ( (*(_BYTE *)(this + 732) & 2) != 0 || *(_BYTE *)(this + 316) == 9 )
    *(float *)(this + 4124) = *(float *)(this + 4124) + 100.0;
  return result;
}
