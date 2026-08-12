int __thiscall sub_10221C20(_DWORD *this, int a2, int a3)
{
  int v5; // edi
  int i; // [esp+14h] [ebp+8h]

  v5 = 0;
  for ( i = (**(int (__thiscall ***)(int))a2)(a2); v5 < this[12]; ++v5 )
    (*(void (__thiscall **)(_DWORD *, _DWORD, int, int, int))(*this + 44))(
      this,
      *(_DWORD *)(this[9] + 4 * v5),
      i,
      a2,
      a3);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)a2 + 4))(a2, i + this[15]);
}
