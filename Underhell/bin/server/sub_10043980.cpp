int __thiscall sub_10043980(int *this, int a2, float a3)
{
  int v3; // edx
  int (__thiscall *v4)(int *, _DWORD *); // edx
  _DWORD v6[2]; // [esp+0h] [ebp-8h] BYREF

  v3 = *this;
  *(float *)&v6[1] = a3;
  v4 = *(int (__thiscall **)(int *, _DWORD *))(v3 + 1256);
  v6[0] = a2;
  return v4(this, v6);
}
