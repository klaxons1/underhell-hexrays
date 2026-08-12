int __thiscall sub_102114F0(int this, int a2, int a3)
{
  int v3; // eax
  bool v4; // al
  int result; // eax

  v3 = *(_DWORD *)(this + 76);
  if ( v3 > 63 )
  {
    v3 = 63;
  }
  else if ( v3 < 0 )
  {
    v3 = 0;
  }
  *(_DWORD *)(this + 76) = v3;
  v4 = 1.0 != *(float *)(this + 52) || 1.0 != *(float *)(this + 56) || 1.0 != *(float *)(this + 60);
  *(_BYTE *)(this + 95) = v4;
  if ( 0.0 == *(float *)(this + 64) && 0.0 == *(float *)(this + 68) && 0.0 == *(float *)(this + 72) )
  {
    result = 0;
    *(_BYTE *)(this + 93) = 0;
  }
  else
  {
    result = 1;
    *(_BYTE *)(this + 93) = 1;
  }
  return result;
}
