int __thiscall sub_102123C0(int this, int a2, int a3)
{
  bool v3; // al
  int result; // eax

  v3 = 1.0 != *(float *)(this + 76) || 1.0 != *(float *)(this + 80) || 1.0 != *(float *)(this + 84);
  *(_BYTE *)(this + 100) = v3;
  if ( 0.0 == *(float *)(this + 88) && 0.0 == *(float *)(this + 92) && 0.0 == *(float *)(this + 96) )
  {
    result = 0;
    *(_BYTE *)(this + 101) = 0;
  }
  else
  {
    result = 1;
    *(_BYTE *)(this + 101) = 1;
  }
  return result;
}
