int __thiscall sub_101E3EC0(int *this, float a2, float a3, char a4)
{
  int v4; // eax
  float v6[2]; // [esp+0h] [ebp-Ch] BYREF
  __int16 v7; // [esp+8h] [ebp-4h]

  v6[1] = a2;
  v6[0] = a3;
  v4 = this[3];
  v7 = a4 & 1;
  return *this + 10 * sub_101E3920(this, v4, (int)v6);
}
