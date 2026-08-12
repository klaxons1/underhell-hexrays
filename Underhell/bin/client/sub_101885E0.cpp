int __thiscall sub_101885E0(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // eax
  _DWORD **v5; // ecx

  result = sub_10236340(this - 107);
  if ( (_BYTE)result != (_BYTE)a2 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this[2] + 12))(this[2], a2);
    v4 = (int)*(this - 107);
    v5 = this - 107;
    if ( (_BYTE)a2 )
    {
      (*(void (__thiscall **)(_DWORD **))(v4 + 872))(v5);
      return ((int (__thiscall *)(_DWORD **, int))(*(this - 107))[130])(this - 107, 1);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD **, _DWORD))(v4 + 124))(v5, 0);
      return ((int (__thiscall *)(_DWORD **, _DWORD))(*(this - 107))[130])(this - 107, 0);
    }
  }
  return result;
}
