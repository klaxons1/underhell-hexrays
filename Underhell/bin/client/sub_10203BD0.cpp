bool __thiscall sub_10203BD0(float *this, int a2, int a3)
{
  return !*(_BYTE *)(a3 + 16)
      && this[13] > 0.0
      && (0.0 == this[11] || this[12] + *(float *)(a3 + 12) + this[11] >= *(float *)(a2 + 36) - *(float *)(a2 + 44));
}
