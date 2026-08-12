char __thiscall sub_10316FA0(int this, int a2)
{
  double v3; // st6
  double v4; // st6
  double v5; // st4
  bool v6; // c0
  bool v7; // c3
  double v8; // st7
  double v9; // st6
  double v10; // st7
  double v11; // rtt
  double v12; // st4
  double v13; // st6
  double v14; // rt0
  double v15; // rt1
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // rt1
  double v20; // st4
  double v21; // st4
  double v22; // st5
  double v23; // st6
  double v24; // st5
  double v25; // st6
  int v26; // edi
  int v27; // edx
  _DWORD *v28; // ebx
  int v29; // edi
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // ebx
  _BYTE v34[12]; // [esp+10h] [ebp-1Ch] BYREF
  float v35; // [esp+1Ch] [ebp-10h] BYREF
  float v36; // [esp+20h] [ebp-Ch]
  int v37; // [esp+28h] [ebp-4h]
  float v38; // [esp+34h] [ebp+8h]
  float v39; // [esp+34h] [ebp+8h]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_10421C60(a2, this + 500, v34);
  sub_10422540(v34, &v35);
  v3 = v36;
  if ( v36 <= 180.0 )
  {
    v6 = v3 > -180.0;
    v7 = -180.0 == v3;
    v5 = v36;
    v4 = -180.0;
    if ( v6 || v7 )
      goto LABEL_8;
    v5 = v5 + 360.0;
  }
  else
  {
    v4 = -180.0;
    v5 = v36 - 360.0;
  }
  v36 = v5;
LABEL_8:
  v8 = v35;
  if ( v35 <= 180.0 )
  {
    v11 = v5;
    v12 = v4;
    v13 = v11;
    if ( v12 <= v8 )
    {
      v15 = v13;
      v9 = v35;
      v10 = v15;
    }
    else
    {
      v14 = v13;
      v9 = v8 + 360.0;
      v10 = v14;
      v35 = v9;
    }
  }
  else
  {
    v9 = v8 - 360.0;
    v10 = v5;
    v35 = v9;
  }
  if ( *(_DWORD *)(this + 4120) == 4 && *(_DWORD *)(this + 4212) != 6 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) )
    {
      if ( sub_103131E0((void *)this) )
      {
        v16 = 0.0;
        if ( v35 <= 0.0 )
        {
          v16 = v35;
          if ( v35 < -12.0 )
          {
            v16 = -12.0;
            v35 = -12.0;
          }
        }
        else
        {
          v35 = 0.0;
        }
        v17 = 10.0;
        if ( v36 <= 10.0 )
        {
          v17 = v36;
          if ( v36 < -10.0 )
          {
            v17 = -10.0;
            v36 = -10.0;
          }
        }
        else
        {
          v36 = 10.0;
        }
      }
      else
      {
        v18 = -10.0;
        if ( v35 <= 10.0 )
        {
          if ( v35 >= -10.0 )
          {
            v18 = v35;
            v17 = -10.0;
          }
          else
          {
            v17 = -10.0;
            v35 = -10.0;
          }
        }
        else
        {
          v17 = -10.0;
          v18 = 10.0;
          v35 = 10.0;
        }
        if ( v36 <= 10.0 )
        {
          v16 = v18;
          if ( v36 >= v17 )
            v17 = v36;
          else
            v36 = v17;
        }
        else
        {
          v17 = 10.0;
          v16 = v18;
          v36 = 10.0;
        }
      }
      v19 = v17;
      v9 = v16;
      v10 = v19;
    }
    else
    {
      v10 = v36;
      v9 = v35;
    }
  }
  if ( v9 > *(float *)(this + 4044) )
  {
    v20 = *(float *)(this + 4044) + 12.0;
    if ( v20 > v9 )
      v20 = v9;
    *(float *)(this + 4044) = v20;
  }
  if ( *(float *)(this + 4044) <= v9 )
  {
    v23 = 12.0;
  }
  else
  {
    v21 = *(float *)(this + 4044) - 12.0;
    if ( v21 >= v9 )
    {
      v23 = 12.0;
      *(float *)(this + 4044) = v21;
    }
    else
    {
      v22 = v9;
      v23 = 12.0;
      *(float *)(this + 4044) = v22;
    }
  }
  if ( *(float *)(this + 4048) < v10 )
  {
    v24 = *(float *)(this + 4048) + v23;
    if ( v24 > v10 )
      v24 = v10;
    *(float *)(this + 4048) = v24;
  }
  if ( *(float *)(this + 4048) > v10 )
  {
    v25 = *(float *)(this + 4048) - v23;
    if ( v25 >= v10 )
      *(float *)(this + 4048) = v25;
    else
      *(float *)(this + 4048) = v10;
  }
  v26 = dword_10700AC8;
  v27 = *(_DWORD *)dword_10700AC8;
  v38 = -*(float *)(this + 4044);
  v37 = *(_DWORD *)(this + 3928);
  (*(void (__thiscall **)(int))(v27 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v28 = *(_DWORD **)(this + 1100);
  if ( !v28 || !*v28 )
    v28 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 104))(v26);
  sub_100BE7D0((_DWORD *)this, (int)v28, v37, v38);
  v29 = dword_10700AC8;
  v39 = *(float *)(this + 4048);
  v30 = *(_DWORD *)dword_10700AC8;
  v37 = *(_DWORD *)(this + 3932);
  (*(void (__thiscall **)(int))(v30 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
    sub_100BD750((volatile signed __int32 *)this);
  v31 = *(_DWORD **)(this + 1100);
  if ( v31 && *v31 )
    v32 = *(_DWORD *)(this + 1100);
  else
    v32 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v29 + 104))(v29);
  sub_100BE7D0((_DWORD *)this, v32, v37, v39);
  return 1;
}
