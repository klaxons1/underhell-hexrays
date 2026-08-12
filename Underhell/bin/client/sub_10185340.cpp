int __thiscall sub_10185340(_DWORD *this, int a2)
{
  int v2; // edi
  int (__thiscall *v4)(int, int *, const char *, int); // eax
  int v5; // ebx
  _DWORD *v6; // eax

  v2 = a2;
  sub_10241570(a2);
  if ( *((_BYTE *)this + 212) )
    this[52] = sub_100B66A0((int)&dword_1042FB78, (int)(this + 53));
  v4 = *(int (__thiscall **)(int, int *, const char *, int))(*(_DWORD *)v2 + 20);
  v5 = *this;
  a2 = -1;
  v6 = (_DWORD *)v4(v2, &a2, "FgColor", -1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(v5 + 220))(this, *v6);
}
