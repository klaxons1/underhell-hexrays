_DWORD *__thiscall sub_102524A0(int this, _DWORD *a2)
{
  unsigned __int8 v3; // al
  int v4; // eax

  sub_1023B220((_DWORD *)this, a2);
  sub_1022ACA0(a2, "textHidden", *(unsigned __int8 *)(this + 293));
  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 924))(this);
  sub_1022ACA0(a2, "editable", v3);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 960))(this);
  sub_1022ACA0(a2, "maxchars", v4);
  sub_1022ACA0(a2, "NumericInputOnly", *(unsigned __int8 *)(this + 402));
  return sub_1022ACA0(a2, "unicode", *(unsigned __int8 *)(this + 403));
}
