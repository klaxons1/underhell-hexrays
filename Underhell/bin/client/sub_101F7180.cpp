void __thiscall sub_101F7180(int this)
{
  double v2; // st6
  double v3; // st7

  v2 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1047CA80 + 16))(dword_1047CA80);
  v3 = v2 - *(float *)(this + 52);
  *(float *)(this + 52) = v2;
  if ( *(_BYTE *)(this + 60) )
  {
    *(float *)(this + 32) = v3 * *(float *)(this + 56) + *(float *)(this + 32);
    sub_101F7080(this);
  }
}
