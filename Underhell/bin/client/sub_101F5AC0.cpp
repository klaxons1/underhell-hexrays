void __thiscall sub_101F5AC0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // [esp+4h] [ebp-Ch]

  if ( !this[64] )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 48))(this, 0);
    if ( !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80)
      && !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 84)
        || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 83) )
      {
        v3 = a2;
        (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 868))(this, 3, 1, a2);
      }
      else
      {
        v3 = a2;
        switch ( a2 )
        {
          case 'k':
            (*(void (__thiscall **)(_DWORD *, _DWORD, int, int))(*this + 868))(this, 0, 1, 107);
            break;
          case 'l':
            (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 868))(this, 2, 1, 108);
            break;
          case 'm':
            v4 = 109;
LABEL_14:
            (*(void (__thiscall **)(_DWORD *, int, int, int))(*this + 868))(this, 1, 1, v4);
            break;
        }
      }
      nullsub_5(v3);
      return;
    }
    v3 = a2;
    v4 = a2;
    goto LABEL_14;
  }
}
