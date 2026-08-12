double __thiscall sub_100C16C0(int this, float a2)
{
  int v2; // ebx
  _DWORD *v4; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // rt0
  double v10; // st5
  float v11; // [esp+0h] [ebp-28h]
  int v12; // [esp+8h] [ebp-20h]
  float v13; // [esp+8h] [ebp-20h]
  int v14; // [esp+18h] [ebp-10h] BYREF
  float v15; // [esp+1Ch] [ebp-Ch]
  float v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+24h] [ebp-4h]

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240(this) )
    sub_100BD750((volatile signed __int32 *)this);
  v4 = *(_DWORD **)(this + 1100);
  if ( !v4 || !*v4 )
    v4 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( !v4 )
    return 0.0;
  v12 = *(_DWORD *)(this + 908);
  v17 = *(float *)(this + 904);
  v11 = sub_100C0F70(this, v12) * a2 * *(float *)(this + 864) + v17;
  sub_10100C30((int)v4, *(_DWORD *)(this + 908), v11, this + 912, (int)&v14);
  v6 = *(float *)(this + 864);
  v7 = *(float *)&v14 * v6;
  *(float *)&v14 = v7;
  v8 = v6 * v15;
  v15 = v8;
  v9 = v8;
  v10 = v6 * v16;
  v16 = v10;
  v13 = v9 * v9 + v7 * v7 + v10 * v10;
  return off_10689708(v13);
}
