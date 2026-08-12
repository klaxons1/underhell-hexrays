int __thiscall sub_10237610(void *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  v3 = (_DWORD *)sub_10229D00(32);
  if ( !v3 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 180))(this, 0);
  v4 = sub_10229D20(v3, a2);
  return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 180))(this, v4);
}
