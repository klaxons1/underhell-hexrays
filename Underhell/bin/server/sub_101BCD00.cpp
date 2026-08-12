void __thiscall sub_101BCD00(_DWORD *this, int a2, float a3, int a4, int a5)
{
  unsigned int v5; // eax
  int *v6; // ecx
  _DWORD *v7; // esi
  int v8; // ebx

  v5 = this[103];
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v6[1] == v5 >> 12 )
    {
      v7 = (_DWORD *)*v6;
      if ( *v6 )
      {
        v8 = v7[106];
        if ( v8 )
          sub_100D6020(v7, a2);
        else
          sub_100E9500(v7, a2);
        (*(void (__thiscall **)(_DWORD *, int, _DWORD, int, int))(*v7 + 616))(v7, a2, LODWORD(a3), a4, a5);
        sub_100D6020(v7, v8);
      }
    }
  }
}
