int __thiscall sub_101ACBA0(_DWORD *this)
{
  int result; // eax
  float v3[3]; // [esp+4h] [ebp-18h] BYREF
  float v4[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_10112C00((int)(this + 80), 0);
  v4[0] = 8.0;
  v4[1] = 8.0;
  v4[2] = 8.0;
  v3[0] = -8.0;
  v3[1] = -8.0;
  v3[2] = -8.0;
  result = sub_1025F360(this, v3, v4);
  this[200] = 0;
  this[201] = 0;
  return result;
}
