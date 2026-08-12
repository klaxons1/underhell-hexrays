// bad sp value at call has been detected, the output may be wrong!
int __usercall sub_10218560@<eax>(int a1@<ebp>, int a2, int a3)
{
  int v3; // eax
  int *v4; // esi
  bool v5; // zf
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // ecx
  float v18[13]; // [esp-D8h] [ebp-E4h] BYREF
  char v19; // [esp-A2h] [ebp-AEh]
  char v20; // [esp-A1h] [ebp-ADh]
  float v21[8]; // [esp-80h] [ebp-8Ch] BYREF
  _BYTE v22[48]; // [esp-60h] [ebp-6Ch] BYREF
  float v23[3]; // [esp-30h] [ebp-3Ch] BYREF
  float v24; // [esp-24h] [ebp-30h]
  float v25[3]; // [esp-20h] [ebp-2Ch] BYREF
  float v26[3]; // [esp-14h] [ebp-20h] BYREF
  int v27; // [esp-8h] [ebp-14h]
  int v28; // [esp-4h] [ebp-10h]
  _DWORD v29[3]; // [esp+0h] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v29[0] = a1;
  v29[1] = retaddr;
  v3 = 0;
  v28 = 0;
  v27 = 0;
  if ( *(int *)a2 <= 0 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 12))(*(_DWORD *)(a2 + 8));
  v4 = (int *)(a2 + 32);
  do
  {
    v5 = *(v4 - 1) == 0;
    *((_BYTE *)&v29[-118] + v3) = 0;
    if ( !v5 && *v4 >= 0 )
    {
      (*(void (__thiscall **)(_DWORD, float *, _DWORD))(*(_DWORD *)*(v4 - 2) + 188))(*(v4 - 2), v23, 0);
      v6 = *(_DWORD *)(a2 + 8 * (3 * *v4 + 3));
      (*(void (__thiscall **)(int, float *, int *))(*(_DWORD *)v6 + 220))(v6, v26, v4 - 5);
      if ( *((_BYTE *)&v29[-118] + *v4) )
      {
        ++v28;
        *((_BYTE *)&v29[-118] + v27) = 1;
        goto LABEL_16;
      }
      v7 = v26[0] - v23[0];
      v25[0] = v7;
      v8 = v26[1] - v23[1];
      v25[1] = v8;
      v9 = v26[2] - v23[2];
      v25[2] = v9;
      if ( v9 * v9 + v8 * v8 + v7 * v7 > 1.0 )
      {
        v10 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)*(v4 - 2) + 116))(*(v4 - 2));
        v11 = *(_DWORD *)(a2 + 8 * (3 * *v4 + 3));
        v24 = v10 + v10;
        v12 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v11 + 116))(v11);
        if ( v12 > v24 )
        {
          *((_BYTE *)&v29[-118] + v27) = 1;
LABEL_15:
          ++v28;
          goto LABEL_16;
        }
        if ( sub_101DBBE0(*(v4 - 2), v25) )
        {
          sub_1001F180(v21, v26, v23);
          sub_10158540((int)v21, 33570827, a3, 0, (int)v18);
          if ( v18[11] < 1.0 || v19 || v20 )
          {
            *((_BYTE *)&v29[-118] + v27) = 1;
            goto LABEL_15;
          }
        }
      }
    }
LABEL_16:
    v3 = v27 + 1;
    v4 += 6;
    v27 = v3;
  }
  while ( v3 < *(_DWORD *)a2 );
  if ( !v28 )
    return (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 8) + 12))(*(_DWORD *)(a2 + 8));
  v13 = 0;
  v27 = 0;
  if ( *(int *)a2 > 0 )
  {
    v14 = (_DWORD *)(a2 + 24);
    do
    {
      if ( *((_BYTE *)&v29[-118] + v13) )
      {
        v15 = *(_DWORD *)(a2 + 8 * (3 * v14[2] + 3));
        (*(void (__thiscall **)(int, float *, _DWORD *))(*(_DWORD *)v15 + 220))(v15, v25, v14 - 3);
        v16 = *(_DWORD *)(a2 + 8 * (3 * v14[2] + 3));
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v16 + 212))(v16, v25, v26);
        (*(void (__thiscall **)(_DWORD, _BYTE *))(*(_DWORD *)*v14 + 192))(*v14, v22);
        sub_10421D00(v25, 3, v22);
        (*(void (__thiscall **)(_DWORD, _BYTE *, int))(*(_DWORD *)*v14 + 184))(*v14, v22, 1);
        (*(void (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*v14 + 196))(*v14, v26, &flt_106F1CA8);
        v13 = v27;
      }
      ++v13;
      v14 += 6;
      v27 = v13;
    }
    while ( v13 < *(_DWORD *)a2 );
  }
  return DevMsg(2, "TICK:%5d:Ragdoll separation count: %d\n", *(_DWORD *)(dword_106B31C8 + 24), v28);
}
