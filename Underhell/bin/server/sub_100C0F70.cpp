double __thiscall sub_100C0F70(int this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  double v6; // st7

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  v6 = ((double (__thiscall *)(int, int, int))*(_DWORD *)(*(_DWORD *)this + 736))(this, v5, a2);
  if ( v6 <= 0.0 )
    return 10.0;
  else
    return 1.0 / v6;
}
