int __thiscall sub_1040F080(float *this, float a2, float a3)
{
  int result; // eax

  this[547] = a2;
  this[548] = a3;
  result = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, (int)-a3, (int)a3);
  this[554] = (float)result;
  return result;
}
