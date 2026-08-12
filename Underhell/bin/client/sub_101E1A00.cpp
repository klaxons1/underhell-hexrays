int __thiscall sub_101E1A00(void *this, char a2, __int16 a3, float a4)
{
  int result; // eax

  result = (int)this + 7 * (a2 == 0);
  *(float *)(result + 75) = a4;
  *(_WORD *)(result + 73) = a3;
  return result;
}
