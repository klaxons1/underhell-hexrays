void __stdcall sub_10155500(char a1)
{
  int v1; // edi
  int i; // esi
  int v3; // eax
  _DWORD v4[3]; // [esp+0h] [ebp-10h]
  float v5; // [esp+Ch] [ebp-4h]

  if ( !byte_106B3251 )
  {
    if ( sub_100EA2A0() )
    {
      if ( (*(_BYTE *)(dword_106B31C8 + 24) & 1) != 0 )
      {
        sub_101FD180();
        return;
      }
      *(float *)(dword_106B31C8 + 16) = *(float *)(dword_106B31C8 + 16) + *(float *)(dword_106B31C8 + 16);
    }
    v5 = *(float *)(dword_106B31C8 + 16);
    sub_1012CE60();
    sub_101700B0();
    sub_102D6F20();
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B8370 + 12))(dword_106B8370);
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31CC + 8))(dword_106B31CC);
    ((void (__thiscall *)(_UNKNOWN ***))(*off_1064A4E0)[1])(off_1064A4E0);
    sub_101C2DB0(a1);
    sub_101700C0();
    sub_1010CE50();
    sub_1012CE60();
    sub_101FD180();
    if ( dword_106B3CDC )
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 168))(dword_106B3CDC);
    if ( *(_DWORD *)(dword_106B34C4 + 48) )
    {
      v1 = 0;
      for ( i = 0; i < 3; ++i )
      {
        v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31F4 + 48))(dword_106B31F4, i, 1);
        v4[i] = v3;
        if ( v3 > 0 )
          v1 += v3;
      }
      if ( v1 )
        Msg("Trace: %d, contents %d, enumerate %d\n", v4[0], v4[1], v4[2]);
    }
    sub_1024D9B0(&unk_106B3290);
    *(float *)(dword_106B31C8 + 16) = v5;
  }
}
