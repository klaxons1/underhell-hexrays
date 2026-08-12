int __thiscall sub_10196560(void *this)
{
  float *v2; // eax
  double v3; // st7
  double v4; // st7
  float v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  float v9; // edi
  int v10; // edx
  int v12[2]; // [esp+20h] [ebp-38h] BYREF
  float v13; // [esp+28h] [ebp-30h]
  float v14; // [esp+2Ch] [ebp-2Ch]
  float v15; // [esp+30h] [ebp-28h]
  float v16; // [esp+34h] [ebp-24h]
  float v17; // [esp+38h] [ebp-20h]
  float v18; // [esp+3Ch] [ebp-1Ch]
  float v19; // [esp+40h] [ebp-18h]
  int v20; // [esp+44h] [ebp-14h] BYREF
  float v21; // [esp+48h] [ebp-10h]
  float v22; // [esp+4Ch] [ebp-Ch]
  int v23; // [esp+50h] [ebp-8h]
  float v24; // [esp+54h] [ebp-4h]

  v2 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
  v17 = *v2 - *((float *)this + 490);
  v18 = v2[1] - *((float *)this + 491);
  v19 = v2[2] - *((float *)this + 492);
  v3 = off_103EDFEC();
  v24 = v3;
  if ( v3 <= 32.0 )
  {
    if ( v3 < 0.0 )
    {
      v3 = 0.0;
      v24 = 0.0;
    }
  }
  else
  {
    v3 = 32.0;
    v24 = 32.0;
  }
  v4 = v3 * 0.5;
  if ( v4 >= 4.0 )
    v4 = 4.0;
  v5 = *(float *)this;
  *(float *)&v23 = v4;
  v6 = (*(int (__thiscall **)(void *))(LODWORD(v5) + 36))(this);
  v20 = *(int *)v6;
  v21 = *(float *)(v6 + 4);
  v22 = *(float *)(v6 + 8);
  v14 = -v17 * *(float *)&v23;
  v15 = -v18 * *(float *)&v23;
  v16 = *(float *)&v23 * -v19;
  v24 = sub_100260E0(v24, 4.0, 32.0, 0.0, 1.0);
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047C96C + 380))(dword_1047C96C);
  v8 = v7;
  if ( v7 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v8 + 36))(v8, *((_DWORD *)this + 498), 0);
  v9 = 0.0;
  *(float *)&v23 = 0.0;
  do
  {
    v10 = *((_DWORD *)this + 498);
    *(float *)&v20 = v14 + *(float *)&v20;
    v21 = v21 + v15;
    v22 = v22 + v16;
    v13 = (1.0 - (double)v23 * 0.083333336) * v24;
    *(float *)&v12[1] = v13;
    *(float *)v12 = v13;
    sub_10017340(v8, v10, (float *)&v20, *((float *)this + 494), (float *)v12, 1.0);
    ++LODWORD(v9);
    *(float *)&v23 = v9;
  }
  while ( SLODWORD(v9) < 8 );
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
}
