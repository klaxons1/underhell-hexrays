char __thiscall sub_102B1C30(int this)
{
  char result; // al

  if ( sub_100BDCE0(this, 203) == -1 )
    return 0;
  *(_BYTE *)(this + 1127) = 0;
  result = 1;
  *(float *)(this + 1380) = *(float *)(dword_106B31C8 + 12) + 0.1;
  return result;
}
