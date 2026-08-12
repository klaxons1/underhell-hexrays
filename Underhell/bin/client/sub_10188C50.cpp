int __thiscall sub_10188C50(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax
  _DWORD **v5; // ecx

  result = sub_10236340(this - 107);
  if ( (_BYTE)result != (_BYTE)a2 )
  {
    v4 = (int)*(this - 107);
    v5 = this - 107;
    if ( (_BYTE)a2 )
    {
      (*(void (__thiscall **)(_DWORD **))(v4 + 872))(v5);
      ((void (__thiscall *)(_DWORD **, int))(*(this - 107))[130])(this - 107, 1);
      ((void (__thiscall *)(_DWORD **, int))(*(this - 107))[131])(this - 107, 1);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD **, _DWORD))(v4 + 124))(v5, 0);
      ((void (__thiscall *)(_DWORD **, _DWORD))(*(this - 107))[130])(this - 107, 0);
      ((void (__thiscall *)(_DWORD **, _DWORD))(*(this - 107))[131])(this - 107, 0);
    }
    LOBYTE(a2) = 1;
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
    {
      sub_100B1EE0();
      LOBYTE(a2) = !sub_100B2B20();
    }
    (*(void (__thiscall **)(_DWORD *, int))(*this[7] + 124))(this[7], a2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[8] + 124))(this[8], a2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[4] + 124))(this[4], a2);
    return (*(int (__thiscall **)(_DWORD *, int))(*this[5] + 124))(this[5], a2);
  }
  return result;
}
