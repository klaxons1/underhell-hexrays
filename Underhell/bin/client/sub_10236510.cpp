int __thiscall sub_10236510(int *this, int (__thiscall ***a2)(_DWORD))
{
  int v3; // edi
  int v4; // eax

  if ( !a2 )
    return (*(int (__thiscall **)(int *, _DWORD))(*this + 152))(this, 0);
  v3 = *this;
  v4 = (**a2)(a2);
  return (*(int (__thiscall **)(int *, int))(v3 + 152))(this, v4);
}
