int __thiscall sub_101A7D50(float *this, float *a2)
{
  void (__thiscall *v3)(float *); // eax

  this[970] = a2[27];
  *((_DWORD *)this + 971) = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 880))(a2);
  v3 = *(void (__thiscall **)(float *))(*(_DWORD *)a2 + 872);
  a2[27] = *(float *)(dword_106B92DC + 44);
  v3(a2);
  return (*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 1784))(this, a2);
}
