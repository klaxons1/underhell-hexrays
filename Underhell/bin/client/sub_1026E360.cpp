int __thiscall sub_1026E360(_DWORD *this, _DWORD *a2)
{
  int v3; // edi

  v3 = sub_1022A910(a2, "newPanel", 0);
  if ( this[93]
    && !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)this[93] + 240))(this[93])
    && v3 != (**(int (__thiscall ***)(_DWORD))this[93])(this[93]) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 1068))(this);
  }
  return sub_1027B560(this);
}
