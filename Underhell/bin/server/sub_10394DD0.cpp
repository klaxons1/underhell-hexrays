BOOL __thiscall sub_10394DD0(void *this)
{
  int v2; // eax
  const char *v3; // eax
  const char *v4; // ecx
  const char *v5; // ecx

  if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
    return 0;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  if ( !v2 )
    return 0;
  v3 = *(const char **)(v2 + 92);
  if ( !v3 )
    v3 = String;
  v4 = (const char *)dword_106EA240;
  if ( !dword_106EA240 )
    v4 = String;
  if ( v3 == v4 )
    return 1;
  v5 = (const char *)dword_106EA23C;
  if ( !dword_106EA23C )
    v5 = String;
  return v3 == v5;
}
