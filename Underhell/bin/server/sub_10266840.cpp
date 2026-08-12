int __thiscall sub_10266840(int this, float *a2, float *a3)
{
  int result; // eax

  *(_BYTE *)(this + 478) = 0;
  *(float *)(this + 500) = *a2;
  *(float *)(this + 504) = a2[1];
  *(float *)(this + 508) = a2[2];
  *(float *)(this + 488) = *a3;
  *(float *)(this + 492) = a3[1];
  *(float *)(this + 496) = a3[2];
  result = dword_106CEE04;
  *(float *)(this + 440) = *(float *)(dword_106CEE04 + 44);
  return result;
}
