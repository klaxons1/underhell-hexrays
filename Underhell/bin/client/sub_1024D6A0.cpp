int __thiscall sub_1024D6A0(_DWORD **this)
{
  char v2; // al
  void (__stdcall *v3)(int); // edx

  v2 = ((int (__thiscall *)(_DWORD **))(*this)[227])(this);
  v3 = *(void (__stdcall **)(int))(*this[73] + 232);
  if ( v2 )
  {
    v3(11);
    (*(void (__thiscall **)(_DWORD *, int))(*this[74] + 232))(this[74], 11);
    (*(void (__thiscall **)(_DWORD *, int))(*this[75] + 232))(this[75], 10);
    (*(void (__thiscall **)(_DWORD *, int))(*this[76] + 232))(this[76], 10);
    (*(void (__thiscall **)(_DWORD *, int))(*this[77] + 232))(this[77], 8);
    (*(void (__thiscall **)(_DWORD *, int))(*this[78] + 232))(this[78], 9);
    (*(void (__thiscall **)(_DWORD *, int))(*this[79] + 232))(this[79], 9);
    (*(void (__thiscall **)(_DWORD *, int))(*this[80] + 232))(this[80], 8);
    (*(void (__thiscall **)(_DWORD *, int))(*this[80] + 268))(this[80], 1);
    return (*(int (__thiscall **)(_DWORD *, int))(*this[80] + 264))(this[80], 1);
  }
  else
  {
    v3(2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[74] + 232))(this[74], 2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[75] + 232))(this[75], 2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[76] + 232))(this[76], 2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[77] + 232))(this[77], 2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[78] + 232))(this[78], 2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[79] + 232))(this[79], 2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[80] + 232))(this[80], 2);
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[80] + 268))(this[80], 0);
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this[80] + 264))(this[80], 0);
  }
}
