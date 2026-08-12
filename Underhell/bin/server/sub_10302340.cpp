int __thiscall sub_10302340(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 3624);
  if ( v1 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 216))(*(_DWORD *)(this + 3624));
  else
    return sub_10022A70((_BYTE *)this);
}
