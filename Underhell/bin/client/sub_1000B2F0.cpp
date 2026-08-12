_DWORD *__thiscall sub_1000B2F0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // eax

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[1] + 4))(this + 1);
  *a2 = *v2;
  v3 = v2[1];
  v4 = v2[2];
  a2[1] = v3;
  a2[2] = v4;
  return a2;
}
