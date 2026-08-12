void __usercall sub_1015A330(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int v3; // ecx
  float *v4; // eax
  double v5; // st7
  char v6; // bl
  unsigned int v7; // eax
  int v8; // eax
  float *v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // bl
  int v13; // ecx
  int v14; // eax
  float *v15; // [esp-18h] [ebp-90h]
  int v16; // [esp-14h] [ebp-8Ch]
  int v17; // [esp-8h] [ebp-80h]
  _BYTE v18[32]; // [esp+4h] [ebp-74h] BYREF
  float v19; // [esp+24h] [ebp-54h]
  __int16 v20; // [esp+44h] [ebp-34h]
  int v21; // [esp+50h] [ebp-28h]
  float v22[3]; // [esp+58h] [ebp-20h] BYREF
  float v23[3]; // [esp+64h] [ebp-14h] BYREF
  float v24; // [esp+70h] [ebp-8h]
  char v25; // [esp+77h] [ebp-1h]
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  *(float *)(a1[1] + 4512) = 1.0;
  (*(void (__thiscall **)(_DWORD *))(*a1 + 140))(a1);
  v3 = a1[1];
  if ( (*(_DWORD *)(v3 + 3416) & 8) == 0 )
  {
    v4 = (float *)a1[2];
    v23[0] = v4[38];
    v23[1] = v4[39];
    v23[2] = v4[40] - 2.0;
    v22[0] = v4[38];
    v22[1] = v4[39];
    v22[2] = v4[40];
    v5 = v4[18];
    v24 = v4[18];
    if ( v5 <= 0.0 )
    {
      v25 = 0;
      v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    v17 = a2;
    if ( v5 > 140.0 )
    {
      a2 = sub_101C5260(v3);
      if ( !a2 )
        goto LABEL_30;
      if ( (*(_DWORD *)(a2 + 252) & 0x1000) != 0 )
        sub_100DAFD0(a2);
      if ( v24 - *(float *)(a2 + 484) > 140.0 )
        goto LABEL_30;
    }
    if ( v6 && *(_BYTE *)(a1[1] + 306) == 9 )
    {
LABEL_30:
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 188))(a1, 0);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, float *, float *, int, int, _BYTE *, int))(*a1 + 40))(
        a1,
        v22,
        v23,
        33636363,
        8,
        v18,
        v17);
      if ( v21 && v19 >= 0.7
        || ((v7 = *(_DWORD *)(a1[2] + 4), v7 == -1)
         || off_1061BE18[4 * (*(_DWORD *)(a1[2] + 4) & 0xFFF) + 2] != v7 >> 12
          ? (v8 = 0)
          : (v8 = off_1061BE18[4 * (*(_DWORD *)(a1[2] + 4) & 0xFFF) + 1]),
            (v16 = v8,
             v15 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1),
             v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 32))(a1),
             sub_10159FB0((int)&savedregs, a2, (int)a1, v22, v23, v9, v15, v16, 33636363, 8, (int)v18),
             v21)
         && v19 >= 0.7) )
      {
        (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 188))(a1, v18);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 188))(a1, 0);
        if ( *(float *)(a1[2] + 72) > 0.0 )
        {
          v10 = a1[1];
          if ( *(_BYTE *)(v10 + 306) != 8 )
            *(float *)(v10 + 4512) = 0.25;
        }
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)a1[1] + 1088))(a1[1]) )
      {
        v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B6E60 + 40))(dword_106B6E60);
        v12 = *(_BYTE *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 20))(v11, v20) + 72);
        v13 = a1[1];
        LOBYTE(v24) = v12;
        if ( !sub_101C5260(v13) )
        {
          LOBYTE(v24) = 0;
          v12 = 0;
        }
        v14 = a1[1];
        if ( *(_BYTE *)(v14 + 4517) != v12 )
          sub_101319B0(v14, SLOBYTE(v24));
        *(_BYTE *)(a1[1] + 4517) = v12;
      }
    }
  }
}
