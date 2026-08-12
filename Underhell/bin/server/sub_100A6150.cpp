int __thiscall sub_100A6150(int this, int a2)
{
  int result; // eax

  if ( *(_DWORD *)(this + 68) )
  {
    result = dword_106B31C8;
    *(float *)(this + 76) = *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(this + 64) = 1;
  }
  else
  {
    result = a2;
    *(_BYTE *)(this + 64) = 0;
  }
  *(_DWORD *)(this + 68) = a2;
  return result;
}
