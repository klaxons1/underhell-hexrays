int __thiscall sub_101E3D90(_DWORD *this, float a2, float a3, int a4)
{
  int v4; // edx
  float v6[2]; // [esp+0h] [ebp-Ch] BYREF
  __int16 v7; // [esp+8h] [ebp-4h]

  v6[1] = a2;
  v4 = this[5 * a4 + 7];
  v6[0] = a3;
  v7 = 0;
  return this[5 * a4 + 4] + 10 * sub_101E3920(&this[5 * a4 + 4], v4, (int)v6);
}
