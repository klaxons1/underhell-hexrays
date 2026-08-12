_DWORD *__thiscall sub_10381D20(void *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // eax
  int v5; // edx
  int v6; // eax

  v4 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
  *a2 = *v4;
  v5 = v4[1];
  v6 = v4[2];
  a2[1] = v5;
  a2[2] = v6;
  return a2;
}
