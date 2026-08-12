int __thiscall sub_100D1320(void *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax

  v2 = *(_DWORD *)dword_106B31E4;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1116))(this);
  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1112))(this, v3);
  return (*(int (__thiscall **)(int, int))(v2 + 8))(dword_106B31E4, v4);
}
