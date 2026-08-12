_DWORD *__thiscall sub_102716C0(_DWORD *this, _DWORD *a2)
{
  int v3; // eax

  sub_1025C030(this, a2);
  sub_1022ACA0(a2, "SubTabPosition", this[97]);
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 1060))(this);
  return sub_1022ACA0(a2, "TabPosition", v3);
}
