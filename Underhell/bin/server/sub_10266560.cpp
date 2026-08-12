void __thiscall sub_10266560(_DWORD **this, _DWORD *a2, int a3, int a4, float a5)
{
  int v6; // eax
  char v7; // fps^1
  bool v8; // c0
  char v9; // c2
  bool v10; // c3

  if ( a2 )
  {
    v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 320))(a2);
    if ( (_BYTE)v6 )
    {
      a2[824] &= ~0x20u;
      v8 = a5 > 0.0;
      v9 = 0;
      v10 = 0.0 == a5;
      BYTE1(v6) = v7;
      LOBYTE(v6) = v8;
      (*(void (__thiscall **)(_DWORD *, _DWORD *, int))(*this[373] + 68))(this[373], a2, v6);
    }
  }
}
