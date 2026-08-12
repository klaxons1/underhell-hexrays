void __thiscall sub_1026E5B0(int this, int a2, int a3)
{
  int v3; // edi
  int v5; // eax

  v3 = a2;
  nullsub_9(a2, a3);
  if ( (*(_BYTE *)(this + 384) & 1) != 0 )
  {
    (*(void (__thiscall **)(_DWORD, int *, int *))(**(_DWORD **)(this + 388) + 8))(*(_DWORD *)(this + 388), &a3, &a2);
    v5 = sub_102374C0((int (__thiscall ***)(void *, int *, _BYTE *))this);
    if ( v3 > -2 - a3 + v5 && (*(int (__thiscall **)(int))(*(_DWORD *)this + 1060))(this) )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 968))(this, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 944))(this, 0);
    }
    else
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 968))(this, 0);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 1);
    }
  }
}
