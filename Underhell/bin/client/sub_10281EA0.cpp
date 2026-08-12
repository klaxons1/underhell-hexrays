int __thiscall sub_10281EA0(int this, int a2, int a3, int a4)
{
  int v5; // edi

  v5 = sub_102809E0(*(_DWORD *)(this + 456), a2, a3, a4);
  if ( v5 )
  {
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 456) + 48))(*(_DWORD *)(this + 456), 107, v5);
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 456) + 52))(*(_DWORD *)(this + 456), 107, v5);
  }
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 476) + 200))(*(_DWORD *)(this + 476), 1);
  return v5;
}
