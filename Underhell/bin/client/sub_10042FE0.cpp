int __thiscall sub_10042FE0(float *this, int a2, int a3)
{
  float *v4; // eax
  float v6[3]; // [esp+4h] [ebp-Ch] BYREF

  v4 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
  v6[0] = this[892] + *v4;
  v6[1] = this[893] + v4[1];
  v6[2] = this[894] + v4[2];
  sub_101EDFB0(v6, a2);
  return a2;
}
