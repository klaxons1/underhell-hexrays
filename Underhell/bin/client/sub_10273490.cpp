int __thiscall sub_10273490(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ecx
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // edx

  v3 = (_DWORD *)this[54];
  if ( v3 != a2 )
  {
    if ( v3 )
      sub_1022AF00(v3);
    this[54] = sub_1022AD00(a2);
  }
  v4 = *(_DWORD *)this[63];
  v5 = sub_1022B4C0(a2, "Text", (int)Locale);
  (*(void (__thiscall **)(_DWORD, int))(v4 + 768))(this[63], v5);
  v6 = sub_1022A800(a2, "Expand", 0);
  v7 = *this;
  *((_BYTE *)this + 264) = v6 != 0;
  return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(v7 + 244))(this, 0, 0);
}
