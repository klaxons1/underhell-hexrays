int __thiscall sub_1013EA30(int *this)
{
  float v3; // [esp+0h] [ebp-Ch]

  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v3, 0);
  return (*(int (__thiscall **)(int *, _DWORD))(*this + 720))(this, 0.1);
}
