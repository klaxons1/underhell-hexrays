int __thiscall sub_10272120(int *this, _DWORD *a2)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  int v7; // edx
  int v8; // ebx
  int v9; // ebp
  int v10; // eax
  int v11; // eax

  sub_10241C00(this, a2);
  this[52] = sub_1022A800(a2, "src_corner_height", 0);
  this[53] = sub_1022A800(a2, "src_corner_width", 0);
  this[54] = sub_1022A800(a2, "draw_corner_height", 0);
  this[55] = sub_1022A800(a2, "draw_corner_width", 0);
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 84))(this) )
  {
    v3 = dword_1047CA7C;
    v4 = *(_DWORD *)dword_1047CA7C;
    v5 = (*(int (__thiscall **)(int *, int))(*this + 80))(this, this[54]);
    v6 = (*(int (__thiscall **)(int, int))(v4 + 52))(v3, v5);
    v7 = *this;
    this[54] = v6;
    v8 = dword_1047CA7C;
    v9 = *(_DWORD *)dword_1047CA7C;
    v10 = (*(int (__thiscall **)(int *, int))(v7 + 80))(this, this[55]);
    this[55] = (*(int (__thiscall **)(int, int))(v9 + 52))(v8, v10);
  }
  v11 = sub_1022B4C0(a2, "image", (int)Locale);
  (*(void (__thiscall **)(int *, int))(*this + 768))(this, v11);
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
