int __thiscall sub_1012F290(int *this)
{
  float v3; // [esp+4h] [ebp-Ch]

  (*(void (__thiscall **)(int *))(*this + 728))(this);
  (*(void (__thiscall **)(int *, int *))(*this + 784))(this, this);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0(this, v3, 0);
}
