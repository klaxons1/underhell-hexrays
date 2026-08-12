int __thiscall sub_1026EEF0(_WORD *this)
{
  _DWORD *v2; // eax
  _BYTE *v3; // eax

  v2 = (_DWORD *)(*(int (__fastcall **)(_WORD *))(*(_DWORD *)this + 144))(this);
  sub_1026BD20(v2, (int)this);
  sub_1025B800(this, 1);
  v3 = (_BYTE *)(*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 144))(this);
  if ( v3 )
    sub_1026C7A0(v3);
  return (*(int (__thiscall **)(_WORD *))(*(_DWORD *)this + 16))(this);
}
