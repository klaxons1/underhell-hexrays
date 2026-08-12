char __thiscall sub_100CF7E0(_DWORD *this, _DWORD *a2)
{
  char result; // al
  int v4; // esi
  _DWORD *v5; // eax
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // [esp-Ch] [ebp-10h]

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 320))(this)
    || !(*(int (__thiscall **)(_DWORD *))(*this + 1092))(this)
    || (result = sub_100F5970(this)) != 0 )
  {
    result = 0;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 968))(a2)
      || (v4 = a2[298], v4 != -1)
      && ((v10 = a2[298], v5 = (_DWORD *)sub_102D9B20(), sub_100BA1B0(v5, v10) == -2) || this[v4 + 445]) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 988))(a2) )
      {
        v6 = this[525];
        if ( v6 == -1 )
          return 1;
        v7 = &off_1061BE18[4 * (this[525] & 0xFFF) + 1];
        v8 = v6 >> 12;
        if ( off_1061BE18[4 * (this[525] & 0xFFF) + 2] != v8 || !*v7 )
          return 1;
        v9 = off_1061BE18[4 * (this[525] & 0xFFF) + 2] == v8 ? *v7 : 0;
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 980))(v9) )
          return 1;
      }
    }
  }
  return result;
}
