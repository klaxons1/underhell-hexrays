BOOL __thiscall sub_1015BD90(float *this)
{
  int (*v2)(void); // eax
  float *v3; // eax
  int v4; // edx
  double v5; // st7
  int v6; // ecx
  int (__thiscall *v7)(float *); // eax
  double v8; // st7
  int (__thiscall *v9)(float *); // eax
  double v10; // st7
  int v11; // ecx
  int (__thiscall *v12)(float *); // eax
  int v13; // eax
  _BYTE *v14; // edi
  __int16 v15; // ax
  _BYTE *v16; // edi
  int (__thiscall *v17)(float *); // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edi
  _BYTE *v22; // edi
  int *v23; // ecx
  int v24; // edx
  int v25; // eax
  _BYTE *v26; // ebx
  double v27; // st6
  double v28; // st7
  double v29; // st5
  double v30; // st4
  double v31; // rtt
  double v32; // st5
  int v33; // eax
  double v34; // st3
  float v36[3]; // [esp+4h] [ebp-2Ch] BYREF
  float v37; // [esp+10h] [ebp-20h]
  float v38; // [esp+14h] [ebp-1Ch]
  float v39; // [esp+18h] [ebp-18h]
  float v40[2]; // [esp+1Ch] [ebp-14h] BYREF
  float v41; // [esp+24h] [ebp-Ch]
  int v42; // [esp+28h] [ebp-8h]
  float v43; // [esp+2Ch] [ebp-4h]

  v2 = *(int (**)(void))(*(_DWORD *)this + 32);
  v42 = *(int *)(*((_DWORD *)this + 2) + 152);
  v3 = (float *)v2();
  v4 = *(_DWORD *)this;
  v43 = *v3;
  v5 = *(float *)(*(int (__thiscall **)(float *))(v4 + 36))(this) + v43;
  v6 = *((_DWORD *)this + 2);
  v7 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
  v40[0] = v5 * 0.5 + *(float *)&v42;
  v43 = *(float *)(v6 + 156);
  v8 = *(float *)(v7(this) + 4);
  v9 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 36);
  *(float *)&v42 = v8;
  v10 = *(float *)(v9(this) + 4) + *(float *)&v42;
  v11 = *((_DWORD *)this + 2);
  v12 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
  v40[1] = v10 * 0.5 + v43;
  v42 = *(int *)(v11 + 160);
  v13 = v12(this);
  v14 = (_BYTE *)(*((_DWORD *)this + 1) + 447);
  v41 = *(float *)(v13 + 8) + *(float *)&v42 + 1.0;
  if ( *v14 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v14 - 447) + 672))(v14 - 447, v14);
    *v14 = 0;
  }
  sub_100E8800(*((_BYTE **)this + 1), 0);
  v15 = sub_10158450(this, v40, 0);
  if ( (v15 & 0x4030) != 0 )
  {
    sub_100E8800(*((_BYTE **)this + 1), v15);
    v16 = (_BYTE *)(*((_DWORD *)this + 1) + 447);
    if ( *v16 != 1 )
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 672))(
        *((_DWORD *)this + 1),
        *((_DWORD *)this + 1) + 447);
      *v16 = 1;
    }
    v17 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
    v43 = *(float *)(*((_DWORD *)this + 2) + 160);
    v18 = v17(this);
    v19 = *(_DWORD *)this;
    v42 = *(int *)(v18 + 8);
    v20 = (*(int (__thiscall **)(float *))(v19 + 36))(this);
    v41 = (*(float *)(v20 + 8) + *(float *)&v42) * 0.5 + v43;
    v21 = sub_10158450(this, v40, 1);
    if ( (v21 & 0x4030) != 0 )
    {
      v22 = (_BYTE *)(*((_DWORD *)this + 1) + 447);
      if ( *v22 != 2 )
      {
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 672))(
          *((_DWORD *)this + 1),
          *((_DWORD *)this + 1) + 447);
        *v22 = 2;
      }
      v23 = (int *)*((_DWORD *)this + 1);
      v24 = *v23;
      v42 = *(int *)(*((_DWORD *)this + 2) + 160);
      v25 = (*(int (__thiscall **)(int *))(v24 + 532))(v23);
      v41 = *(float *)(v25 + 8) + *(float *)&v42;
      v21 = sub_10158450(this, v40, 2);
      if ( (v21 & 0x4030) != 0 )
      {
        v26 = (_BYTE *)(*((_DWORD *)this + 1) + 447);
        if ( *v26 != 3 )
        {
          (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 1) + 672))(
            *((_DWORD *)this + 1),
            *((_DWORD *)this + 1) + 447);
          *v26 = 3;
        }
      }
    }
    if ( (v21 & 0xFC0000) != 0 )
    {
      v27 = 0.0;
      if ( (v21 & 0x40000) != 0 )
      {
        v28 = 0.0;
        v29 = 1.0;
        v30 = 1.0;
      }
      else
      {
        v29 = 1.0;
        v30 = 0.0;
        v28 = 0.0;
      }
      if ( (v21 & 0x80000) != 0 )
        v28 = v29;
      if ( (v21 & 0x100000) != 0 )
        v30 = v30 - v29;
      if ( (v21 & 0x200000) != 0 )
        v28 = v28 - v29;
      if ( (v21 & 0x400000) != 0 )
        v27 = v29;
      if ( (v21 & 0x800000) != 0 )
      {
        v31 = v27 - v29;
        v32 = v30;
        v27 = v31;
      }
      else
      {
        v32 = v30;
      }
      v33 = *((_DWORD *)this + 1);
      v42 = *(unsigned __int8 *)(v33 + 447);
      v34 = (double)v42 * 50.0;
      v37 = v32 * v34 + *(float *)(v33 + 464);
      v36[0] = v37;
      v38 = v28 * v34 + *(float *)(v33 + 468);
      v36[1] = v38;
      v39 = v34 * v27 + *(float *)(v33 + 472);
      v36[2] = v39;
      sub_100D9710((float *)(v33 + 464), v36);
    }
  }
  if ( !*((_DWORD *)this + 3) && *(_BYTE *)(*((_DWORD *)this + 1) + 447) )
    this[4] = *(float *)(dword_106B31C8 + 12);
  return *(_BYTE *)(*((_DWORD *)this + 1) + 447) > 1u;
}
