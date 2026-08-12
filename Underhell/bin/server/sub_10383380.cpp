void __thiscall sub_10383380(int this, _DWORD *a2)
{
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  double v6; // st7
  int v7; // edx
  double v8; // st6
  double v9; // st7
  int v10; // edi
  int v11; // eax
  _DWORD *v12; // ecx
  float *v13; // eax
  double v14; // st4
  double v15; // st6
  double v16; // st4
  double v17; // st5
  double v18; // st6
  _BYTE v19[12]; // [esp+8h] [ebp-24h] BYREF
  float v20; // [esp+14h] [ebp-18h]
  float v21; // [esp+18h] [ebp-14h]
  float v22; // [esp+1Ch] [ebp-10h]
  float v23; // [esp+20h] [ebp-Ch] BYREF
  float v24; // [esp+24h] [ebp-8h]
  float v25; // [esp+28h] [ebp-4h]

  if ( *a2 == 129 )
  {
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    if ( v10 )
    {
      if ( **(_DWORD **)(this + 2124) == 17 )
      {
        if ( sub_1007E040(*(_DWORD **)(this + 2588)) )
        {
          v11 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v10 + 504))(v10, v19);
          v12 = *(_DWORD **)(this + 2588);
          v23 = *(float *)v11;
          v24 = *(float *)(v11 + 4);
          v25 = *(float *)(v11 + 8);
          v13 = (float *)sub_1007DD50(v12);
          v14 = v13[1] - v24;
          v15 = v14 * v14;
          v16 = *v13 - v23;
          v17 = v15;
          v18 = v13[2] - v25;
          if ( v16 * v16 + v17 + v18 * v18 > 1600.0 )
            sub_100846B0(*(void **)(this + 2588), (int *)&v23);
        }
      }
    }
    sub_100497D0((int *)this, a2);
  }
  else if ( *a2 != 150 )
  {
    if ( *a2 == 154 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v23 = *(float *)(this + 2864) - *(float *)(this + 580);
      v24 = *(float *)(this + 2868) - *(float *)(this + 584);
      v25 = *(float *)(this + 2872) - *(float *)(this + 588);
      v3 = off_10689714();
      if ( *(float *)(this + 3792) - *(float *)(dword_106B31C8 + 12) >= 0.1 )
      {
        if ( v3 >= 64.0 )
        {
          v7 = *(_DWORD *)(this + 252) >> 11;
          v20 = v23 * 10.0;
          v21 = v24 * 10.0;
          v22 = 10.0 * v25;
          if ( (v7 & 1) != 0 )
            sub_100DAE60(this);
          v8 = v21 + *(float *)(this + 584);
          v9 = v22 + *(float *)(this + 588);
          *(float *)(this + 3780) = v20 + *(float *)(this + 580);
          *(float *)(this + 3784) = v8;
          *(float *)(this + 3788) = v9;
        }
        else
        {
          v4 = *(_DWORD *)(this + 252) >> 11;
          v20 = -v24 * 4.0;
          v21 = 4.0 * v23;
          if ( (v4 & 1) != 0 )
            sub_100DAE60(this);
          v5 = *(float *)(this + 584) - v21;
          v6 = *(float *)(this + 588);
          *(float *)(this + 3780) = *(float *)(this + 580) - v20;
          *(float *)(this + 3784) = v5;
          *(float *)(this + 3788) = v6;
        }
      }
      else if ( v3 <= 256.0 )
      {
        sub_10027CD0((_DWORD *)this, 0);
      }
      else
      {
        (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 1312))(this, 11);
      }
    }
    else
    {
      sub_100497D0((int *)this, a2);
    }
  }
}
