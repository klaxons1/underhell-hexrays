char __thiscall sub_10389420(_DWORD *this)
{
  int v1; // eax

  v1 = this[581];
  if ( (v1 == 1 || v1 == 2) && (int)this[1084] >= 2 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 1604))(this, 0);
  else
    return sub_10028720(this);
}
