int __thiscall sub_1008E9F0(_DWORD **this, int a2, int a3, int a4, float a5, int a6, char a7)
{
  int v7; // edi
  bool v9; // bl
  int result; // eax

  v7 = 0;
  v9 = *(_DWORD *)(dword_1069375C + 48) == 0;
  if ( a6 == 3 )
  {
    v7 = 8;
    v9 = 0;
  }
  else if ( ((*(int (__thiscall **)(_DWORD *))(*this[1] + 1672))(this[1]) & 4) != 0
         || ((*(int (__thiscall **)(_DWORD *))(*this[1] + 1672))(this[1]) & 0x10) != 0 )
  {
    v7 = 52;
  }
  else if ( ((*(int (__thiscall **)(_DWORD *))(*this[1] + 1672))(this[1]) & 1) != 0 )
  {
    v7 = 49;
    if ( ((*(int (__thiscall **)(_DWORD *))(*this[1] + 1672))(this[1]) & 2) != 0 )
      v7 = 51;
  }
  if ( a7 )
    v7 |= 0x100u;
  if ( !v9
    || !((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[9])(this)
    || (result = ((int (__thiscall *)(_DWORD **, int, int, int, int, int, int, _DWORD))(*this)[5])(
                   this,
                   a2,
                   a3,
                   a4,
                   8,
                   -1,
                   v7,
                   LODWORD(a5))) == 0 )
  {
    result = ((int (__thiscall *)(_DWORD **, int, int, int, _DWORD))(*this)[4])(this, a2, a3, v7, LODWORD(a5));
  }
  *((_BYTE *)this + 16) = 0;
  return result;
}
