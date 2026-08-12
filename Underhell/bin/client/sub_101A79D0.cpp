int __thiscall sub_101A79D0(int this, int a2)
{
  int result; // eax

  if ( sub_1022A6A0("duration", 0) )
  {
    sub_1022A940("duration", 0.0);
    *(float *)(this + 12) = 0.0;
    *(float *)(this + 16) = *((float *)off_103DC81C + 3) + 0.0;
  }
  result = sub_1022A6A0("fadeout", 0);
  if ( result )
  {
    result = sub_1022A800("fadeout", 0);
    *(_BYTE *)(this + 22) = result == 1;
  }
  return result;
}
