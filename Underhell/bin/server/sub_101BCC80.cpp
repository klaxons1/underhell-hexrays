void __thiscall sub_101BCC80(_DWORD *this, int a2, int a3)
{
  unsigned int v3; // eax
  int *v4; // ecx
  _DWORD *v5; // esi
  int v6; // edi
  int v7; // [esp-10h] [ebp-10h]

  v3 = this[103];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[103] & 0xFFF) + 1];
    if ( v4[1] == v3 >> 12 )
    {
      v5 = (_DWORD *)*v4;
      if ( *v4 )
      {
        v6 = v5[106];
        v7 = *(_DWORD *)(a3 + 4 * a2);
        if ( v6 )
          sub_100D6020(v5, v7);
        else
          sub_100E9500(v5, v7);
        (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 604))(v5, a2, a3);
        sub_100D6020(v5, v6);
      }
    }
  }
}
