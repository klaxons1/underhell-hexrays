int __thiscall sub_10324DC0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // eax

  result = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( result )
  {
    v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
    {
      v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( v5 )
      {
        this[2475] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
        return sub_103244B0((int)this, 0);
      }
      this[2475] = -1;
    }
    return sub_103244B0((int)this, 0);
  }
  return result;
}
