bool __thiscall sub_10389850(void *this)
{
  int v2; // eax
  int v3; // eax
  bool result; // al

  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
  result = 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
  {
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int, void *))(*(_DWORD *)v3 + 876))(v3, this) )
      return 1;
  }
  return result;
}
