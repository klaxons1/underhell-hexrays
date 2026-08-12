int __thiscall sub_1000B780(_DWORD *this, int a2)
{
  _DWORD *v3; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520(this);
  v3 = (_DWORD *)this[485];
  if ( !v3 || !*v3 )
    v3 = 0;
  return sub_10025700(v3, a2);
}
