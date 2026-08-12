void __usercall sub_100ABE20(_DWORD *a1@<ecx>, int a2@<edi>)
{
  float *v3; // eax
  double v4; // st7
  char v5; // bl
  int v6; // eax
  unsigned int v7; // eax
  int v8; // eax
  float *v9; // eax
  int v10; // esi
  float *v11; // [esp-18h] [ebp-90h]
  int v12; // [esp-14h] [ebp-8Ch]
  int v13; // [esp-8h] [ebp-80h]
  _BYTE v14[32]; // [esp+4h] [ebp-74h] BYREF
  float v15; // [esp+24h] [ebp-54h]
  int v16; // [esp+50h] [ebp-28h]
  float v17[3]; // [esp+58h] [ebp-20h] BYREF
  float v18[3]; // [esp+64h] [ebp-14h] BYREF
  float v19; // [esp+70h] [ebp-8h]
  char v20; // [esp+77h] [ebp-1h]
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  *(float *)(a1[1] + 4676) = 1.0;
  (*(void (__thiscall **)(_DWORD *))(*a1 + 140))(a1);
  if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[1] + 844))(a1[1]) )
  {
    v3 = (float *)a1[2];
    v18[0] = v3[38];
    v18[1] = v3[39];
    v18[2] = v3[40] - 2.0;
    v17[0] = v3[38];
    v17[1] = v3[39];
    v17[2] = v3[40];
    v4 = v3[18];
    v19 = v3[18];
    if ( v4 <= 0.0 )
    {
      v20 = 0;
      v5 = 0;
    }
    else
    {
      v5 = 1;
    }
    v13 = a2;
    if ( v4 > 140.0
      && ((v6 = sub_100F7AF0(a1[1]), (a2 = v6) == 0) || (sub_10038150(v6), v19 - *(float *)(a2 + 252) > 140.0))
      || v5 && *(_BYTE *)(a1[1] + 316) == 9 )
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 188))(a1, 0);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, float *, float *, int, int, _BYTE *, int))(*a1 + 40))(
        a1,
        v17,
        v18,
        33636363,
        8,
        v14,
        v13);
      if ( v16 && v15 >= 0.7
        || ((v7 = *(_DWORD *)(a1[2] + 4), v7 == -1)
         || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1[2] + 4) & 0xFFF) + 2) != v7 >> 12
          ? (v8 = 0)
          : (v8 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1[2] + 4) & 0xFFF) + 1)),
            (v12 = v8,
             v11 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 36))(a1),
             v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*a1 + 32))(a1),
             sub_100ABAA0((int)&savedregs, a2, (int)a1, v17, v18, v9, v11, v12, 33636363, 8, (int)v14),
             v16)
         && v15 >= 0.7) )
      {
        (*(void (__thiscall **)(_DWORD *, _BYTE *))(*a1 + 188))(a1, v14);
      }
      else
      {
        (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 188))(a1, 0);
        if ( *(float *)(a1[2] + 72) > 0.0 )
        {
          v10 = a1[1];
          if ( *(_BYTE *)(v10 + 316) != 8 )
            *(float *)(v10 + 4676) = 0.25;
        }
      }
    }
  }
}
