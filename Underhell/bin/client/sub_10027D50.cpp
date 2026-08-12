int __thiscall sub_10027D50(_DWORD *this, char *String2)
{
  _DWORD *v3; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v3 = (_DWORD *)this[485];
  if ( !v3 || !*v3 )
    v3 = 0;
  return sub_1001E140((int)v3, String2);
}
