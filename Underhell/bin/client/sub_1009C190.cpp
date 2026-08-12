int __thiscall sub_1009C190(_DWORD **this, int a2)
{
  float *v3; // eax
  float v5; // [esp+0h] [ebp-10h]

  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  v5 = *v3 - 15.0;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, float, float))(*this[2] + 40))(this[2], LODWORD(v5), v3[1], v3[2]);
}
