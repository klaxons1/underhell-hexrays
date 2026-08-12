void __thiscall sub_101592C0(_DWORD *this)
{
  int v1; // edx
  double v2; // st7

  v1 = this[1];
  if ( 0.0 == *(float *)(v1 + 4136) )
  {
    if ( *(float *)(v1 + 552) == 0.0 )
      v2 = 1.0;
    else
      v2 = *(float *)(v1 + 552);
    *(float *)(this[2] + 72) = *(float *)(this[2] + 72)
                             - v2 * *(float *)(dword_106B6F0C + 44) * *(float *)(dword_106B31C8 + 16) * 0.5;
    sub_101581E0(this);
  }
}
