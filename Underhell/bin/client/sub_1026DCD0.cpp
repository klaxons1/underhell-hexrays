void __thiscall sub_1026DCD0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // esi
  int v5; // esi
  _DWORD *v6; // eax
  _DWORD *v7; // eax

  if ( (_WORD)a2 )
  {
    v3 = 0;
    if ( (int)this[56] > 0 )
    {
      while ( 1 )
      {
        v4 = *(_DWORD *)(this[53] + 4 * v3);
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 128))(v4) )
        {
          v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 308))(v4, a2);
          if ( v5 )
            break;
        }
        if ( ++v3 >= this[56] )
          return;
      }
      v6 = (_DWORD *)sub_10229D00(32);
      if ( v6 )
        v7 = sub_10229D20(v6, (int)"Hotkey");
      else
        v7 = 0;
      (*(void (__thiscall **)(_DWORD *, int, _DWORD *, _DWORD))(*this + 132))(this, v5, v7, 0.0);
    }
  }
}
