void __thiscall sub_101F5F80(int this, int a2, int a3)
{
  if ( *(_DWORD *)(this + 256) && sub_101F5C50((_DWORD *)this, &a2, &a3) )
    (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 256) + 16))(*(_DWORD *)(this + 256), a2, a3);
  nullsub_9(a2, a3);
}
