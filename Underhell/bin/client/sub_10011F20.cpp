char __thiscall sub_10011F20(_DWORD *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax

  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 788))(this);
  if ( !sub_1000A790(this, a2, a3) )
    return 0;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)a2 + 796))(a2, this);
  if ( v4 )
  {
    v5 = *this;
    v6 = (*(int (__thiscall **)(_DWORD *))(*this + 788))(this);
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int, int))(v5 + 932))(this, v4, v6) )
    {
      v7 = *this;
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 908))(v4);
      (*(void (__thiscall **)(_DWORD *, int))(v7 + 928))(this, v8);
    }
  }
  v9 = sub_10045780(a3);
  if ( v9 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 772))(v9, 32);
  sub_100423B0(this);
  return 1;
}
