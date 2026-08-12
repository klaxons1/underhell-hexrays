int __usercall sub_10276670@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int result; // eax
  float *v4; // edi
  int v5; // ecx
  int *v6; // ecx
  int v7; // edx
  int *v8; // ecx
  float *v9; // ebx
  float *v10; // eax
  int v11; // edx
  int v12; // eax
  double v13; // st7
  int v14; // eax
  const char *v15; // esi
  float v16[3]; // [esp+48h] [ebp-64h] BYREF
  int v17; // [esp+54h] [ebp-58h] BYREF
  float v18; // [esp+58h] [ebp-54h]
  float v19; // [esp+5Ch] [ebp-50h]
  float v20[3]; // [esp+60h] [ebp-4Ch] BYREF
  float v21[3]; // [esp+6Ch] [ebp-40h] BYREF
  float v22[3]; // [esp+78h] [ebp-34h] BYREF
  float v23; // [esp+84h] [ebp-28h]
  float v24; // [esp+88h] [ebp-24h]
  float v25; // [esp+8Ch] [ebp-20h]
  float v26; // [esp+90h] [ebp-1Ch] BYREF
  float v27; // [esp+94h] [ebp-18h]
  float v28; // [esp+98h] [ebp-14h]
  float v29; // [esp+9Ch] [ebp-10h] BYREF
  float v30; // [esp+A0h] [ebp-Ch]
  float v31; // [esp+A4h] [ebp-8h]
  int v32; // [esp+A8h] [ebp-4h]

  result = sub_100D1940((_DWORD *)a1);
  v4 = (float *)result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      (*(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)a1 + 1132))(a1, 1, 0.0, a2);
      (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 1116))(v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, 181);
      (*(void (__thiscall **)(float *, int))(*(_DWORD *)v4 + 1300))(v4, 5);
      sub_100D18C0(a1);
      v5 = *(_DWORD *)(a1 + 1132);
      *(float *)&v32 = *(float *)(dword_106B31C8 + 12) + 0.0;
      if ( v5 != v32 )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v6 = *(int **)(a1 + 24);
          if ( v6 )
            sub_100194B0(v6, 1132);
        }
        *(float *)(a1 + 1132) = *(float *)&v32;
      }
      v7 = *(_DWORD *)(a1 + 1200) - 1;
      v32 = v7;
      if ( *(_DWORD *)(a1 + 1200) != v7 )
      {
        if ( *(_BYTE *)(a1 + 84) )
        {
          *(_BYTE *)(a1 + 88) |= 1u;
        }
        else
        {
          v8 = *(int **)(a1 + 24);
          if ( v8 )
          {
            sub_100194B0(v8, 1200);
            v7 = v32;
          }
        }
        *(_DWORD *)(a1 + 1200) = v7;
      }
      (*(void (__thiscall **)(float *, float *, _DWORD))(*(_DWORD *)v4 + 1504))(v4, &v29, 1.0);
      v4[1043] = *(float *)(dword_106B31C8 + 12) + 1.0;
      sub_101E3110(v4, 2u, 0, 0);
      (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v4 + 968))(v4, &v26);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      sub_104222B0(a1 + 704, v21, v20, v22);
      v23 = v20[0] * 2.0;
      v24 = v20[1] * 2.0;
      v25 = 2.0 * v20[2];
      *(float *)&v17 = v26 + v23;
      v18 = v27 + v24;
      v26 = v21[0] * 4.0 + *(float *)&v17 - v22[0] * 4.0;
      v27 = v21[1] * 4.0 + v18 - v22[1] * 4.0;
      v28 = 4.0 * v21[2] + v28 + v25 - v22[2] * 4.0;
      v29 = v29 * 1000.0;
      v30 = v30 * 1000.0;
      v31 = 1000.0 * v31;
      sub_10422540(&v29, v16);
      v9 = (float *)sub_100E3960((int)"grenade_ar2", &v26, v16, (int)v4);
      sub_100DD660((int)v9, &v29);
      v10 = sub_1014AE30((float *)&v17, -400.0, 400.0);
      sub_100D7260(v9, v10);
      sub_100E0970((int)v9, v11, 5, 1);
      v12 = sub_100D1940((_DWORD *)a1);
      sub_100F4E50((unsigned int *)v9, v12);
      (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)v9 + 500))(v9, *(float *)(dword_106CFF44 + 44));
      *(float *)&v32 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                         dword_106B31E4,
                         -2.0,
                         -1.0);
      v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -2.0,
              2.0);
      v17 = v32;
      v18 = v13;
      v19 = 0.0;
      sub_100F7A60(v4, (float *)&v17);
      if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
        sub_100DAE60(a1);
      v14 = sub_100D1940((_DWORD *)a1);
      sub_1023D4B0(1, (float *)(a1 + 580), 1700, 0.2, v14, 0, 0);
      if ( !*(_DWORD *)(a1 + 1200) && sub_100CF5D0(v4, *(_DWORD *)(a1 + 1192)) <= 0 )
        sub_101E8F80((int)v4, (int)"!HEV_AMO0", 0, 0);
      ++*(_DWORD *)(a1 + 1372);
      v15 = *(const char **)(a1 + 92);
      if ( !v15 )
        v15 = String;
      return (*(int (__thiscall **)(int, float *, int, const char *))(*(_DWORD *)off_10627F88 + 116))(
               off_10627F88,
               v4,
               1,
               v15);
    }
  }
  return result;
}
