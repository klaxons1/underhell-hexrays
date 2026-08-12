bool __thiscall sub_100DBEE0(int this, int a2, int a3)
{
  return sub_1009EA60((_DWORD *)this, a2, a3)
      && sub_1009EB90((float *)(this + 20), a2, *(float *)&a3, "min", COERCE_CHAR_(0.0))
      && sub_1009EB90((float *)(this + 32), a2, *(float *)&a3, "max", COERCE_CHAR_(1.0)) != 0;
}
