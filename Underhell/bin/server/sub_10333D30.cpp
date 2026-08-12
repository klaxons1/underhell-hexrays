_DWORD *__thiscall sub_10333D30(int this, int a2)
{
  __int64 v4; // [esp-8h] [ebp-14h]

  if ( sub_100697A0((_DWORD *)this, 99, 1) )
    *(float *)(this + 5704) = *(float *)(dword_106E5D94 + 44) + *(float *)(dword_106B31C8 + 12);
  if ( a2 == 13 && *(_BYTE *)(this + 5972) )
  {
    HIDWORD(v4) = this;
    LODWORD(v4) = this;
    sub_1010DD80((_DWORD *)(this + 5908), v4, 0.0);
  }
  return sub_10095080(this, a2);
}
