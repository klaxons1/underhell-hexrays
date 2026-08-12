int __thiscall sub_10127320(int this, int a2)
{
  int v3; // edx

  v3 = *(_DWORD *)(this + 804);
  *(_BYTE *)(this + 828) = 0;
  *(_DWORD *)(this + 832) = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(
                              dword_106B31E4,
                              *(_DWORD *)(this + 800),
                              v3);
  sub_100EC3F0((_DWORD *)this, (int)sub_101266D0, 0.0, 0);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
