int __thiscall sub_1027EE80(_DWORD *this)
{
  bool v2; // zf
  int *v3; // eax
  int *v4; // eax
  int *v5; // eax
  int *v6; // eax
  int *v7; // eax
  int *v8; // eax
  int *v9; // eax
  int *v10; // eax

  v2 = this[44] == 0;
  *((_BYTE *)this + 192) = *((_BYTE *)this + 192) == 0;
  if ( v2 )
  {
    v3 = (int *)sub_100DDA40(284);
    if ( v3 )
      v4 = sub_1024B100(v3, (int (__thiscall ***)(_DWORD))this[27], 0, Locale);
    else
      v4 = 0;
    this[44] = v4;
    v5 = (int *)sub_100DDA40(284);
    if ( v5 )
      v6 = sub_1024B100(v5, (int (__thiscall ***)(_DWORD))this[27], 0, Locale);
    else
      v6 = 0;
    this[45] = v6;
    v7 = (int *)sub_100DDA40(284);
    if ( v7 )
      v8 = sub_1024B100(v7, (int (__thiscall ***)(_DWORD))this[27], 0, Locale);
    else
      v8 = 0;
    this[46] = v8;
    v9 = (int *)sub_100DDA40(284);
    if ( v9 )
      v10 = sub_1024B100(v9, (int (__thiscall ***)(_DWORD))this[27], 0, Locale);
    else
      v10 = 0;
    this[47] = v10;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 64))(this, *((unsigned __int8 *)this + 192));
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[27] + 16))(this[27]);
}
