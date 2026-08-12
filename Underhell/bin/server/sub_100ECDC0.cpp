bool __thiscall sub_100ECDC0(float *this, int a2)
{
  bool result; // al
  double v4; // [esp+4h] [ebp-10h]
  double v5; // [esp+Ch] [ebp-8h]

  if ( *(_DWORD *)(a2 + 4) && (unsigned __int8)sub_1041CB20() )
  {
    v4 = this[404];
    v5 = *(float *)(dword_106B31C8 + 12);
    return v5 - sub_100BD360(this) * 1.5 < v4;
  }
  else
  {
    result = 0;
    this[404] = *(float *)(dword_106B31C8 + 12);
  }
  return result;
}
