int __userpurge sub_10335D10@<eax>(int a1@<ecx>, int a2@<edi>, float *a3, int a4, int a5)
{
  int result; // eax
  const char *v7; // eax
  int v8; // edi
  int *v9; // ecx
  int v10; // edx
  int (__thiscall *v11)(int *, int); // eax
  int v12; // ebx
  int v13; // ecx
  int v14; // edx
  double v15; // st4
  double v16; // st6
  double v17; // st4
  double v18; // st5
  double v19; // st6
  double v20; // st7
  int v21; // eax
  float *v22; // ebx
  double v23; // st4
  double v24; // st7
  double v25; // st4
  double v26; // st5
  double v27; // st4
  double v28; // st6
  double v29; // st4
  double v30; // st5
  double v31; // st6
  __int64 v32; // [esp+8h] [ebp-124h]
  double v33; // [esp+Ch] [ebp-120h]
  float v35; // [esp+10h] [ebp-11Ch]
  float v36; // [esp+10h] [ebp-11Ch]
  char Buffer[256]; // [esp+1Ch] [ebp-110h] BYREF
  int v38; // [esp+11Ch] [ebp-10h]
  int i; // [esp+120h] [ebp-Ch]
  int v40; // [esp+124h] [ebp-8h] BYREF
  float v41; // [esp+128h] [ebp-4h]
  int v42; // [esp+138h] [ebp+Ch]

  result = dword_106B31C8;
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    if ( *(_DWORD *)(dword_10698344 + 48) && *(_DWORD *)(a1 + 5748) )
    {
      v7 = *(const char **)(a1 + 5748);
      if ( !v7 )
        v7 = String;
      return sub_10335B60((_DWORD *)a1, (int)v7, 0);
    }
    else
    {
      v8 = sub_10261B20();
      *(float *)(a1 + 5752) = *(float *)(dword_106E625C + 44) + *(float *)(dword_106B31C8 + 12);
      if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
        sub_100DAE60(v8);
      v9 = *(int **)(a1 + 4748);
      v10 = *v9;
      *(float *)(a1 + 5756) = *(float *)(v8 + 580);
      v11 = *(int (__thiscall **)(int *, int))(v10 + 1364);
      *(float *)(a1 + 5760) = *(float *)(v8 + 584);
      *(float *)(a1 + 5764) = *(float *)(v8 + 588);
      if ( v11(v9, a2) == a1 + 4744 )
        sub_100600B0(a1 + 4744, a3);
      if ( *(_BYTE *)(a1 + 4492) && !*(_BYTE *)(a1 + 4493) )
      {
        *(_DWORD *)(a1 + 4484) = 0;
        *(_WORD *)(a1 + 4492) = 0;
        sub_10044510(a1, (int)"Moving from rally point to assault point");
      }
      v12 = 0;
      v41 = 3.4028235e38;
      for ( i = 0; v12 < a5; ++v12 )
      {
        if ( sub_100296A0(*(_DWORD **)(a4 + 4 * v12)) )
        {
          v13 = *(_DWORD *)(a4 + 4 * v12);
          v14 = *(_DWORD *)(v13 + 252) >> 11;
          v38 = v13;
          if ( (v14 & 1) != 0 )
          {
            sub_100DAE60(v13);
            v13 = v38;
          }
          if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          {
            sub_100DAE60(v8);
            v13 = v38;
          }
          v15 = *(float *)(v8 + 584) - *(float *)(v13 + 584);
          v16 = v15 * v15;
          v17 = *(float *)(v8 + 580) - *(float *)(v13 + 580);
          v18 = v16;
          v19 = *(float *)(v8 + 588) - *(float *)(v13 + 588);
          v20 = v17 * v17 + v18 + v19 * v19;
          if ( v41 > v20 )
          {
            v41 = v20;
            i = *(_DWORD *)(a4 + 4 * v12);
          }
        }
      }
      if ( sub_10050FC0((_DWORD *)(a1 + 4508)) )
      {
        v21 = sub_10050FC0((_DWORD *)(a1 + 4508));
        if ( !v21
          || *(char **)(v21 + 92) != "info_target_command_point"
          && !sub_100D6240((_DWORD *)v21, "info_target_command_point") )
        {
          sub_100577F0(a1 + 4508, 0, 0);
          v40 = 0;
          LOBYTE(v41) = 0;
          sub_10057630(a1 + 4508, &v40);
        }
      }
      if ( i == a1 )
      {
        if ( (*(_DWORD *)(v8 + 252) & 0x800) != 0 )
          sub_100DAE60(v8);
        v22 = a3;
        v23 = *a3 - *(float *)(v8 + 580);
        v24 = v23 * v23;
        v25 = a3[1] - *(float *)(v8 + 584);
        v26 = a3[2] - *(float *)(v8 + 588);
        v35 = v26 * v26 + v25 * v25 + v24;
        *(float *)&v42 = off_10689708(v35);
        if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
          sub_100DAE60(a1);
        v27 = a3[1] - *(float *)(a1 + 584);
        v28 = v27 * v27;
        v29 = *a3 - *(float *)(a1 + 580);
        v30 = v28;
        v31 = a3[2] - *(float *)(a1 + 588);
        v36 = v29 * v29 + v30 + v31 * v31;
        v33 = off_10689708(v36);
        sub_1001E280(Buffer, "commandpoint_dist_to_player:%.0f,commandpoint_dist_to_npc:%.0f", *(float *)&v42, v33);
        sub_10335B60((_DWORD *)a1, (int)"TLK_COMMANDED", Buffer);
      }
      else
      {
        v22 = a3;
      }
      HIDWORD(v32) = a1;
      LODWORD(v32) = a1;
      sub_1010DD80((_DWORD *)(a1 + 5860), v32, 0.0);
      (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 1544))(a1, v22);
      sub_10023CB0((char *)a1, 64);
      return (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 1556))(a1);
    }
  }
  return result;
}
