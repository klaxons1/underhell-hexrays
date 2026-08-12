bool __userpurge sub_10315590@<al>(_DWORD *a1@<ecx>, int a2@<edi>, float *a3, float *a4)
{
  int v6; // eax
  float *v7; // eax
  int v8; // eax
  int *v9; // ebx
  int v10; // edi
  _DWORD *v11; // eax
  double v13; // st7
  long double v14; // st7
  int v15; // eax
  double v16; // st7
  double v17; // st5
  double v18; // st7
  double v19; // st7
  float v20; // [esp+14h] [ebp-3Ch]
  float v21; // [esp+18h] [ebp-38h]
  float v22; // [esp+2Ch] [ebp-24h] BYREF
  float v23; // [esp+30h] [ebp-20h]
  float v24; // [esp+38h] [ebp-18h] BYREF
  float v25; // [esp+3Ch] [ebp-14h]
  float v26; // [esp+40h] [ebp-10h]
  float v27; // [esp+44h] [ebp-Ch] BYREF
  float v28; // [esp+48h] [ebp-8h]
  float v29; // [esp+4Ch] [ebp-4h]
  float v30; // [esp+58h] [ebp+8h]

  if ( a1[1030] == 4 && a1[1053] == 6 )
    return 1;
  if ( !(*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
    return 0;
  v6 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
  v7 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v6 + 536))(v6, &v22);
  if ( v7[2] * v7[2] + *v7 * *v7 + v7[1] * v7[1] < 62500.0 )
    return 1;
  if ( !(*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1) )
    return 1;
  v8 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
    return 1;
  v9 = (int *)(*(int (__thiscall **)(_DWORD *, int))(*a1 + 368))(a1, a2);
  v10 = *v9;
  v11 = sub_10019640(a1);
  (*(void (__thiscall **)(int *, float *, _DWORD *, _DWORD))(v10 + 520))(v9, &v27, v11, 0);
  v13 = a3[2] - v29;
  v14 = v13 <= 0.0 ? 0.0 : sqrt((v13 + v13) / *(float *)(dword_106B6F0C + 44));
  v30 = v14;
  v15 = (*(int (__thiscall **)(_DWORD *))(*a1 + 368))(a1);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)v15 + 536))(v15, &v24);
  v27 = v24 * v30 + v27;
  v28 = v25 * v30 + v28;
  v22 = *a4 * v30 + *a3;
  v23 = v30 * a4[1] + a3[1];
  v16 = v24 * v24 + v25 * v25 + v26 * v26;
  v17 = 200.0;
  if ( v16 <= 500.0 )
  {
    if ( v16 >= 200.0 )
      v17 = v16;
    v18 = 200.0;
  }
  else
  {
    v18 = 200.0;
    v17 = 500.0;
  }
  v21 = v18;
  v20 = v17;
  v19 = sub_1001F0E0(v20, v21, 500.0, 0.30000001, 1.0);
  return v19 * v19 * 360000.0 <= (v22 - v27) * (v22 - v27) + (v23 - v28) * (v23 - v28);
}
