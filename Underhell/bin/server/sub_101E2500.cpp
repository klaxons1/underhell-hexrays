_DWORD *__thiscall sub_101E2500(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // eax
  _DWORD *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 1088))(this) )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*this + 1092))(this);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 32))(v3);
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 536))(v4, a2);
    return a2;
  }
  else
  {
    result = a2;
    *a2 = this[903];
    a2[1] = this[904];
    a2[2] = this[905];
  }
  return result;
}
