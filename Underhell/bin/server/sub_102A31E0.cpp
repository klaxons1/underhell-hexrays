void __usercall sub_102A31E0(int a1@<ecx>, int a2@<edi>)
{
  double v2; // st7
  double v3; // st7
  int v4; // esi
  double v5; // st7
  int v6; // edi
  _DWORD *v7; // eax
  int v8; // ebx
  float v10; // [esp+10h] [ebp-4h]

  v2 = (*(float *)(a1 + 52) - 100.0) * -0.0049999999;
  v3 = (3.0 * (v2 * v2) - v2 * (v2 * v2 * 2.0)) * 2.0 - 1.0;
  if ( v3 <= 1.0 )
  {
    if ( v3 < -1.0 )
      v3 = -1.0;
  }
  else
  {
    v3 = 1.0;
  }
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(float *)(a1 + 164) * 0.2 + v3 * 0.80000001;
  *(float *)(a1 + 164) = v5;
  v6 = dword_10700AC8;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8, a2);
  if ( !*(_DWORD *)(v4 + 1100) && sub_100D7240((void *)v4) )
    sub_100BD750((volatile signed __int32 *)v4);
  v7 = *(_DWORD **)(v4 + 1100);
  if ( v7 && *v7 )
    v8 = *(_DWORD *)(v4 + 1100);
  else
    v8 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 104))(v6);
  v10 = v5;
  sub_100C1460((_DWORD *)v4, v8, "vehicle_lean", v10);
}
