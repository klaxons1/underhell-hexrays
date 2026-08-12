int __thiscall sub_104078B0(char *this, int a2)
{
  bool v4; // bl
  int v5; // edi

  if ( (*(_DWORD *)(a2 + 64) & 0x82000000) == 0 )
    return 0;
  v4 = *((_DWORD *)this + 55) <= (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1156))(this);
  v5 = sub_100CB580(this, a2);
  if ( !v4 && *((_DWORD *)this + 55) <= (*(int (__thiscall **)(char *))(*(_DWORD *)this + 1156))(this) )
    sub_10407090((int)this);
  return v5;
}
