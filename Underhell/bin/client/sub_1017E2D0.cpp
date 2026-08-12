int __thiscall sub_1017E2D0(int this, int a2)
{
  double v3; // st7
  double v4; // st7
  int result; // eax
  int i; // edi
  const char *v7; // eax
  int v8; // ebx
  const char *v9; // eax
  const char *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  _DWORD *v17; // eax
  int v18; // ebx
  float v19; // [esp+4h] [ebp-14h]
  int v20; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]
  const char **v22; // [esp+14h] [ebp-4h]
  int v23; // [esp+20h] [ebp+8h]

  sub_1024BD30(a2);
  v3 = (double)sub_101F5910(this);
  v4 = (double)sub_1022A800("fov", (int)v3);
  *(float *)(this + 2736) = v4;
  v19 = v4;
  sub_101F5920(v19);
  *(_BYTE *)(this + 2870) = sub_1022A800("allow_rot", 0) == 1;
  result = sub_10229C90(a2);
  for ( i = result; result; i = result )
  {
    v7 = (const char *)sub_10229A00(i);
    if ( !_stricmp(v7, "model") )
    {
      *(_BYTE *)(this + 2868) = sub_1022A800("force_pos", 0) == 1;
      *(_DWORD *)(this + 2740) = sub_1012D330(i, "modelname", 0);
      *(_DWORD *)(this + 2744) = sub_1012D330(i, "modelname_hwm", 0);
      *(_DWORD *)(this + 2748) = sub_1012D330(i, "vcd", 0);
      sub_1022A940("angles_x", 0.0);
      sub_1022A940("angles_y", 0.0);
      sub_1022A940("angles_z", 0.0);
      *(float *)(this + 2752) = 0.0;
      *(float *)(this + 2756) = 0.0;
      *(float *)(this + 2760) = 0.0;
      sub_1022A940("origin_x", 110.0);
      sub_1022A940("origin_y", 5.0);
      sub_1022A940("origin_z", 5.0);
      *(float *)(this + 2764) = 110.0;
      *(float *)(this + 2768) = 5.0;
      *(float *)(this + 2772) = 5.0;
      sub_1022A940("frame_origin_x", 110.0);
      sub_1022A940("frame_origin_y", 5.0);
      sub_1022A940("frame_origin_z", 5.0);
      *(float *)(this + 2776) = 110.0;
      *(float *)(this + 2780) = 5.0;
      *(float *)(this + 2784) = 5.0;
      *(float *)(this + 2788) = 0.0;
      *(float *)(this + 2792) = 0.0;
      *(_DWORD *)(this + 2796) = sub_1022A800("skin", -1);
      *(_BYTE *)(this + 2800) = sub_1022A800("spotlight", 0) == 1;
      *(float *)(this + 2844) = *(float *)(this + 2752);
      *(float *)(this + 2848) = *(float *)(this + 2756);
      *(float *)(this + 2852) = *(float *)(this + 2760);
      *(float *)(this + 2856) = *(float *)(this + 2764);
      *(float *)(this + 2860) = *(float *)(this + 2768);
      *(float *)(this + 2864) = *(float *)(this + 2772);
      v8 = sub_10229C90(i);
      v23 = v8;
      if ( v8 )
      {
        while ( 1 )
        {
          v9 = (const char *)sub_10229A00(v8);
          if ( !_stricmp(v9, "animation") )
          {
            sub_1017E170((int *)this, v8);
          }
          else
          {
            v10 = (const char *)sub_10229A00(v8);
            if ( !_stricmp(v10, "attached_model") )
            {
              v12 = *(_DWORD *)(this + 2828);
              v21 = *(_DWORD *)(this + 2836);
              v11 = v21;
              if ( v21 + 1 > v12 )
              {
                sub_10118050((_DWORD *)(this + 2824), v21 - v12 + 1);
                v11 = v21;
              }
              ++*(_DWORD *)(this + 2836);
              v13 = *(_DWORD *)(this + 2824);
              v14 = *(_DWORD *)(this + 2836) - v11 - 1;
              *(_DWORD *)(this + 2840) = v13;
              if ( v14 > 0 )
              {
                memcpy((void *)(v13 + 8 * v11 + 8), (const void *)(v13 + 8 * v11), 8 * v14);
                v11 = v21;
              }
              v15 = *(_DWORD *)(this + 2824);
              v16 = 8 * v11 + v15 == 0;
              v17 = (_DWORD *)(8 * v11 + v15);
              v20 = 8 * v11;
              if ( !v16 )
              {
                *v17 = 0;
                v17[1] = 0;
              }
              if ( v11 != -1 )
              {
                v22 = (const char **)(8 * v11 + *(_DWORD *)(this + 2824));
                *v22 = sub_1012D330(v23, "modelname", 0);
                v18 = v20 + *(_DWORD *)(this + 2824);
                *(_DWORD *)(v18 + 4) = sub_1022A800("skin", -1);
              }
              v8 = v23;
            }
          }
          v23 = sub_1021F0F0(v8);
          if ( !v23 )
            break;
          v8 = v23;
        }
      }
    }
    result = sub_1021F0F0(i);
  }
  return result;
}
