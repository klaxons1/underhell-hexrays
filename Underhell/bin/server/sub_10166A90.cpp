unsigned __int16 *__cdecl sub_10166A90(int a1, int a2, float *a3, int a4, float a5, char a6)
{
  unsigned __int16 *v6; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  int v10; // ebx
  float v11; // [esp+14h] [ebp-10h]

  v6 = (unsigned __int16 *)sub_101811E0("raggib", -1);
  sub_100E11A0((int)v6, a3);
  if ( v6 )
  {
    if ( a6 )
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)v6 + 208))(v6);
      v9 = v8;
      if ( v8 )
      {
        v10 = *v8;
        v11 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4
                                                                                             + 4))(
                dword_106B31E4,
                8.0,
                12.0,
                0,
                0.0,
                0);
        (*(void (__thiscall **)(_DWORD *, _DWORD))(v10 + 808))(v9, LODWORD(v11));
      }
    }
    sub_101665D0(v6, a1, a2, a4, a5);
    return v6;
  }
  else
  {
    Msg("**Can't create ragdoll gib!\n");
    return 0;
  }
}
