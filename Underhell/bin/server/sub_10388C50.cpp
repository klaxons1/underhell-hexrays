int __thiscall sub_10388C50(void *this)
{
  int v1; // esi
  int result; // eax

  v1 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  if ( !v1 )
    return v1;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v1 + 320))(v1) )
    return v1;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 1096))(v1);
  if ( !result )
    return v1;
  return result;
}
