char __thiscall sub_10164960(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 3624);
  if ( v1 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 212))(*(_DWORD *)(this + 3624));
  else
    return sub_10020540((float *)this);
}
