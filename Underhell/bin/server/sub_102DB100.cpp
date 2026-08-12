bool __thiscall sub_102DB100(_DWORD *this, _DWORD *a2)
{
  bool result; // al
  int v4; // eax
  const char *v5; // ebx
  int v6; // eax
  int v7; // eax

  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 1092))(this) || (result = sub_100F5970(this)) )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 988))(a2) )
      return 0;
    if ( !sub_100CF460(this) )
      return 1;
    v4 = sub_100CF460(this);
    if ( (_DWORD *)sub_103FA8C0(v4) == a2 )
    {
      v5 = (const char *)a2[23];
      if ( !v5 )
        v5 = String;
      v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 856))(a2);
      if ( sub_100CF660(this, (int)v5, v6) )
        return 1;
    }
    v7 = sub_100CF460(this);
    return (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 980))(v7) != 0;
  }
  return result;
}
