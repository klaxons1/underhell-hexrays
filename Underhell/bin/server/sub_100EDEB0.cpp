char __thiscall sub_100EDEB0(int this)
{
  int v2; // edi
  void (*v3)(void); // eax
  int v4; // ebx
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  int v8; // ecx
  double v9; // st7
  float *v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // edi
  char *v14; // eax
  char *v15; // eax
  int v16; // ecx
  float v18; // [esp+Ch] [ebp-38h]
  int v19[2]; // [esp+1Ch] [ebp-28h] BYREF
  float v20; // [esp+24h] [ebp-20h]
  int v21[3]; // [esp+28h] [ebp-1Ch] BYREF
  int v22; // [esp+34h] [ebp-10h]
  int v23; // [esp+38h] [ebp-Ch]
  float *v24; // [esp+3Ch] [ebp-8h]
  char v25; // [esp+43h] [ebp-1h]

  v2 = 0;
  if ( sub_100BF790(this) > 0 )
  {
    v23 = 0;
    v24 = (float *)(this + 1140);
    do
    {
      if ( v2 < 0 || v2 >= sub_100BF790(this) )
        goto LABEL_15;
      v3 = *(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100);
      v22 = dword_10700AC8;
      v3();
      if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
        sub_100BD750((volatile signed __int32 *)this);
      v4 = *(_DWORD *)(this + 1100);
      if ( !v4 || !*(_DWORD *)v4 )
        v4 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v22 + 104))(v22);
      if ( v4 )
      {
        v5 = v23 + *(_DWORD *)(*(_DWORD *)v4 + 272);
        v6 = *(float *)(v5 + *(_DWORD *)v4 + 16);
        v7 = *(float *)(v5 + *(_DWORD *)v4 + 12);
        v8 = *(_DWORD *)v4 + v5;
        if ( v7 == v6 )
          v9 = *v24;
        else
          v9 = (*(float *)(v8 + 16) - *(float *)(v8 + 12)) * *v24 + *(float *)(v8 + 12);
      }
      else
      {
LABEL_15:
        v9 = 0.0;
      }
      v18 = v9 * 0.95;
      sub_100ED710((_DWORD *)this, v2, v18);
      ++v24;
      v23 += 20;
      ++v2;
    }
    while ( v2 < sub_100BF790(this) );
  }
  LOBYTE(v10) = 0;
  v25 = 0;
  v24 = 0;
  if ( *(int *)(this + 1552) <= 0 )
  {
    *(_BYTE *)(this + 1612) = 0;
  }
  else
  {
    v23 = 0;
    do
    {
      v11 = v23 + *(_DWORD *)(this + 1540);
      v12 = *(_DWORD *)(v11 + 4);
      v22 = *(_DWORD *)v11;
      if ( v12 && !(unsigned __int8)sub_1041CB20(v12) )
        v25 = 1;
      if ( (*(unsigned __int8 (__thiscall **)(int, int, int, int))(*(_DWORD *)this + 848))(this, v11, v12, v22) )
        *(_BYTE *)(v11 + 12) = 1;
      v23 += 68;
      v10 = (float *)((char *)v24 + 1);
      v24 = v10;
    }
    while ( (int)v10 < *(_DWORD *)(this + 1552) );
    if ( v25 )
    {
      LOBYTE(v10) = dword_10698AEC;
      if ( *(_DWORD *)(dword_10698AEC + 48) )
      {
        v10 = (float *)sub_100D7680(this);
        v13 = (int)v10;
        if ( v10 )
        {
          if ( *((_DWORD *)v10 + 581) != 4 )
          {
            LOBYTE(v10) = sub_100697A0(v10, 62, 1);
            if ( !(_BYTE)v10 )
            {
              v14 = sub_10073710(*(_DWORD *)(v13 + 1676));
              v19[0] = *(_DWORD *)v14;
              v19[1] = *((_DWORD *)v14 + 1);
              v20 = *((float *)v14 + 2);
              v15 = sub_10073730(*(_DWORD *)(v13 + 1676));
              v21[0] = *(_DWORD *)v15;
              v16 = *(_DWORD *)(v13 + 252);
              v21[1] = *((_DWORD *)v15 + 1);
              v20 = *((float *)v15 + 2) + 2.0;
              *(float *)&v21[2] = v20;
              if ( (v16 & 0x800) != 0 )
                sub_100DAE60(v13);
              LOBYTE(v10) = sub_1011BB20(v13 + 580, (int)v19, (int)v21, 255, 0, 0, 0, 0.12);
            }
          }
        }
      }
    }
    *(_BYTE *)(this + 1612) = 0;
  }
  return (char)v10;
}
