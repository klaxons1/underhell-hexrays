BOOL __thiscall sub_103213F0(void *this)
{
  int v2; // eax
  BOOL result; // eax

  result = 0;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
      return 1;
  }
  return result;
}
