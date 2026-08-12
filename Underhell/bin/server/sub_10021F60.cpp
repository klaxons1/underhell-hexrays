char __thiscall sub_10021F60(_DWORD *this)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v2 = (*(int (__thiscall **)(_DWORD *))(*this + 1184))(this);
  this[601] = v2;
  if ( !v2 )
    return 0;
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 1192))(this);
  this[651] = v4;
  if ( !v4 )
    return 0;
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 1196))(this);
  this[648] = v5;
  if ( !v5 )
    return 0;
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 1188))(this);
  this[650] = v6;
  if ( !v6 )
    return 0;
  v7 = (*(int (__thiscall **)(_DWORD *))(*this + 1200))(this);
  this[647] = v7;
  if ( !v7 )
    return 0;
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 1204))(this);
  this[649] = v8;
  if ( !v8 )
    return 0;
  v9 = (*(int (__thiscall **)(_DWORD *))(*this + 1208))(this);
  this[704] = v9;
  if ( !v9 )
    return 0;
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(this[708] + 4))(this + 708, this);
  v10 = this[648];
  if ( v10 )
    v11 = v10 + 8;
  else
    v11 = 0;
  sub_10078150(v11);
  v12 = this[647];
  if ( v12 )
    v13 = v12 + 8;
  else
    v13 = 0;
  sub_100746D0(v13);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[647] + 16))(this[647], dword_106935D8);
  sub_1008D640(dword_106935D8);
  sub_100B28E0(dword_106935D8);
  return 1;
}
