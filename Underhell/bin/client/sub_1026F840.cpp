void __thiscall sub_1026F840(int this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ebx
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // eax

  if ( *(_DWORD *)(this + 372) )
  {
    v8 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 144))(this);
    if ( sub_1026AFB0(v8) == 1 )
      sub_1026EF90((_DWORD **)this);
  }
  else
  {
    v2 = (_DWORD *)sub_10229D00(32);
    if ( v2 )
      v3 = sub_10229D20(v2, (int)"MenuItemSelected");
    else
      v3 = 0;
    sub_1022ACE0(v3, "panel", this);
    v4 = dword_1047CA74;
    v5 = *(_DWORD *)dword_1047CA74;
    v6 = (**(int (__thiscall ***)(int, _DWORD))this)(this, 0.0);
    v7 = (*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)this + 148))(this, v3, v6);
    (*(void (__thiscall **)(int, int))(v5 + 80))(v4, v7);
    sub_1025B040((int *)this);
    if ( *(_BYTE *)(this + 376) )
      *(_BYTE *)(this + 377) = *(_BYTE *)(this + 377) == 0;
  }
}
