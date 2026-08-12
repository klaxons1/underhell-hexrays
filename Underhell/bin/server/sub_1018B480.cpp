float *__thiscall sub_1018B480(float *this, int a2)
{
  float *result; // eax

  if ( (dword_106B7B8C & 1) == 0 )
    dword_106B7B8C |= 1u;
  switch ( a2 )
  {
    case 1:
      result = &flt_106B7B80;
      flt_106B7B80 = this[4];
      flt_106B7B84 = this[2];
      flt_106B7B88 = this[13];
      break;
    case 2:
      result = this + 4;
      break;
    case 3:
      result = &flt_106B7B80;
      flt_106B7B80 = this[1];
      flt_106B7B84 = this[5];
      flt_106B7B88 = this[14];
      break;
    default:
      result = this + 1;
      break;
  }
  return result;
}
