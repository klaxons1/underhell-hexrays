char __thiscall sub_100BF350(int this, int a2, float a3, float a4, int a5, _DWORD *a6, float *a7, _DWORD *a8)
{
  int v8; // edi
  _DWORD *v10; // esi

  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v10 = *(_DWORD **)(this + 1100);
  if ( !v10 || !*v10 )
    v10 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  return sub_100BA450((int)v10, a2, a3, a4, a5, a6, a7, a8);
}
