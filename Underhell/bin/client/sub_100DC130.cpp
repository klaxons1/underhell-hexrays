bool __thiscall sub_100DC130(int this, int a2, int a3)
{
  return sub_1009E900((_DWORD *)this, a2, a3)
      && sub_1009EB90((float *)(this + 12), a2, *(float *)&a3, "minVal", COERCE_CHAR_(0.0))
      && sub_1009EB90((float *)(this + 24), a2, *(float *)&a3, "maxVal", COERCE_CHAR_(1.0)) != 0;
}
