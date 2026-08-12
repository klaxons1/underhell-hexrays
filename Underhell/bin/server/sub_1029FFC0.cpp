void __userpurge sub_1029FFC0(int a1@<ecx>, int a2@<edi>, int a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  bool v8; // zf
  char *v9; // eax
  char *v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  char *v13; // eax
  char *v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  char *v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  char *v20; // eax
  float v21[3]; // [esp+28h] [ebp-Ch] BYREF

  v4 = *(_DWORD *)(a1 + 68);
  if ( v4 != -1 )
  {
    v5 = &off_1061BE18[4 * (v4 & 0xFFF) + 1];
    v6 = v4 >> 12;
    if ( v5[1] == v6 )
    {
      if ( *v5 )
      {
        if ( v5[1] == v6 )
          v7 = *v5;
        else
          v7 = 0;
        v8 = (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 868))(v7) == 0;
        v9 = "1";
        if ( v8 )
          v9 = "0";
        sub_10067DE0(a3, "vehicle_overturned", v9, 1.0);
        v10 = "1";
        if ( *(_DWORD *)(a1 + 16) != 2 )
          v10 = "0";
        sub_10067DE0(a3, "vehicle_inside", v10, 1.0);
        v11 = *(_DWORD *)(a1 + 68);
        if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v11 >> 12 )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
        (*(void (__thiscall **)(int, _DWORD, _DWORD, float *, int))(*(_DWORD *)v12 + 528))(v12, 0, 0, v21, a2);
        v13 = sub_1025F440("%.2f", (v21[1] + v21[0]) * 0.0 + v21[2]);
        sub_10067DE0(a3, "vehicle_tilt", v13, 1.0);
        v14 = sub_1025F440("%f", (double)sqrt(*(float *)(a1 + 60)));
        sub_10067DE0(a3, "vehicle_speed", v14, 1.0);
        v15 = *(_DWORD *)(a1 + 68);
        if ( v15 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v15 >> 12 )
          v16 = 0;
        else
          v16 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
        v8 = (*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v16 + 1488) + 4))(
               v16 + 1488,
               *(_DWORD *)(a1 + 4),
               1) == 0;
        v17 = "1";
        if ( v8 )
          v17 = "0";
        sub_10067DE0(a3, "vehicle_can_exit", v17, 1.0);
        v18 = *(_DWORD *)(a1 + 68);
        if ( v18 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 2] != v18 >> 12 )
          v19 = 0;
        else
          v19 = off_1061BE18[4 * (*(_DWORD *)(a1 + 68) & 0xFFF) + 1];
        v8 = (**(unsigned __int8 (__thiscall ***)(int, _DWORD))(v19 + 1488))(v19 + 1488, *(_DWORD *)(a1 + 4)) == 0;
        v20 = "1";
        if ( v8 )
          v20 = "0";
        sub_10067DE0(a3, "vehicle_can_enter", v20, 1.0);
      }
    }
  }
}
