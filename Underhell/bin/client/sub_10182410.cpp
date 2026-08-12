int __thiscall sub_10182410(int this)
{
  int v2; // eax
  int (__thiscall *v3)(int); // edx

  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 820))(*(_DWORD *)(this + 20));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 20) + 776))(*(_DWORD *)(this + 20));
  v2 = *(_DWORD *)(this - 252);
  *(float *)(this + 56) = 0.0;
  v3 = *(int (__thiscall **)(int))(v2 + 880);
  *(_DWORD *)(this + 24) = 0;
  return v3(this - 252);
}
