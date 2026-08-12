int __thiscall sub_103B8110(void *this, int a2, float a3)
{
  float *v3; // eax
  int v4; // esi
  int result; // eax
  int v6; // edi
  int v7; // ecx
  int *v8; // ecx
  int v9; // eax
  int *v10; // ecx
  double v11; // st7
  int v12; // eax
  int *v13; // ecx
  int v14; // eax
  int *v15; // ecx
  int v16; // eax
  int *v17; // ecx
  int v18; // eax
  int *v19; // ecx
  int v20; // eax
  int *v21; // ecx
  int v22; // eax
  int *v23; // ecx
  int v24; // eax
  int *v25; // ecx
  int v26; // eax
  int *v27; // ecx
  float v28; // [esp+Ch] [ebp-2Ch]
  float v29; // [esp+10h] [ebp-28h]
  float v30; // [esp+14h] [ebp-24h]
  _BYTE v31[12]; // [esp+24h] [ebp-14h] BYREF
  float v32; // [esp+30h] [ebp-8h]
  int v33; // [esp+34h] [ebp-4h]

  v3 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 504))(this, v31);
  sub_10261B70(v3, 50.0, 150.0, 1.0, 1024.0, 0, 0);
  v4 = 0;
  v33 = 0;
  do
  {
    result = sub_10283150();
    v6 = result;
    if ( result )
    {
      if ( v4 )
      {
        v12 = *(_DWORD *)(result + 828);
        v32 = 32.0;
        if ( v12 != COERCE_INT(32.0) )
        {
          if ( *(_BYTE *)(v6 + 84) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
          }
          else
          {
            v13 = *(int **)(v6 + 24);
            if ( v13 )
              sub_100194B0(v13, 828);
          }
          *(float *)(v6 + 828) = 32.0;
        }
        v14 = *(_DWORD *)(v6 + 824);
        v32 = 0.30000001;
        if ( v14 != COERCE_INT(0.30000001) )
        {
          if ( *(_BYTE *)(v6 + 84) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
          }
          else
          {
            v15 = *(int **)(v6 + 24);
            if ( v15 )
              sub_100194B0(v15, 824);
          }
          *(float *)(v6 + 824) = 0.30000001;
        }
        v11 = 0.5;
      }
      else
      {
        v7 = *(_DWORD *)(result + 828);
        v32 = 16.0;
        if ( v7 != COERCE_INT(16.0) )
        {
          if ( *(_BYTE *)(result + 84) )
          {
            *(_BYTE *)(result + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(result + 24);
            if ( v8 )
              sub_100194B0(v8, 828);
          }
          *(float *)(v6 + 828) = 16.0;
        }
        v9 = *(_DWORD *)(v6 + 824);
        v32 = 0.25;
        if ( v9 != COERCE_INT(0.25) )
        {
          if ( *(_BYTE *)(v6 + 84) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
          }
          else
          {
            v10 = *(int **)(v6 + 24);
            if ( v10 )
              sub_100194B0(v10, 824);
          }
          *(float *)(v6 + 824) = 0.25;
        }
        v11 = 0.44999999;
      }
      v30 = v11;
      v29 = v11;
      v28 = v11;
      sub_100C34C0((float *)(v6 + 800), v28, v29, v30);
      v16 = *(_DWORD *)(v6 + 832);
      v32 = 3.0;
      if ( v16 != COERCE_INT(3.0) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v17 = *(int **)(v6 + 24);
          if ( v17 )
            sub_100194B0(v17, 832);
        }
        *(float *)(v6 + 832) = 3.0;
      }
      v18 = *(_DWORD *)(v6 + 848);
      v32 = 16.0;
      if ( v18 != COERCE_INT(16.0) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v19 = *(int **)(v6 + 24);
          if ( v19 )
            sub_100194B0(v19, 848);
        }
        *(float *)(v6 + 848) = 16.0;
      }
      v20 = *(_DWORD *)(v6 + 852);
      v32 = 64.0;
      if ( v20 != COERCE_INT(64.0) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v21 = *(int **)(v6 + 24);
          if ( v21 )
            sub_100194B0(v21, 852);
        }
        *(float *)(v6 + 852) = 64.0;
      }
      v22 = *(_DWORD *)(v6 + 856);
      v32 = 20.0;
      if ( v22 != COERCE_INT(20.0) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v23 = *(int **)(v6 + 24);
          if ( v23 )
            sub_100194B0(v23, 856);
        }
        *(float *)(v6 + 856) = 20.0;
      }
      v24 = *(_DWORD *)(v6 + 840);
      v32 = 8.0;
      if ( v24 != COERCE_INT(8.0) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v25 = *(int **)(v6 + 24);
          if ( v25 )
            sub_100194B0(v25, 840);
        }
        *(float *)(v6 + 840) = 8.0;
      }
      v26 = *(_DWORD *)(v6 + 844);
      v32 = 64.0;
      if ( v26 != COERCE_INT(64.0) )
      {
        if ( *(_BYTE *)(v6 + 84) )
        {
          *(_BYTE *)(v6 + 88) |= 1u;
        }
        else
        {
          v27 = *(int **)(v6 + 24);
          if ( v27 )
            sub_100194B0(v27, 844);
        }
        *(float *)(v6 + 844) = 64.0;
      }
      sub_102BC090((float *)(v6 + 812), 0.0, 0.0, 0.0);
      sub_100F5880((int *)v6, a3);
      if ( v33 )
        result = sub_10284B60(v6, a2, "vehicle_driver_eyes");
      else
        result = sub_10284B60(v6, a2, "MiniGunBase");
    }
    v4 = v33 + 1;
    v33 = v4;
  }
  while ( v4 < 2 );
  return result;
}
