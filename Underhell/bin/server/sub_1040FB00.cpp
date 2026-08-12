int __thiscall sub_1040FB00(_DWORD *this)
{
  int result; // eax
  int v2; // edi
  int *v3; // ecx
  int *v4; // ecx
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  float v12; // [esp+0h] [ebp-20h]
  float v13; // [esp+4h] [ebp-1Ch]
  float v14; // [esp+8h] [ebp-18h]

  result = sub_102831D0();
  v2 = result;
  if ( result )
  {
    if ( *(_DWORD *)(result + 828) != COERCE_INT(80.0) )
    {
      if ( *(_BYTE *)(result + 84) )
      {
        *(_BYTE *)(result + 88) |= 1u;
      }
      else
      {
        v3 = *(int **)(result + 24);
        if ( v3 )
          sub_100194B0(v3, 828);
      }
      *(float *)(v2 + 828) = 80.0;
    }
    if ( *(_DWORD *)(v2 + 832) != COERCE_INT(2.0) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v4 = *(int **)(v2 + 24);
        if ( v4 )
          sub_100194B0(v4, 832);
      }
      *(float *)(v2 + 832) = 2.0;
    }
    if ( this[549] == 3 )
    {
      v5 = 0.5;
      v14 = 0.5;
      v13 = 0.0;
    }
    else
    {
      v5 = 0.75;
      v14 = 0.75;
      v13 = 0.75;
    }
    v12 = v5;
    sub_100C34C0((float *)(v2 + 800), v12, v13, v14);
    if ( *(_DWORD *)(v2 + 824) != COERCE_INT(0.34999999) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(v2 + 24);
        if ( v6 )
          sub_100194B0(v6, 824);
      }
      *(float *)(v2 + 824) = 0.34999999;
    }
    sub_102BC090((float *)(v2 + 812), 0.40000001, 0.40000001, 0.40000001);
    if ( *(_DWORD *)(v2 + 848) != COERCE_INT(8.0) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(v2 + 24);
        if ( v7 )
          sub_100194B0(v7, 848);
      }
      *(float *)(v2 + 848) = 8.0;
    }
    if ( *(_DWORD *)(v2 + 852) != COERCE_INT(16.0) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(v2 + 24);
        if ( v8 )
          sub_100194B0(v8, 852);
      }
      *(float *)(v2 + 852) = 16.0;
    }
    if ( *(_DWORD *)(v2 + 856) != COERCE_INT(3.0) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(v2 + 24);
        if ( v9 )
          sub_100194B0(v9, 856);
      }
      *(float *)(v2 + 856) = 3.0;
    }
    if ( *(_DWORD *)(v2 + 840) != COERCE_INT(2.0) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(v2 + 24);
        if ( v10 )
          sub_100194B0(v10, 840);
      }
      *(float *)(v2 + 840) = 2.0;
    }
    if ( *(_DWORD *)(v2 + 844) != COERCE_INT(10.0) )
    {
      if ( *(_BYTE *)(v2 + 84) )
      {
        *(_BYTE *)(v2 + 88) |= 1u;
      }
      else
      {
        v11 = *(int **)(v2 + 24);
        if ( v11 )
          sub_100194B0(v11, 844);
      }
      *(float *)(v2 + 844) = 10.0;
    }
    sub_100F5880((int *)v2, 120.0);
    sub_10284FE0(v2, (int)this, 0);
    result = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v2 + 8))(v2);
    this[536] = result;
  }
  return result;
}
