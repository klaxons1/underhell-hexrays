int __thiscall sub_100BDFA0(int this, int a2)
{
  int v2; // esi
  _DWORD *v4; // edi
  int v5; // ebx
  int v6; // esi
  int v7; // edi
  int v8; // eax
  char *v9; // eax

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  v5 = sub_10100E90(v4, a2);
  if ( v5 )
  {
    if ( sub_1042A310(32) )
      v6 = sub_1042A330(String);
    else
      v6 = 0;
    v7 = *(_DWORD *)dword_106B31F0;
    v8 = sub_100D7240(this);
    v9 = (char *)(*(int (__thiscall **)(int, int))(v7 + 12))(dword_106B31F0, v8);
    if ( (unsigned __int8)sub_1042BFB0(v9, v5, 0, 0) )
      return v6;
    sub_1042B1A0(v6);
  }
  return 0;
}
