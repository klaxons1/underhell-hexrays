int __thiscall sub_100922A0(_DWORD **this, char *String1)
{
  if ( _stricmp(String1, "vguicancel") )
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, String1);
  ((void (__thiscall *)(_DWORD **))(*this)[220])(this);
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this[109] + 12))(this[109], 0);
  return sub_1024EC70(String1);
}
