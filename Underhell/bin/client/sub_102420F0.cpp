char __thiscall sub_102420F0(void *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int v5; // edi
  int v6; // ebx
  int v7; // eax

  v3 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 112))(this);
  if ( sub_10241670(this, v3, a2) )
    return 1;
  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 148))(this) )
    return 0;
  v5 = dword_1047CA70;
  v6 = *(_DWORD *)dword_1047CA70;
  v7 = (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 148))(this, a2);
  return (*(int (__thiscall **)(int, int))(v6 + 184))(v5, v7);
}
