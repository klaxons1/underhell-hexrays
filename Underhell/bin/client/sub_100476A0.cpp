char __thiscall sub_100476A0(_DWORD *this)
{
  char *v2; // esi
  int v3; // eax
  char result; // al
  int v5; // eax
  int v6; // eax
  int v7; // edi

  v2 = (char *)(this - 1);
  v3 = (*(int (__thiscall **)(_DWORD *))(*(this - 1) + 776))(this - 1);
  if ( !v3 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 1272))(v3)) != 0 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 320))(dword_1041315C) )
    {
      v5 = sub_100B1EE0();
      result = 0;
      if ( sub_100B1EF0(v5) == 4 )
      {
        v6 = sub_100B1EE0();
        v7 = sub_100B1FF0(v6);
        if ( v7 == (*(int (__thiscall **)(char *))(*(_DWORD *)v2 + 764))(v2) )
          return 1;
      }
    }
    else
    {
      return sub_100358B0((int)this);
    }
  }
  return result;
}
