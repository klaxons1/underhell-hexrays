int __thiscall sub_10185A40(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  v3 = *(float *)(this + 808) + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0((int *)this, v3, 0);
  return (*(int (__thiscall **)(int))(*(_DWORD *)this + 720))(this);
}
