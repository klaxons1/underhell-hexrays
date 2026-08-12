int __thiscall sub_102606E0(_DWORD *this, int a2)
{
  int *v2; // edi
  int v4; // ebx
  int v5; // eax

  v2 = (int *)a2;
  sub_1025D240(this, a2);
  this[96] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *, int *, const char *, int *))(*this + 328))(
                          this,
                          &a2,
                          "ExpandButton.Color",
                          v2);
  v4 = *v2;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
  this[95] = (*(int (__thiscall **)(int *, const char *, int))(v4 + 12))(v2, "Marlett", v5);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 264))(this, 0);
}
