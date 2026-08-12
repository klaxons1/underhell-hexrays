int __thiscall sub_100AAD00(_DWORD *this)
{
  int v2; // ecx
  double v3; // st7
  int result; // eax
  unsigned __int8 v5; // al
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // edx

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 140))(this) )
    sub_100A9EF0(this);
  v2 = this[1];
  v3 = 0.0;
  if ( 0.0 != *(float *)(v2 + 4212) )
  {
    sub_100A8080(this);
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 112))(this, 0, 0);
    return (*(int (__thiscall **)(_DWORD *))(*this + 140))(this);
  }
  v5 = *(_BYTE *)(v2 + 320);
  if ( v5 < 2u )
  {
    v8 = this[2];
    if ( (*(_BYTE *)(v8 + 36) & 2) != 0 )
      (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
    else
      *(_DWORD *)(v8 + 40) &= ~2u;
    if ( sub_100F7AF0(this[1]) )
    {
      *(float *)(this[2] + 72) = 0.0;
      sub_100A8430(this);
    }
    sub_100A8BB0(this);
    v9 = sub_100F7AF0(this[1]);
    v10 = *this;
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(v10 + 84))(this);
    else
      (*(void (__fastcall **)(_DWORD *))(v10 + 72))(this);
    (*(void (__thiscall **)(_DWORD *))(*this + 144))(this);
    sub_100A8BB0(this);
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 140))(this) )
      sub_100AA660(this);
    if ( sub_100F7AF0(this[1]) )
      *(float *)(this[2] + 72) = 0.0;
    (*(void (__thiscall **)(_DWORD *))(*this + 156))(this);
  }
  else
  {
    if ( v5 == 2 )
    {
      (*(void (__thiscall **)(_DWORD *))(*this + 60))(this);
      v3 = 0.0;
    }
    if ( v3 > *(float *)(this[2] + 72) )
    {
      v6 = this[1];
      if ( v3 != *(float *)(v6 + 4212) )
        *(float *)(v6 + 4212) = v3;
    }
    v7 = this[2];
    if ( (*(_BYTE *)(v7 + 36) & 2) != 0 )
      (*(void (__thiscall **)(_DWORD *))(*this + 100))(this);
    else
      *(_DWORD *)(v7 + 40) &= ~2u;
    (*(void (__thiscall **)(_DWORD *))(*this + 64))(this);
    (*(void (__thiscall **)(_DWORD *))(*this + 144))(this);
    if ( sub_100F7AF0(this[1]) )
      *(float *)(this[2] + 72) = 0.0;
  }
  result = this[3];
  if ( result )
  {
    if ( *(_BYTE *)(this[1] + 320) )
      return result;
    return (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_10434620 + 20))(
             dword_10434620,
             this[2] + 152,
             "Player.Swim");
  }
  if ( *(_BYTE *)(this[1] + 320) )
    return (*(int (__thiscall **)(int, int, const char *))(*(_DWORD *)dword_10434620 + 20))(
             dword_10434620,
             this[2] + 152,
             "Player.Swim");
  return result;
}
