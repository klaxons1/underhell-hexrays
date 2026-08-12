int __thiscall sub_102574A0(_DWORD *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax

  v2 = this[95];
  if ( v2 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 120))(v2, 1);
  v3 = sub_100DDA40(392);
  if ( v3 )
    v4 = sub_1026D6B0(v3, (int)this, "EditMenu");
  else
    v4 = 0;
  this[95] = v4;
  v5 = (_DWORD *)sub_10229D00(32);
  if ( v5 )
    v6 = sub_10229D20(v5, (int)"DoCopySelected");
  else
    v6 = 0;
  (*(void (__thiscall **)(_DWORD, const char *, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)this[95] + 780))(
    this[95],
    "C&opy",
    v6,
    this,
    0);
  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[95] + 124))(this[95], 0);
  (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[95] + 156))(this[95], this);
  return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[95] + 172))(this[95], this);
}
