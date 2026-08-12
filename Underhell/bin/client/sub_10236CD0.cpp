void __thiscall sub_10236CD0(void *this, int a2)
{
  int v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  if ( a2 == 67 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 79)
      || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 60))(dword_1047CA68, 80) )
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 52))(this, 0);
    }
    else
    {
      (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 56))(this, 0);
    }
  }
  else
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 24))(dword_1047CA6C);
    if ( (**(int (__thiscall ***)(void *))this)(this) == v3 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA68 + 220))(dword_1047CA68, a2);
    v4 = (_DWORD *)sub_10229D00(32);
    if ( v4 )
    {
      v5 = sub_1022B1A0(v4, (int)"KeyCodeTyped", "code", a2);
      sub_10236860(this, v5);
    }
    else
    {
      sub_10236860(this, 0);
    }
  }
}
