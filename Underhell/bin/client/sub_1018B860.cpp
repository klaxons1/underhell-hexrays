char __thiscall sub_1018B860(int this, int a2)
{
  char result; // al

  if ( !sub_1000C1B0((_WORD *)this, a2) )
    return 0;
  result = 1;
  *(float *)(this + 2140) = *((float *)off_103DC81C + 3);
  return result;
}
