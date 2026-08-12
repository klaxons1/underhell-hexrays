void __thiscall sub_1024B5F0(void *this, int a2)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  if ( a2 == 64 )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 844))(this);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
    if ( v4
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 60))(dword_1047CA70, v4)
      && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA70 + 220))(dword_1047CA70, v4) )
    {
      v5 = (_DWORD *)sub_10229D00(32);
      if ( v5 )
        v6 = sub_10229D20(v5, (int)"Hotkey");
      else
        v6 = 0;
      (*(void (__thiscall **)(void *, int, _DWORD *, _DWORD))(*(_DWORD *)this + 136))(this, v4, v6, 0.0);
    }
    else
    {
      sub_10236CD0(this, 64);
    }
  }
  else
  {
    sub_10236CD0(this, a2);
  }
}
