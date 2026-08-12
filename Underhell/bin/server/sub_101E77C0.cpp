const char *__thiscall sub_101E77C0(char *this)
{
  char *v3; // eax

  if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 1612))(this) )
    return "__BOT__";
  if ( this == (char *)-4426 )
    return "NULLID";
  v3 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 64))(
                 dword_106B31D0,
                 *((_DWORD *)this + 6));
  sub_104299C0(this + 4426, v3, 0x40u);
  return this + 4426;
}
