int __thiscall sub_100CFA00(void *this)
{
  int result; // eax

  result = sub_10422700(this);
  *((float *)this + 13) = 0.0;
  *((float *)this + 14) = 0.0;
  *((_BYTE *)this + 68) = 1;
  *((float *)this + 12) = 1.0;
  *((float *)this + 15) = 1.0;
  *((float *)this + 16) = 1.0;
  return result;
}
