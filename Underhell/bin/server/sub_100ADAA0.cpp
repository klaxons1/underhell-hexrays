bool __thiscall sub_100ADAA0(int this)
{
  int v1; // edx
  int v3; // eax

  v1 = dword_106B31C8;
  if ( *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 44) )
  {
    if ( *(_DWORD *)(this + 64) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 2] != *(_DWORD *)(this + 64) >> 12 )
    {
      v3 = 0;
    }
    else
    {
      v3 = off_1061BE18[4 * (*(_DWORD *)(this + 64) & 0xFFF) + 1];
    }
    sub_100ACB00(this, v3, (int)"IsSpeaking() %f\n");
    v1 = dword_106B31C8;
  }
  return *(float *)(v1 + 12) == *(float *)(this + 60) || *(float *)(v1 + 12) < (double)*(float *)(this + 44);
}
