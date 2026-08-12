_DWORD *__thiscall sub_10285890(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  _DWORD *v4; // ebx
  _DWORD *v5; // ecx

  *this = &vgui::FocusNavGroup::`vftable';
  this[1] = -1;
  v3 = this + 1;
  v4 = this + 2;
  this[2] = -1;
  v5 = this + 3;
  *v5 = -1;
  this[4] = a2;
  sub_10237CE0(v5, 0);
  *((_BYTE *)this + 20) = 0;
  sub_10237CE0(v3, 0);
  sub_10237CE0(v4, 0);
  return this;
}
