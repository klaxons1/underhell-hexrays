char __thiscall sub_10164920(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 3624);
  if ( v1 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 196))(*(_DWORD *)(this + 3624));
  else
    return sub_10022390((float *)this);
}
