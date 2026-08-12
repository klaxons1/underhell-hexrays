bool __thiscall sub_100EB630(int this, const void *a2)
{
  bool result; // al

  qmemcpy((void *)(this + 12), a2, 0x30u);
  *(float *)(this + 68) = 0.0;
  *(float *)(this + 64) = 0.0;
  *(float *)(this + 60) = 0.0;
  *(float *)(this + 72) = 1.0;
  result = sub_100EB360((float *)(this + 12));
  *(_BYTE *)(this + 76) = result;
  return result;
}
