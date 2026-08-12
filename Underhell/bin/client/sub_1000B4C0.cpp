_DWORD *__thiscall sub_1000B4C0(void *this, _DWORD *a2, int a3)
{
  _DWORD *v3; // eax
  int v4; // edx
  int v5; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 1012))(this);
  *a2 = *v3;
  v4 = v3[1];
  v5 = v3[2];
  a2[1] = v4;
  a2[2] = v5;
  return a2;
}
