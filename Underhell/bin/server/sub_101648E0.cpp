void __thiscall sub_101648E0(int this, int a2, int a3)
{
  int v3; // eax

  v3 = *(_DWORD *)(this + 3624);
  if ( v3 )
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)v3 + 188))(*(_DWORD *)(this + 3624), a2, a3);
  else
    sub_100236C0((float *)this, a2, a3);
}
