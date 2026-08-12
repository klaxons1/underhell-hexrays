int __thiscall sub_100813F0(_DWORD **this)
{
  int v2; // eax

  v2 = sub_101B9A20();
  if ( v2 )
    (*(void (__thiscall **)(_DWORD *, int))(*this[3] + 152))(this[3], v2);
  (*(void (__thiscall **)(_DWORD *, int))(*this[3] + 516))(this[3], 1);
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this[3] + 232))(this[3], this[5]);
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_1047CA6C + 200))(dword_1047CA6C, this[5]);
  (*(void (__thiscall **)(_DWORD *, int))(*this[3] + 124))(this[3], 1);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this[3] + 532))(this[3]) )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[3] + 48))(this[3], 0);
  return ((int (__thiscall *)(_DWORD **))(*this)[7])(this);
}
