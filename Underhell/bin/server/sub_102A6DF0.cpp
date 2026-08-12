int __thiscall sub_102A6DF0(int this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  bool v9; // zf
  int (__thiscall *v10)(int); // eax
  int v11; // eax
  int v12; // eax
  int result; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax

  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
  {
    if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4))
      || (v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)),
          (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 288))(v2)) == 0)
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 1088))(v3) )
    {
      v4 = *(_DWORD *)(this + 16);
      if ( v4 == 2 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
        v6 = sub_1007DB30((_DWORD *)(v5 + 52), 100002);
        sub_10023CB0(*(char **)(this + 4), v6);
      }
      else if ( !v4 )
      {
        sub_102A0280(this);
        return sub_102A07F0((_DWORD *)this);
      }
    }
  }
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
  v8 = sub_1007DB30((_DWORD *)(v7 + 52), 100001);
  v9 = !sub_10023D10(*(_DWORD **)(this + 4), v8);
  v10 = *(int (__thiscall **)(int))(*(_DWORD *)this + 52);
  if ( v9 )
  {
    v14 = v10(this);
    v15 = sub_1007DB30((_DWORD *)(v14 + 52), 100002);
    if ( sub_10023D10(*(_DWORD **)(this + 4), v15) )
    {
      v16 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
      v17 = sub_1007DB30((_DWORD *)(v16 + 52), 100002);
      sub_10023E00(*(char **)(this + 4), v17);
      return 100008;
    }
    else
    {
      v18 = *(_DWORD *)(this + 16);
      if ( v18 == 2 )
      {
        return sub_10023D10(*(_DWORD **)(this + 4), 23) ? 100009 : 1;
      }
      else
      {
        if ( v18 )
          return 1;
        result = sub_102A6D90((_DWORD **)this);
        if ( !result )
          return 1;
      }
    }
  }
  else
  {
    v11 = v10(this);
    v12 = sub_1007DB30((_DWORD *)(v11 + 52), 100001);
    sub_10023E00(*(char **)(this + 4), v12);
    return 100007;
  }
  return result;
}
