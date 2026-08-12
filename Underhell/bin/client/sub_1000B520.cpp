int __thiscall sub_1000B520(void *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax

  v2 = *(_DWORD *)dword_10413198;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 1028))(this);
  v4 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1024))(this, v3);
  return (*(int (__thiscall **)(int, int))(v2 + 8))(dword_10413198, v4);
}
