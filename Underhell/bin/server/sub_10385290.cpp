void __thiscall sub_10385290(int this)
{
  int v2; // edx
  int v3; // edx
  int v4; // ebx
  int v5; // ebx
  bool v6; // zf
  double v7; // st7
  int v8; // edi
  _DWORD *v9; // eax
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ebx
  int v13; // edi
  _DWORD *v14; // eax
  int v15; // ebx
  int v16; // edi
  _DWORD *v17; // eax
  int v18; // ebx
  int v19; // eax
  float v20; // edx
  float v21; // edx
  float *v22; // eax
  float v23[3]; // [esp+18h] [ebp-Ch] BYREF

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/manhack.mdl");
  *(_DWORD *)(this + 1676) = 6;
  sub_10027A90(this, 0);
  sub_10112C00(this + 320, 2);
  sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
  if ( (*(_DWORD *)(this + 248) & 0x80000) != 0 )
  {
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 4);
    sub_100E0970(this, v3, 0, 0);
  }
  else
  {
    sub_100E0970(this, v2, 6, 0);
  }
  v4 = (int)*(float *)(dword_106E9A14 + 44);
  if ( *(_DWORD *)(this + 220) != v4 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 464))(this, this + 220);
    *(_DWORD *)(this + 220) = v4;
  }
  v23[0] = 0.0;
  v23[1] = 0.0;
  v23[2] = 10.0;
  sub_100DC4E0((float *)this, v23);
  v5 = 0;
  *(float *)(this + 1684) = -1.0;
  v6 = (*(_DWORD *)(this + 248) & 0x40000) == 0;
  *(_DWORD *)(this + 2324) = 0;
  if ( v6 )
    sub_100223F0(0);
  else
    sub_100223F0(2);
  *(_DWORD *)(this + 252) |= 0x18000000u;
  sub_100EAB80((_DWORD *)this, 16);
  sub_100CF450((_DWORD *)this, -1);
  *(float *)(this + 3624) = flt_106F1CA8;
  *(float *)(this + 3628) = flt_106F1CAC;
  *(float *)(this + 3632) = flt_106F1CB0;
  *(float *)(this + 3740) = 0.0;
  *(float *)(this + 3744) = 0.0;
  *(float *)(this + 3748) = 0.0;
  *(float *)(this + 3636) = 0.0;
  *(float *)(this + 3640) = 0.0;
  *(float *)(this + 3644) = 0.0;
  *(float *)(this + 3752) = 0.0;
  *(float *)(this + 3756) = 0.0;
  *(float *)(this + 3760) = 0.0;
  *(float *)(this + 3808) = *(float *)(dword_106B31C8 + 12);
  sub_10020460((_DWORD *)this, 67633156);
  *(float *)(this + 3800) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3828) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3804) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3776) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3764) = flt_106F1CA8;
  *(float *)(this + 3768) = flt_106F1CAC;
  *(float *)(this + 3772) = flt_106F1CB0;
  *(float *)(this + 3792) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 3780) = flt_106F1CA8;
  *(float *)(this + 3784) = flt_106F1CAC;
  *(float *)(this + 3788) = flt_106F1CB0;
  *(_DWORD *)(this + 3832) = -1;
  *(float *)(this + 3848) = 0.0;
  *(float *)(this + 3844) = 0.0;
  *(float *)(this + 3648) = 5000.0;
  *(float *)(this + 3652) = 5000.0;
  *(float *)(this + 3656) = 5000.0;
  if ( *(_BYTE *)(this + 3895) )
    v7 = 2.0;
  else
    v7 = 1.0;
  *(float *)(this + 3796) = v7;
  v8 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v9 = *(_DWORD **)(this + 1100);
  if ( v9 && *v9 )
    v5 = *(_DWORD *)(this + 1100);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 104))(v8);
  *(_DWORD *)(this + 3872) = sub_100BD5F0(v5, "Panel1");
  v10 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v11 = *(_DWORD **)(this + 1100);
  if ( v11 && *v11 )
    v12 = *(_DWORD *)(this + 1100);
  else
    v12 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 104))(v10);
  *(_DWORD *)(this + 3876) = sub_100BD5F0(v12, "Panel2");
  v13 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v14 = *(_DWORD **)(this + 1100);
  if ( v14 && *v14 )
    v15 = *(_DWORD *)(this + 1100);
  else
    v15 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 104))(v13);
  *(_DWORD *)(this + 3880) = sub_100BD5F0(v15, "Panel3");
  v16 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v17 = *(_DWORD **)(this + 1100);
  if ( v17 && *v17 )
    v18 = *(_DWORD *)(this + 1100);
  else
    v18 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 104))(v16);
  v19 = sub_100BD5F0(v18, "Panel4");
  v20 = *(float *)this;
  *(float *)(this + 3660) = 0.0;
  *(_DWORD *)(this + 3884) = v19;
  (*(void (__thiscall **)(int))(LODWORD(v20) + 1164))(this);
  v21 = *(float *)this;
  *(float *)(this + 1704) = 0.001;
  v22 = (float *)(*(int (__thiscall **)(int))(LODWORD(v21) + 1868))(this);
  sub_100756C0(v22, 30.0);
  sub_100EBE30(this, 0);
  *(_WORD *)(this + 3894) = 0;
  *(float *)(this + 3896) = flt_10689730;
  *(float *)(this + 3900) = flt_10689734;
  *(float *)(this + 3904) = flt_10689738;
  *(float *)(this + 3908) = *(float *)(dword_106B31C8 + 12);
}
