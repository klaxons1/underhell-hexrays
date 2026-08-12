char __thiscall sub_100BE8B0(int this, int a2, float *a3, float *a4)
{
  int v4; // edi
  _DWORD *v6; // esi
  int v7; // eax

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v6 = *(_DWORD **)(this + 1100);
  if ( !v6 || !*v6 )
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  if ( v6 && a2 >= 0 && a2 < sub_10245290(v6) )
  {
    v7 = sub_10245670(a2);
    *a3 = *(float *)(v7 + 8);
    *a4 = *(float *)(v7 + 12);
    return 1;
  }
  else
  {
    *a3 = 0.0;
    *a4 = 1.0;
    return 0;
  }
}
