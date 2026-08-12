int __thiscall sub_102522F0(_BYTE *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int (__thiscall *v4)(_BYTE *, _DWORD, _DWORD); // eax

  v2 = (_DWORD *)sub_10229D00(32);
  if ( v2 )
    v3 = sub_10229D20(v2, (int)"TextChanged");
  else
    v3 = 0;
  (*(void (__thiscall **)(_BYTE *, _DWORD *))(*(_DWORD *)this + 180))(this, v3);
  v4 = *(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 244);
  this[340] = 0;
  return v4(this, 0, 0);
}
