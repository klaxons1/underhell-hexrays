void __cdecl sub_1042C030(int a1, int a2)
{
  int v2; // edx
  int (*v3)(void); // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edi

  if ( g_pCVar && !byte_106FE534 )
  {
    v2 = *(_DWORD *)g_pCVar;
    dword_106FE530 = a1;
    v3 = *(int (**)(void))(v2 + 20);
    byte_106FE534 = 1;
    dword_1068E27C = v3();
    dword_106FE52C = a2;
    if ( !a2 )
      dword_106FE52C = (int)off_1068E288;
    v4 = (_DWORD *)dword_106FE528;
    if ( dword_106FE528 )
    {
      do
      {
        v5 = (_DWORD *)v4[1];
        (*(void (__thiscall **)(_DWORD *, int))(*v4 + 12))(v4, dword_106FE530);
        (*(void (__thiscall **)(_DWORD *))(*v4 + 36))(v4);
        v4 = v5;
      }
      while ( v5 );
    }
    dword_106FE528 = 0;
  }
}
