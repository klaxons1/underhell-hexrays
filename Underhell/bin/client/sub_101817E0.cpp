int __thiscall sub_101817E0(int (__thiscall ***this)(_DWORD), int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // edi
  int v7; // eax

  if ( a2 )
  {
    v3 = dword_1047CA7C;
    v4 = *(_DWORD *)dword_1047CA7C;
    v5 = (*(int (__thiscall **)(int, int, int, const char *))(*(_DWORD *)dword_1041317C + 4))(
           dword_1041317C,
           2,
           a2,
           "HudScheme");
    v6 = (*(int (__thiscall **)(int, int))(v4 + 48))(v3, v5);
    ((void (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*this)[79])(this, v6);
    ((void (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*this)[129])(this, 1);
    (*((void (__thiscall **)(int (__thiscall **)(_DWORD), int))*this[78] + 79))(this[78], v6);
  }
  if ( !sub_10180FE0(this) )
  {
    v7 = (**this)(this);
    sub_102487F0(v7, "scripts/HudAnimations.txt", 1);
  }
  ((void (__thiscall *)(int (__thiscall ***)(_DWORD), int))(*this)[129])(this, 1);
  ((void (__thiscall *)(int (__thiscall ***)(_DWORD), const char *, _DWORD, _DWORD))(*this)[192])(
    this,
    "scripts/HudLayout.res",
    0,
    0);
  sub_100B7030((unsigned __int8 (__cdecl **)(int, int))&dword_1042FB78);
  ((void (__thiscall *)(int (__thiscall ***)(_DWORD), int, int))(*this)[61])(this, 1, 1);
  return sub_100D0CE0((int)&dword_1042FB78);
}
