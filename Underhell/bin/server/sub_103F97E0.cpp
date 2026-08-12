int __thiscall sub_103F97E0(float *this)
{
  int (*v2)(void); // eax
  int result; // eax

  v2 = *(int (**)(void))(*(_DWORD *)this + 1572);
  this[1409] = *(float *)(dword_106B31C8 + 12) + 3.5;
  result = v2();
  *((_DWORD *)this + 1410) = result;
  return result;
}
