int __thiscall sub_1024D8F0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA68 + 80))(dword_1047CA68);
  if ( this[101] )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA68 + 76))(dword_1047CA68, this[101]);
    this[101] = 0;
  }
  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"Close");
  else
    v3 = 0;
  return (*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD *, _DWORD))(*this + 132))(this, this, v3, 0.0);
}
