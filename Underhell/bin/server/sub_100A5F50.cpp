int __thiscall sub_100A5F50(void *this, int a2, int a3, int a4)
{
  int result; // eax

  sub_100B9B60(a2, a3, a4, 0.0);
  result = sub_100B99B0(this);
  *(float *)(result + 20) = -1.0;
  return result;
}
