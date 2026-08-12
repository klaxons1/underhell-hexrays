char __thiscall sub_1013EE20(int this)
{
  char result; // al

  result = 1;
  if ( (*(_BYTE *)(this + 248) & 1) != 0 )
  {
    if ( !*(_BYTE *)(this + 800) )
    {
      *(_BYTE *)(this + 800) = 1;
      return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
    }
  }
  else if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    return sub_100EC4A0((int *)this, -1.0, 0);
  }
  return result;
}
