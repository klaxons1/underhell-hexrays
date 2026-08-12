int __thiscall sub_100BE180(int this, int a2, float *a3)
{
  int v3; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // ebx

  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v5 = *(_DWORD **)(this + 1100);
  if ( v5 && *v5 )
    v6 = *(_DWORD **)(this + 1100);
  else
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  return sub_100BA880(v6, a2, this + 912, a3);
}
