int __thiscall sub_1044DDE0(int *this, const char *Src)
{
  char *v3; // eax
  char *v4; // ebx
  int v5; // edi

  v3 = (char *)sub_104498A0(48);
  if ( v3 )
    v4 = sub_1044A700(v3, Src);
  else
    v4 = 0;
  v5 = sub_1044DB50(this, this[3]);
  *(_DWORD *)(20 * v5 + *this) = v4;
  sub_10433250((_DWORD *)(20 * v5 + *this + 4));
  return v5;
}
