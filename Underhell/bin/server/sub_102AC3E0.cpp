void __thiscall sub_102AC3E0(int this)
{
  double v2; // st7
  int v3; // eax
  int v4; // esi
  float *v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  char *v10; // eax
  _DWORD *v11; // esi
  float *v12; // eax
  char *v13; // eax
  _DWORD *v14; // esi
  float *v15; // eax
  char *v16; // eax
  _DWORD *v17; // esi
  float *v18; // eax
  int v19; // [esp+8h] [ebp-60h]
  int v20[3]; // [esp+28h] [ebp-40h] BYREF
  int v21[3]; // [esp+34h] [ebp-34h] BYREF
  int v22; // [esp+40h] [ebp-28h] BYREF
  float v23; // [esp+44h] [ebp-24h]
  float v24; // [esp+48h] [ebp-20h]
  int v25; // [esp+4Ch] [ebp-1Ch] BYREF
  float v26; // [esp+50h] [ebp-18h]
  float v27; // [esp+54h] [ebp-14h]
  int v28; // [esp+58h] [ebp-10h]
  int v29; // [esp+5Ch] [ebp-Ch] BYREF
  int v30; // [esp+60h] [ebp-8h]
  int v31; // [esp+64h] [ebp-4h]

  sub_100DF330((float *)this);
  if ( (*(_BYTE *)(this + 236) & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 920) )
    {
      *(float *)&v30 = 255.0;
      v2 = 0.0;
    }
    else
    {
      *(float *)&v30 = 0.0;
      v2 = 255.0;
    }
    v3 = *(_DWORD *)(this + 252);
    *(float *)&v31 = v2;
    *(float *)&v25 = 8.0;
    v26 = 8.0;
    v27 = 8.0;
    *(float *)&v22 = -8.0;
    v23 = -8.0;
    v24 = -8.0;
    if ( (v3 & 0x800) != 0 )
      sub_100DAE60(this);
    v4 = (int)*(float *)&v31;
    v31 = v4;
    v19 = (int)*(float *)&v30;
    v5 = (float *)(this + 580);
    v30 = v19;
    v28 = this + 580;
    sub_1011BB20(this + 580, (int)&v22, (int)&v25, v19, v4, 0, 1, 0.050000001);
    if ( *(_DWORD *)(this + 960) )
    {
      v6 = sub_100709F0(&v29);
      if ( v6 )
      {
        do
        {
          if ( *(_DWORD *)(v6 + 824) == *(_DWORD *)(this + 960) )
          {
            if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
              sub_100DAE60(v6);
            v8 = *(_DWORD *)(this + 252);
            v22 = *(int *)(v6 + 580);
            v23 = *(float *)(v6 + 584);
            v24 = *(float *)(v6 + 588) + 32.0;
            if ( (v8 & 0x800) != 0 )
              sub_100DAE60(this);
            sub_1011C790((float *)v28, (float *)&v22, 8.0, v30, v31, 0, 0, 1, 0.050000001);
            if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
              sub_100DAE60(v6);
            sub_10422220(v6 + 704, v20);
            v9 = *(_DWORD *)(v6 + 252);
            *(float *)&v25 = 32.0;
            v26 = 32.0;
            v27 = 16.0;
            *(float *)v21 = -32.0;
            *(float *)&v21[1] = -32.0;
            *(float *)&v21[2] = 0.0;
            if ( (v9 & 0x800) != 0 )
              sub_100DAE60(v6);
            sub_1011BB60(v6 + 580, (int)v21, (int)&v25, (int)v20, v30, v31, 0, 1, 0.050000001);
            v7 = sub_10070A20(&v29);
            v5 = (float *)v28;
          }
          else
          {
            v7 = sub_10070A20(&v29);
          }
          v6 = v7;
        }
        while ( v7 );
      }
    }
    v10 = *(char **)(this + 964);
    if ( v10 )
    {
      v11 = sub_1012BF20(&dword_1069E3E0, 0, v10, 0, 0, 0, 0);
      if ( v11 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v12 = (float *)(*(int (__thiscall **)(_DWORD *))(*v11 + 576))(v11);
        sub_1011C790(v5, v12, 4.0, 255, 255, 255, 0, 1, 0.050000001);
      }
    }
    v13 = *(char **)(this + 980);
    if ( v13 )
    {
      v14 = sub_1012BF20(&dword_1069E3E0, 0, v13, 0, 0, 0, 0);
      if ( v14 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v15 = (float *)(*(int (__thiscall **)(_DWORD *))(*v14 + 576))(v14);
        sub_1011C790(v5, v15, 4.0, 255, 255, 0, 0, 1, 0.050000001);
      }
    }
    v16 = *(char **)(this + 976);
    if ( v16 )
    {
      v17 = sub_1012BF20(&dword_1069E3E0, 0, v16, 0, 0, 0, 0);
      if ( v17 )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        v18 = (float *)(*(int (__thiscall **)(_DWORD *))(*v17 + 576))(v17);
        sub_1011C790(v5, v18, 4.0, 255, 0, 0, 0, 1, 0.050000001);
      }
    }
  }
}
