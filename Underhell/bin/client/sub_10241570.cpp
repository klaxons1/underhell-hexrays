int __thiscall sub_10241570(unsigned int *this, int a2)
{
  int v2; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // eax
  unsigned int v6; // ebx
  _DWORD *v7; // eax
  int (__thiscall *v8)(int, int *, const char *, int); // eax
  unsigned int v9; // ecx
  int result; // eax
  int v11; // eax

  v2 = a2;
  v4 = *this;
  v5 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "Panel.FgColor",
                   a2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v4 + 220))(this, *v5);
  v6 = *this;
  v7 = (_DWORD *)(*(int (__thiscall **)(unsigned int *, int *, const char *, int))(*this + 328))(
                   this,
                   &a2,
                   "Panel.BgColor",
                   v2);
  (*(void (__thiscall **)(unsigned int *, _DWORD))(v6 + 216))(this, *v7);
  v8 = *(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20);
  a2 = -1056964609;
  v9 = *(_DWORD *)v8(v2, &a2, "DragDrop.DragFrame", -1056964609);
  a2 = -6881386;
  this[10] = v9;
  this[11] = *(_DWORD *)(*(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20))(
                          v2,
                          &a2,
                          "DragDrop.DropFrame",
                          -6881386);
  this[15] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v2 + 12))(v2, "DefaultVerySmall", 0);
  *((_WORD *)this + 40) &= ~0x100u;
  result = (*(int (__thiscall **)(unsigned int *))(*this + 288))(this);
  if ( (_BYTE)result )
  {
    v11 = sub_10240220(this + 33);
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 92))(v11, v2);
  }
  return result;
}
