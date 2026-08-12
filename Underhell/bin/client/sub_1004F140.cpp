int __thiscall sub_1004F140(_DWORD **this, float a2, float a3, float a4, float a5)
{
  int result; // eax
  float v6; // [esp+0h] [ebp-8h]
  float v7; // [esp+4h] [ebp-4h]
  float v8; // [esp+14h] [ebp+Ch]
  float v9; // [esp+18h] [ebp+10h]

  v6 = a4 * 255.0 + 8388608.0;
  v7 = a3 * 255.0 + 8388608.0;
  v8 = a2 * 255.0 + 8388608.0;
  v9 = 255.0 * a5 + 8388608.0;
  result = LOBYTE(v6) | ((LOBYTE(v7) | ((LOBYTE(v8) | (LOBYTE(v9) << 8)) << 8)) << 8);
  *this[56] = result;
  return result;
}
