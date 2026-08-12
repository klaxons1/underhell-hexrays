void __thiscall sub_103B0A00(int this, float a2)
{
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // [esp+10h] [ebp-4h]

  if ( a2 <= 490.0 )
  {
    if ( a2 < 200.0 )
      a2 = 200.0;
  }
  else
  {
    a2 = 490.0;
  }
  v3 = dword_10700AC8;
  v6 = dword_106EAD9C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  sub_100BE7D0((_DWORD *)this, v5, v6, a2);
}
