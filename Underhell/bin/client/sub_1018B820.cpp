char __thiscall sub_1018B820(int this)
{
  char result; // al

  if ( sub_10029CF0((_DWORD *)this, 203) == -1 )
    return 0;
  *(_BYTE *)(this + 1967) = 0;
  result = 1;
  *(float *)(this + 2136) = *((float *)off_103DC81C + 3) + 0.1;
  return result;
}
