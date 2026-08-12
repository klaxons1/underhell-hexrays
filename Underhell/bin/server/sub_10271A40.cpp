unsigned __int8 __thiscall sub_10271A40(int *this, int a2)
{
  char v2; // dl
  unsigned __int8 result; // al
  int *v4; // ecx

  v2 = *((_BYTE *)this + 824);
  result = a2;
  v4 = this + 206;
  if ( (_BYTE)a2 != (v2 & 1) )
  {
    if ( (_BYTE)a2 )
    {
      a2 = *v4 | 1;
      return (unsigned __int8)sub_1021B400(v4, &a2);
    }
    else
    {
      a2 = -2;
      return (unsigned __int8)sub_102719F0(v4, &a2);
    }
  }
  return result;
}
