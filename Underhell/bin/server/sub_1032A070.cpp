bool __thiscall sub_1032A070(void *this)
{
  int v2; // eax
  int v3; // eax
  bool result; // al

  result = 0;
  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    {
      v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 368))(this);
      if ( v3 )
      {
        if ( *(_BYTE *)(v3 + 2329) )
          return 1;
      }
    }
  }
  return result;
}
