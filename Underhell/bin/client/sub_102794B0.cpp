int (__thiscall ***__thiscall sub_102794B0(_DWORD *this))(_DWORD)
{
  _DWORD *v2; // edi
  int (__thiscall ***result)(_DWORD); // eax
  int v4; // eax
  int v5; // eax

  v2 = this + 81;
  result = (int (__thiscall ***)(_DWORD))sub_10237C80(this + 81);
  if ( result )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 876))(this, this[82]);
    v4 = sub_10237C80(v2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 124))(v4, 0);
    v5 = sub_10237C80(v2);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 156))(v5, 0);
    return sub_102393F0(v2, 0);
  }
  return result;
}
