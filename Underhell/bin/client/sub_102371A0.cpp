char __thiscall sub_102371A0(void *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // eax

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 148))(this) )
    return 0;
  v3 = dword_1047CA70;
  v4 = *(_DWORD *)dword_1047CA70;
  v5 = (**(int (__thiscall ***)(void *))this)(this);
  v6 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 148))(this, v5);
  return (*(int (__thiscall **)(int, int))(v4 + 192))(v3, v6);
}
