int __thiscall sub_10270470(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"Close");
  else
    v3 = 0;
  return (*(int (__thiscall **)(void *, void *, _DWORD *, _DWORD))(*(_DWORD *)this + 132))(this, this, v3, 0.0);
}
