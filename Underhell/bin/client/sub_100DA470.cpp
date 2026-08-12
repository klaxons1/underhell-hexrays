bool __thiscall sub_100DA470(int this, int a2, int a3)
{
  bool result; // al

  result = sub_1009E900((_DWORD *)this, a2, a3);
  if ( result )
    return sub_1009EB90((float *)(this + 12), a2, *(float *)&a3, "scale", COERCE_CHAR_(1.0)) != 0;
  return result;
}
