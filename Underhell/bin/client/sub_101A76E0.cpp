void *__thiscall sub_101A76E0(int this, int a2)
{
  void *result; // eax
  double v4; // st7

  result = (void *)sub_1022A6A0("duration", 0);
  if ( result )
  {
    sub_1022A940("duration", 0.0);
    *(float *)(this + 12) = 0.0;
    result = off_103DC81C;
    v4 = *((float *)off_103DC81C + 3) + 0.0;
    *(_BYTE *)(this + 20) = 1;
    *(float *)(this + 16) = v4;
  }
  return result;
}
