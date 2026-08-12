int __thiscall sub_101FB640(int *this)
{
  void (*v2)(void); // edx
  float v4; // [esp+0h] [ebp-Ch]

  v2 = *(void (**)(void))(*this + 724);
  ++this[326];
  v2();
  v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v4, 0);
}
