bool __thiscall sub_100426D0(_BYTE *this, char a2, int a3, int a4)
{
  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 844))(this) )
    return ((**(int (__thiscall ***)(int, char *, _DWORD))dword_104131A0)(dword_104131A0, &a2, 0) & 0x4030) != 0;
  else
    return this[320] >= 3u;
}
