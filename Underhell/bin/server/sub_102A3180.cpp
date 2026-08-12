bool __thiscall sub_102A3180(int this)
{
  bool result; // al
  float v3[3]; // [esp+4h] [ebp-Ch] BYREF

  result = 0;
  if ( sub_1029EF10((_DWORD *)this) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, float *))(**(_DWORD **)(this + 4) + 528))(
      *(_DWORD *)(this + 4),
      0,
      0,
      v3);
    if ( (v3[1] + v3[0]) * 0.0 + v3[2] >= 0.707106781187 )
      return 1;
  }
  return result;
}
