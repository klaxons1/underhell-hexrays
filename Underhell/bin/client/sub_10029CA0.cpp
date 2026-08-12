int __thiscall sub_10029CA0(_DWORD *this, char *String1)
{
  int *v3; // eax

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v3 = (int *)this[485];
  if ( !v3 || !*v3 )
    v3 = 0;
  return sub_10008AD0(v3, String1);
}
