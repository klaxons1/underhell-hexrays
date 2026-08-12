void __thiscall sub_101F98F0(float *this, int a2)
{
  float *v3; // esi
  bool v4; // zf
  int v5; // ecx
  int v6; // eax

  v3 = &this[6 * a2 + 1110];
  if ( this[9] != *v3 )
  {
    v4 = *((_DWORD *)v3 + 4) == 0;
    *v3 = this[9];
    if ( v4 )
      *((_DWORD *)v3 + 4) = sub_100DDA40(9216);
    if ( !*((_DWORD *)v3 + 5) )
      *((_DWORD *)v3 + 5) = sub_100DDA40(9216);
    v5 = *((_DWORD *)v3 + 2);
    v3[1] = *v3;
    *((_DWORD *)v3 + 3) = v5;
    v6 = *((_DWORD *)v3 + 4);
    v3[4] = v3[5];
    *((_DWORD *)v3 + 5) = v6;
    *((_DWORD *)v3 + 2) = (*(int (__thiscall **)(_DWORD, float *, int, int, _DWORD))(**((_DWORD **)off_103EE614 + 60)
                                                                                   + 44))(
                            *((_DWORD *)off_103EE614 + 60),
                            this,
                            a2,
                            128,
                            *((_DWORD *)v3 + 4));
  }
}
