int __thiscall sub_100B82C0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax

  sub_102366F0(255);
  (*(void (__thiscall **)(_DWORD *))(*this + 8))(this);
  v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  this[69] = v2;
  (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
    dword_1047CA6C,
    v2,
    "vgui/hud/autoaim",
    1,
    0);
  v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
  this[70] = v3;
  return (*(int (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
           dword_1047CA6C,
           v3,
           "vgui/hud/xbox_reticle",
           1,
           0);
}
