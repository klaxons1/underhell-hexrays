char __thiscall sub_1012FE10(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  _BYTE *v5; // eax
  int v6; // esi

  v3 = a3;
  v5 = (_BYTE *)sub_1022B4C0("material", (int)Locale);
  v6 = (int)v5;
  if ( !v5 || !*v5 )
    return 0;
  a3 = 0;
  if ( !sub_100E3140(v3, "color", &a3) )
    a3 = -1;
  sub_1012FA40(this, a2, v6);
  this[7] = a3;
  return 1;
}
