int __thiscall sub_100EB9C0(int this, _DWORD *a2)
{
  *(_DWORD *)(*a2 + 4) = a2[1];
  *(_DWORD *)a2[1] = *a2;
  --*(_WORD *)(this + 132);
  (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(this + 140) + 32))(*(_DWORD *)(this + 140), a2);
  --*(_DWORD *)(*(_DWORD *)(this + 144) + 4);
  return (*(int (__thiscall **)(_DWORD, _DWORD *))(*g_pMemAlloc + 20))(g_pMemAlloc, a2);
}
