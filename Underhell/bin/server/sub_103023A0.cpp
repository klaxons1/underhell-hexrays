char __thiscall sub_103023A0(_DWORD *this, int a2, float a3, int a4)
{
  int v4; // eax

  v4 = this[380];
  if ( v4 )
    return (*(int (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)v4 + 236))(v4, a2, LODWORD(a3), a4);
  else
    return sub_10022400(this, a2, a3, a4);
}
