int __thiscall sub_1009C2D0(_DWORD **this, int a2)
{
  float *v3; // eax

  v3 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 36))(a2);
  return (*(int (__thiscall **)(_DWORD *, float, float, float))(*this[2] + 40))(this[2], *v3, v3[1], v3[2]);
}
