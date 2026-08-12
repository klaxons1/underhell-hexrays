void __stdcall sub_10155440(int a1, int a2, int a3)
{
  _DWORD *i; // esi
  int v4; // edi

  if ( !byte_106B3251 )
  {
    if ( sub_1012CEC0() )
      Msg("ERROR: Entity delete queue not empty on level start!\n");
    for ( i = (_DWORD *)sub_1012BC10(&dword_1069E3E0, 0); i; i = (_DWORD *)sub_1012BC10(&dword_1069E3E0, (int)i) )
    {
      if ( !sub_100D62D0(i) )
      {
        v4 = dword_10700AC8;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
        (*(void (__thiscall **)(_DWORD *))(*i + 136))(i);
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
      }
    }
    sub_10170040();
    sub_100E8660(0);
    if ( !*(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) )
      sub_10110F90(&dword_106BA718);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 16))(dword_106B8370);
  }
}
