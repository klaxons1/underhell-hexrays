void __userpurge sub_102A6700(int a1@<ecx>, double a2@<st0>, int *a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  double v13; // st7
  float v14; // [esp+14h] [ebp-54h]
  float v15[12]; // [esp+20h] [ebp-48h] BYREF
  int v16[3]; // [esp+50h] [ebp-18h] BYREF
  float v17[3]; // [esp+5Ch] [ebp-Ch] BYREF
  float v18; // [esp+70h] [ebp+8h]
  float v19; // [esp+70h] [ebp+8h]

  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 == 2 )
  {
    v5 = *a3;
    if ( *a3 == 69
      || v5 == 66
      || v5 == 62
      || v5 == 67
      || v5 == 70
      || v5 == 64
      || v5 == 65
      || v5 == 63
      || v5 == 71
      || v5 == 120 )
    {
      goto LABEL_12;
    }
  }
  v6 = *a3;
  if ( *a3 > 100005 )
  {
    switch ( v6 )
    {
      case 100006:
        if ( sub_1012B040((unsigned int *)(a1 + 68), 0) )
        {
          (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
            *(_DWORD *)(a1 + 4),
            "Lost vehicle pointer\n");
          return;
        }
        v8 = sub_1026A890((unsigned int *)(a1 + 68));
        (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v8 + 528))(v8, 0, v17, 0);
        *(float *)v16 = v17[0] * 64.0;
        *(float *)&v16[1] = v17[1] * 64.0;
        *(float *)&v16[2] = 64.0 * v17[2];
        v9 = sub_1026A890((unsigned int *)(a1 + 68));
        sub_1001EE90(v15, 1, (float *)v16, -1, 64.0, 2, v9);
        v10 = sub_1026A890((unsigned int *)(a1 + 68));
        sub_100218B0(*(_DWORD **)(a1 + 4), v10);
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD, float *, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 4) + 2588) + 20))(
               *(_DWORD *)(*(_DWORD *)(a1 + 4) + 2588),
               v15,
               0) )
        {
          goto LABEL_12;
        }
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
          *(_DWORD *)(a1 + 4),
          "Unable to find path to get closer to vehicle!\n");
        break;
      case 100007:
        sub_10039F40(*(int **)(a1 + 4), dword_106DB630);
        return;
      case 100008:
        if ( sub_102A2BD0(a1) )
          goto LABEL_35;
        (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
          *(_DWORD *)(a1 + 4),
          "Unable to exit overturned vehicle!\n");
        return;
      case 100009:
        v11 = *(_DWORD **)(a1 + 4);
        if ( v11[593] != dword_106DB62C )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*v11 + 1416))(v11, 0);
          (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 1416))(*(_DWORD *)(a1 + 4), dword_106DB62C);
        }
LABEL_35:
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, 0);
        return;
      case 100010:
        sub_100C54B0(*(_DWORD **)(a1 + 4));
        sub_10043E90(*(int **)(a1 + 4), dword_106DB628);
        v12 = sub_100BDCE0(*(_DWORD *)(a1 + 4), dword_106DB628);
        sub_10019B30(*(_DWORD **)(a1 + 4), v12);
        v18 = a2;
        v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                1.0,
                2.0)
            + v18;
        v19 = v13;
        v14 = v13 + *(float *)(dword_106B31C8 + 12);
        sub_10031BA0(*(_DWORD *)(a1 + 4), v14);
        sub_102A2440((float *)a1, v19);
        return;
      case 100011:
        sub_1007DD70(11);
        return;
      default:
        goto LABEL_17;
    }
  }
  else if ( *a3 == 100005 )
  {
    if ( v4 )
    {
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
        *(_DWORD *)(a1 + 4),
        "Trying to run while inside a vehicle!\n");
    }
    else if ( sub_1029F4E0((_DWORD *)a1, 0) )
    {
      if ( sub_102A6490((_DWORD *)a1) )
      {
LABEL_12:
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 12))(a1, 0);
        return;
      }
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
        *(_DWORD *)(a1 + 4),
        "TASK_GET_PATH_TO_VEHICLE_ENTRY_POINT: Unable to run to entry point");
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, const char *))(**(_DWORD **)(a1 + 4) + 1312))(
        *(_DWORD *)(a1 + 4),
        "No valid entry point!\n");
    }
  }
  else
  {
    if ( v6 == 28 )
    {
      v7 = sub_1026A890((unsigned int *)(a1 + 68));
      sub_100218B0(*(_DWORD **)(a1 + 4), v7);
    }
LABEL_17:
    sub_102A1510(a1, a3);
  }
}
