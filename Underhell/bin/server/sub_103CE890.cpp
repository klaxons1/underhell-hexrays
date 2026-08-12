char __userpurge sub_103CE890@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, float a3, char a4, float a5, char a6)
{
  int v7; // eax
  int v8; // edx
  void (__noreturn ***v9)(); // eax
  void (__noreturn ***v10)(); // eax

  v7 = a1[64] >> 27;
  if ( (a1[64] & 0x8000000) == 0 )
  {
    LOBYTE(v7) = (*(int (__thiscall **)(_DWORD *))(*a1 + 264))(a1);
    if ( (_BYTE)v7 )
    {
      sub_1032F830((int)a1, a2, (int)a1, a3, a4, a5, a6);
      LOBYTE(v7) = sub_10265BA0();
      if ( !(_BYTE)v7 )
      {
        sub_100352C0((int)a1, v8, 2);
        LOBYTE(v7) = (*(int (__thiscall **)(_DWORD *, void *, int))(*a1 + 2324))(a1, &unk_1067DC20, 3);
        if ( a1[943] )
        {
          v9 = sub_1023DBA0();
          ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v9)[11])(v9, a1[943], 120.0, 1.0);
          v10 = sub_1023DBA0();
          LOBYTE(v7) = ((int (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, _DWORD))(*v10)[12])(
                         v10,
                         a1[943],
                         1.0,
                         1.0);
        }
      }
    }
  }
  return v7;
}
