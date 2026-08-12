void __thiscall sub_1024AFD0(_BYTE *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  int v10; // eax

  if ( !this[56] )
  {
    if ( a3[11] == -1 || off_1061BE18[4 * (a3[11] & 0xFFF) + 2] != a3[11] >> 12 )
      v4 = 0;
    else
      v4 = (_DWORD *)off_1061BE18[4 * (a3[11] & 0xFFF) + 1];
    if ( a2
      && v4
      && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v4 + 320))(v4)
      && v4 != a2
      && (*(int (__thiscall **)(_BYTE *, _DWORD *, _DWORD *))(*(_DWORD *)this + 408))(this, a2, v4) == 1 )
    {
      v5 = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
                       dword_106B31F8,
                       "player_death",
                       0);
      v6 = v5;
      if ( v5 )
      {
        v7 = *v5;
        v8 = sub_1010ED80(v4);
        (*(void (__thiscall **)(_DWORD *, const char *, int))(v7 + 40))(v6, "killer", v8);
        v9 = *v6;
        v10 = sub_1010ED80(a2);
        (*(void (__thiscall **)(_DWORD *, const char *, int))(v9 + 40))(v6, "victim", v10);
        (*(void (__thiscall **)(_DWORD *, const char *, int))(*v6 + 40))(v6, "priority", 7);
        (*(void (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(dword_106B31F8, v6, 0);
      }
    }
    else
    {
      sub_10189A60(this, (int)a2, a3);
    }
  }
}
