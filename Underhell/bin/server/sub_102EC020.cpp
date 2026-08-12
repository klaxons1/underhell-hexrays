int __thiscall sub_102EC020(float *this, int a2)
{
  int (*v3)(void); // edx
  float v4; // eax
  int result; // eax
  float v6[2]; // [esp+4h] [ebp-Ch] BYREF
  float v7; // [esp+Ch] [ebp-4h]

  v3 = *(int (**)(void))(*(_DWORD *)this + 8);
  v7 = this[200];
  v4 = *(float *)v3();
  v6[0] = v7 * v7;
  v6[1] = v4;
  result = sub_102EBF20(&dword_106E1D30, dword_106E1D3C, (int)v6);
  *((_BYTE *)this + 804) = 0;
  return result;
}
