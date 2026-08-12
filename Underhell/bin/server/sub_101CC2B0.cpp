int __thiscall sub_101CC2B0(int this, _DWORD *a2, int a3)
{
  unsigned int v4; // eax
  int result; // eax
  int v6; // edi
  double v7; // st6
  double v8; // st5
  double v9; // st7
  _DWORD *v10; // ebx
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // rt1
  double v15; // st5
  double v16; // rtt
  int v17; // ebx
  double v18; // st4
  double v19; // st6
  _DWORD *v20; // edi
  double v21; // st7
  int v22; // ecx
  double v23; // st6
  double v24; // st5
  double v25; // st5
  int v26; // edi
  unsigned __int16 v27; // ax
  float v28; // [esp+8h] [ebp-38h]
  float v29[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v30; // [esp+28h] [ebp-18h] BYREF
  float v31; // [esp+2Ch] [ebp-14h]
  float v32; // [esp+30h] [ebp-10h]
  float v33; // [esp+34h] [ebp-Ch]
  float v34; // [esp+38h] [ebp-8h]
  float v35; // [esp+3Ch] [ebp-4h]
  int v36; // [esp+48h] [ebp+8h]

  if ( a2 )
    *(_DWORD *)(this + 3920) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  else
    *(_DWORD *)(this + 3920) = -1;
  *(float *)(this + 3924) = *(float *)(dword_106B31C8 + 12);
  if ( sub_101CB160((void *)(this - 1120), "onpickup", "boogie") )
  {
    v4 = a2[545];
    if ( v4 == -1 || off_1061BE18[4 * (a2[545] & 0xFFF) + 2] != v4 >> 12 || !off_1061BE18[4 * (a2[545] & 0xFFF) + 1] )
      sub_10219820(this - 1120, 150.0, *(float *)(dword_106B31C8 + 12), 3.0, 0x10000);
  }
  result = *(_DWORD *)(this - 872) >> 12;
  if ( (*(_DWORD *)(this - 872) & 0x1000) != 0 )
    result = sub_10218FC0(this - 1120, 0);
  if ( *(_DWORD *)(this - 700) == 3 )
  {
    v28 = *(float *)(dword_106B31C8 + 12) + 5.0;
    result = sub_100EC3F0((_DWORD *)(this - 1120), (int)sub_101CB6B0, v28, off_10638D5C);
  }
  if ( a3 == 3 )
  {
    if ( sub_101CB160((void *)(this - 1120), "onlaunch", "spin_zaxis") )
    {
      v6 = 0;
      v7 = 0.0;
      v33 = 0.0;
      v8 = 0.0;
      v34 = 0.0;
      v9 = 0.0;
      v35 = 0.0;
      if ( *(int *)(this + 12) > 0 )
      {
        v10 = (_DWORD *)(this + 36);
        do
        {
          (*(void (__thiscall **)(_DWORD, float *, _DWORD))(*(_DWORD *)*v10 + 188))(*v10, &v30, 0);
          v11 = v33 + v30;
          ++v6;
          v10 += 6;
          v33 = v11;
          v12 = v31 + v34;
          v34 = v12;
          v13 = v32 + v35;
          v35 = v13;
        }
        while ( v6 < *(_DWORD *)(this + 12) );
        v14 = v13;
        v15 = v11;
        v9 = v12;
        v16 = v15;
        v8 = v14;
        v7 = v16;
      }
      v36 = *(_DWORD *)(this + 12);
      v17 = 0;
      v18 = v7 * (1.0 / (double)v36);
      v19 = 1.0 / (double)v36;
      v33 = v18;
      v34 = v9 * v19;
      v35 = v8 * v19;
      if ( v36 > 0 )
      {
        v20 = (_DWORD *)(this + 36);
        do
        {
          (*(void (__thiscall **)(_DWORD, float *, _DWORD))(*(_DWORD *)*v20 + 188))(*v20, &v30, 0);
          v21 = v30 - v33;
          v22 = *v20;
          v30 = v21;
          v23 = v31 - v34;
          v31 = v23;
          v24 = v32 - v35;
          v32 = v24;
          v25 = v24 * 0.0;
          v29[0] = (v25 - v23) * 100.0;
          v29[1] = (v21 - v25) * 100.0;
          v29[2] = (v23 * 0.0 - 0.0 * v21) * 100.0;
          (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v22 + 208))(v22, v29, 0);
          ++v17;
          v20 += 6;
        }
        while ( v17 < *(_DWORD *)(this + 12) );
      }
    }
    v26 = *(_DWORD *)(this - 696);
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 76))(v26);
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v26 + 72))(v26, v27 | 0x100);
    *(_BYTE *)(this + 3909) = 1;
  }
  return result;
}
