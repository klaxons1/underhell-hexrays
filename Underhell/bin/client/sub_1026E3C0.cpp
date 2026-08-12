int __thiscall sub_1026E3C0(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  (*(void (__thiscall **)(void *))(*(_DWORD *)this + 1068))(this);
  v2 = (_DWORD *)sub_10229D00(32);
  if ( !v2 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 180))(this, 0);
  v3 = sub_10229D20(v2, (int)"MenuClose");
  return (*(int (__thiscall **)(void *, _DWORD *))(*(_DWORD *)this + 180))(this, v3);
}
