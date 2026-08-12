void __usercall sub_100272C0(int *a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  int v4; // eax
  int *v5; // edi
  int v6; // eax
  int *v7; // esi
  int v8; // ebx
  int v9; // eax
  float *v10; // eax
  int v11; // edi
  int (__thiscall *v12)(int *, float *); // edx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  float *v17; // eax
  double v18; // st7
  float v20[3]; // [esp+4h] [ebp-1Ch] BYREF
  float v21; // [esp+10h] [ebp-10h] BYREF
  float v22; // [esp+14h] [ebp-Ch]
  float v23; // [esp+18h] [ebp-8h]
  float v24; // [esp+1Ch] [ebp-4h]

  v3 = a1[647];
  v4 = *(_DWORD *)(v3 + 12);
  if ( v4 != 3
    && v4 != 1
    && *(float *)(dword_106B31C8 + 12) - flt_105FE1B4 > -0.001
    && *(float *)(dword_106B31C8 + 12) - *((float *)a1 + 613) > -0.001
    && sub_1007E000(v3) == 2 )
  {
    v5 = a1 + 603;
    v6 = sub_1007E670(a1[647]);
    if ( (unsigned __int8)sub_103E0CF0(v6) )
    {
      v7 = (int *)a1[647];
      v8 = *v7;
      v9 = sub_1026A890(v5);
      (*(void (__thiscall **)(int *, int, float *))(v8 + 24))(v7, v9, &flt_106F1CA8);
    }
    else
    {
      v10 = (float *)sub_100217F0(a1);
      v11 = *a1;
      v21 = *v10;
      v22 = v10[1];
      v12 = *(int (__thiscall **)(int *, float *))(v11 + 368);
      v23 = v10[2];
      v13 = v12(a1, &v21);
      (*(void (__thiscall **)(int *, int))(v11 + 2040))(a1, v13);
      v14 = *a1;
      v15 = sub_1007DD50(a1[647], &v21);
      v16 = (*(int (__thiscall **)(int *, int, int))(*a1 + 368))(a1, 2, v15);
      v24 = ((double (__thiscall *)(int *, int))*(_DWORD *)(v14 + 1520))(a1, v16);
      v17 = (float *)sub_1007DD50(a1[647], a2);
      v20[0] = *v17 - v21;
      v20[1] = v17[1] - v22;
      v20[2] = v17[2] - v23;
      v18 = sub_100D7A40(v20);
      if ( v18 > v24 )
      {
        flt_105FE1B4 = *(float *)(dword_106B31C8 + 12) + 0.1;
        if ( !(unsigned __int8)sub_100846A0(0, 0) )
          (*(void (__thiscall **)(int *, int))(*a1 + 1312))(a1, 11);
      }
    }
  }
}
