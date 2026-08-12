void __cdecl sub_10228950(int a1, int a2)
{
  int v2; // edx
  int (*v3)(void); // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edi

  if ( g_pCVar && !byte_10479824 )
  {
    v2 = *(_DWORD *)g_pCVar;
    dword_10479820 = a1;
    v3 = *(int (**)(void))(v2 + 20);
    byte_10479824 = 1;
    dword_103FC114 = v3();
    dword_1047981C = a2;
    if ( !a2 )
      dword_1047981C = (int)off_103FC120;
    v4 = (_DWORD *)dword_10479818;
    if ( dword_10479818 )
    {
      do
      {
        v5 = (_DWORD *)v4[1];
        (*(void (__thiscall **)(_DWORD *, int))(*v4 + 12))(v4, dword_10479820);
        (*(void (__thiscall **)(_DWORD *))(*v4 + 36))(v4);
        v4 = v5;
      }
      while ( v5 );
    }
    dword_10479818 = 0;
  }
}
