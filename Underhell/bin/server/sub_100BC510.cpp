_DWORD *__thiscall sub_100BC510(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  int v4; // ebx
  int v5; // eax

  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 20))(this);
  if ( (_BYTE)result )
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_106B31F8 + 24))(
                         dword_106B31F8,
                         "achievement_event",
                         0);
    v3 = result;
    if ( result )
    {
      v4 = *result;
      v5 = (*(int (__thiscall **)(_DWORD *))(this[2] + 4))(this + 2);
      (*(void (__thiscall **)(_DWORD *, const char *, int))(v4 + 48))(v3, "achievement_name", v5);
      (*(void (__thiscall **)(_DWORD *, const char *, _DWORD))(*v3 + 40))(v3, "cur_val", this[22]);
      (*(void (__thiscall **)(_DWORD *, const char *, _DWORD))(*v3 + 40))(v3, "max_val", this[6]);
      return (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)dword_106B31F8 + 28))(
                         dword_106B31F8,
                         v3,
                         0);
    }
  }
  return result;
}
