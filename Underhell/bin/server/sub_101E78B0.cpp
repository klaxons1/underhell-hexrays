const char *__thiscall sub_101E78B0(_DWORD *this)
{
  int v1; // edi
  char *v3; // eax

  v1 = this[1];
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 1612))(v1) )
    return "__BOT__";
  if ( v1 == -4426 )
    return "NULLID";
  v3 = (char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 64))(
                 dword_106B31D0,
                 *(_DWORD *)(v1 + 24));
  sub_104299C0((char *)(v1 + 4426), v3, 0x40u);
  return (const char *)(v1 + 4426);
}
