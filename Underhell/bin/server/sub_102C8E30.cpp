int __thiscall sub_102C8E30(float *this, int a2)
{
  float v3; // [esp+0h] [ebp-4h]

  v3 = this[267] + *(float *)(dword_106B31C8 + 12);
  return (*(int (__stdcall **)(_DWORD))(*(_DWORD *)this + 748))(LODWORD(v3));
}
