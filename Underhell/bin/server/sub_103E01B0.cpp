void __thiscall sub_103E01B0(int this)
{
  double v2; // st7
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int v6; // [esp+14h] [ebp-4h]
  float v7; // [esp+14h] [ebp-4h]

  v6 = *(_DWORD *)(this + 1164);
  v2 = (double)v6
     / (double)(int)(*(float *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 1160) + 12))(*(_DWORD *)(this + 1160))
                              + 516)
                   * 0.056818184);
  if ( v2 <= 1.0 )
  {
    if ( v2 < 0.0 )
      v2 = 0.0;
  }
  else
  {
    v2 = 1.0;
  }
  v3 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( v4 && *v4 )
    v5 = *(_DWORD *)(this + 1100);
  else
    v5 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 104))(v3);
  v7 = v2;
  sub_100C1460((_DWORD *)this, v5, "Gauge", v7);
}
