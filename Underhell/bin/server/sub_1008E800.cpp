bool __thiscall sub_1008E800(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int v6; // eax
  bool result; // al

  v5 = (_DWORD *)sub_100D7680(a4);
  result = 0;
  if ( v5 )
  {
    if ( v5[6] )
    {
      v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v5 + 1080))(v5, this[1]);
      if ( v6 == 3 || v6 == 4 )
        return 1;
    }
  }
  return result;
}
