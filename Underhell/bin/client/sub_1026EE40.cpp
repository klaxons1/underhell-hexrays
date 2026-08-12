int __thiscall sub_1026EE40(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // eax

  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"CursorExitedMenuItem");
  else
    v3 = 0;
  v4 = (**(int (__thiscall ***)(void *))this)(this);
  sub_1022ACA0(v3, "VPanel", v4);
  v5 = dword_1047CA74;
  v6 = *(_DWORD *)dword_1047CA74;
  v7 = (*(int (__thiscall **)(void *, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)this + 148))(this, v3, 0, 0.0);
  return (*(int (__thiscall **)(int, int))(v6 + 80))(v5, v7);
}
