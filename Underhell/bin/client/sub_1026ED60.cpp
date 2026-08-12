void __thiscall sub_1026ED60(void *this, int a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  v4 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 144))(this);
  if ( sub_1026AFB0(v4) == 1 )
    (*(void (__thiscall **)(void *))(*(_DWORD *)this + 392))(this);
  v5 = (_DWORD *)sub_10229D00(32);
  if ( v5 )
  {
    v6 = sub_1022B270(v5, (int)"OnCursorMoved", "x", a2, "y", a3);
    sub_10236860(this, v6);
  }
  else
  {
    sub_10236860(this, 0);
  }
}
