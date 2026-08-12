int __thiscall sub_10270080(void *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax

  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 1032))(this, a2);
  v3 = dword_1047CA68;
  v4 = *(_DWORD *)dword_1047CA68;
  v5 = (**(int (__thiscall ***)(void *))this)(this);
  return (*(int (__thiscall **)(int, int))(v4 + 76))(v3, v5);
}
