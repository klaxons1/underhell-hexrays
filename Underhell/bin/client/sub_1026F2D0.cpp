int __thiscall sub_1026F2D0(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"KeyModeSet");
  else
    v3 = 0;
  v4 = dword_1047CA74;
  v5 = *(_DWORD *)dword_1047CA74;
  v6 = (**(int (__thiscall ***)(void *, _DWORD))this)(this, 0.0);
  v7 = (*(int (__thiscall **)(void *, _DWORD *, int))(*(_DWORD *)this + 148))(this, v3, v6);
  return (*(int (__thiscall **)(int, int))(v5 + 80))(v4, v7);
}
