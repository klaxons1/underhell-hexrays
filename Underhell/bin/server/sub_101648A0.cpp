char __thiscall sub_101648A0(_DWORD *this, float *a2, int a3, int a4)
{
  int v4; // eax

  v4 = this[906];
  if ( v4 )
    return (*(int (__thiscall **)(_DWORD, float *, int, int))(*(_DWORD *)v4 + 172))(this[906], a2, a3, a4);
  else
    return sub_1004B040((int)this, a2, a3, a4);
}
