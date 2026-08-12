int *__thiscall sub_10271B50(int *this, int a2)
{
  int *result; // eax
  int *v3; // esi

  result = (int *)this[206];
  v3 = this + 206;
  if ( (_BYTE)a2 != (((unsigned __int8)result & 2) != 0) )
  {
    if ( (_BYTE)a2 )
    {
      a2 = (unsigned int)result | 2;
      return sub_1021B400(v3, &a2);
    }
    else
    {
      a2 = -3;
      return sub_102719F0(v3, &a2);
    }
  }
  return result;
}
