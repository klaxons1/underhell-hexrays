int (__thiscall ***__thiscall sub_10261B00(_DWORD *this))(_DWORD)
{
  _DWORD *v1; // esi
  int (__thiscall ***result)(_DWORD); // eax
  int v3; // eax
  int v4; // eax

  v1 = this + 111;
  result = (int (__thiscall ***)(_DWORD))sub_10237C80(this + 111);
  if ( result )
  {
    v3 = sub_10237C80(v1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 124))(v3, 0);
    v4 = sub_10237C80(v1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 156))(v4, 0);
    return sub_102393F0(v1, 0);
  }
  return result;
}
