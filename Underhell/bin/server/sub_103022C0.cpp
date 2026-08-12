char __thiscall sub_103022C0(_DWORD *this, float *a2, int a3)
{
  int v3; // eax

  v3 = this[906];
  if ( v3 )
    return (*(int (__thiscall **)(_DWORD, float *, int))(*(_DWORD *)v3 + 168))(this[906], a2, a3);
  else
    return sub_1004B2F0(this, a2, a3);
}
