int __thiscall sub_103B0260(int this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(this + 3640);
  *(_BYTE *)(this + 3865) = 0;
  *(float *)(result + 36) = 0.0;
  *(float *)(result + 32) = 0.0;
  *(_BYTE *)(result + 4) = 0;
  *(float *)(result + 48) = 0.0;
  *(float *)(result + 44) = 0.0;
  return result;
}
