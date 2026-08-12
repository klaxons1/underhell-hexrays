void __thiscall sub_10025300(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // edi

  CVProfile::EnterScope(g_VProfCurrentProfile, "CAI_BaseNPC_RunAnimation", 0, "Server Animation", 0, 4);
  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v3 = (_DWORD *)this[275];
  if ( v3 && *v3 )
    v4 = this[275];
  else
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v4 )
  {
    sub_100BD360(this);
    (*(void (__thiscall **)(_DWORD *))(*this + 728))(this);
    if ( (dword_1069042C & 2) != 0 )
      sub_1007E040(this[647]);
    v5 = this[581];
    if ( v5 != 4 && v5 != 7 && this[593] == 1 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 732))(this) )
    {
      if ( *((_BYTE *)this + 897) )
        v6 = sub_100BDCE0(this[594]);
      else
        v6 = sub_100BDE80(this[594]);
      v7 = v6;
      if ( v6 != -1 )
      {
        sub_100C3330(v6);
        if ( *(_DWORD *)(dword_10698344 + 48) )
          this[596] = v7;
      }
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 784))(this, this);
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
  else
  {
    CVProfile::ExitScope(g_VProfCurrentProfile);
  }
}
