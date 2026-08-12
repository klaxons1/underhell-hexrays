int __thiscall sub_100B9360(int this)
{
  double v1; // st7
  int result; // eax

  v1 = *((float *)off_103DC81C + 3);
  *(float *)(this + 464) = *((float *)off_103DC81C + 3);
  *(float *)(this + 432) = v1 + *(float *)(dword_1042FFC4 + 44);
  result = dword_103E08A4;
  *(_DWORD *)(this + 468) = dword_103E08A4++;
  return result;
}
