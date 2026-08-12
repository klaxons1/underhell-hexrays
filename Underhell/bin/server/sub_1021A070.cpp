void __thiscall sub_1021A070(_BYTE *this)
{
  int (*v1)(void); // edx
  int v2; // edi
  int v3; // [esp+4h] [ebp-4h] BYREF

  if ( !this[28] )
  {
    v1 = *(int (**)(void))(*(_DWORD *)this + 12);
    this[28] = 1;
    if ( v1() )
    {
      if ( dword_10646078 <= 0 )
      {
        v2 = dword_10646074;
        if ( dword_10646074 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_10646074 + 320))(dword_10646074) )
          {
            v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                   dword_106B31D0,
                   *(_DWORD *)(v2 + 24));
            sub_1023E0F0(&v3);
          }
        }
      }
    }
  }
}
