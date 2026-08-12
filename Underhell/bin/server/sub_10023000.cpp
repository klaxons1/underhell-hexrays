char __thiscall sub_10023000(_DWORD *this, int a2)
{
  int v4; // eax
  bool v5; // bl
  _DWORD *v6; // [esp+4h] [ebp-4h] BYREF

  if ( !this )
    return 1;
  v4 = this[3];
  if ( v4 == 1 || v4 == 2 || v4 == 4 )
  {
    v6 = this;
    v5 = (*(int (__thiscall **)(_DWORD, _DWORD **, int, int, int))(*g_pThreadPool + 44))(g_pThreadPool, &v6, 1, 1, a2) != 258;
    (*(void (__thiscall **)(_DWORD *))(*this + 4))(this);
    return v5;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 4))(this);
    return 1;
  }
}
