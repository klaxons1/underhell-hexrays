BOOL __thiscall sub_103EEE40(_DWORD *this, int a2, int a3)
{
  int (__thiscall *v3)(_DWORD *, _BYTE *); // edx
  float *v4; // eax
  _BYTE v6[12]; // [esp+0h] [ebp-10h] BYREF
  float v7; // [esp+Ch] [ebp-4h]

  v3 = *(int (__thiscall **)(_DWORD *, _BYTE *))(*(this - 371) + 536);
  v7 = *(float *)(dword_106EEA9C + 44);
  v4 = (float *)v3(this - 371, v6);
  return v7 * v7 > v4[1] * v4[1] + *v4 * *v4 + v4[2] * v4[2];
}
