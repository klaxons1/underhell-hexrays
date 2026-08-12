void __usercall sub_101B24D0(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  float *v4; // eax
  float *v5; // ebx
  int v6; // edi
  int (__thiscall *v7)(float *, int); // eax
  double v8; // st7
  int v9; // eax
  float v10; // edx
  float v11; // ecx
  float v12; // eax
  int v13; // edx
  float *v14; // eax
  double v15; // st7
  int v16; // esi
  double v17; // st7
  float v18; // [esp+34h] [ebp-60h]
  float v19; // [esp+38h] [ebp-5Ch]
  _BYTE v21[4]; // [esp+54h] [ebp-40h] BYREF
  float v22; // [esp+58h] [ebp-3Ch]
  float v23[3]; // [esp+60h] [ebp-34h] BYREF
  float v24; // [esp+6Ch] [ebp-28h]
  float v25; // [esp+70h] [ebp-24h]
  float v26; // [esp+74h] [ebp-20h]
  int v27; // [esp+78h] [ebp-1Ch] BYREF
  int v28; // [esp+7Ch] [ebp-18h]
  int v29; // [esp+80h] [ebp-14h] BYREF
  float v30; // [esp+84h] [ebp-10h]
  float v31; // [esp+88h] [ebp-Ch]
  float v32; // [esp+8Ch] [ebp-8h]
  bool v33; // [esp+93h] [ebp-1h]

  if ( *(_DWORD *)(a1 + 208) == -1 )
  {
    v3 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 144))(dword_1047CA6C, 0);
    *(_DWORD *)(a1 + 208) = v3;
    (*(void (__thiscall **)(int, int, const char *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 120))(
      dword_1047CA6C,
      v3,
      "vgui/icons/icon_jalopy",
      1,
      0);
  }
  sub_102366F0(*(_DWORD *)(dword_1044ED74 + 48));
  v4 = (float *)sub_100422D0();
  v5 = v4;
  if ( v4
    && (v4[1304] != flt_10459240 || v4[1305] != *(float *)&qword_10459244 || v4[1306] != *((float *)&qword_10459244 + 1)) )
  {
    v6 = sub_102374F0(a1);
    v7 = *(int (__thiscall **)(float *, int))(*(_DWORD *)v5 + 536);
    v8 = *(float *)(dword_1044EDBC + 44) * 0.5;
    v28 = v6;
    v31 = v8;
    v9 = v7(v5, a2);
    v10 = v5[1305];
    v11 = v5[1304];
    v32 = *(float *)(v9 + 4);
    v12 = v5[1306];
    v25 = v10;
    v13 = *(_DWORD *)v5;
    v24 = v11;
    v26 = v12;
    v14 = (float *)(*(int (__thiscall **)(float *))(v13 + 36))(v5);
    v23[0] = v24 - *v14;
    v23[1] = v25 - v14[1];
    v23[2] = v26 - v14[2];
    sub_101EE190(v23, v21);
    v15 = sub_10076760(v32, v22);
    v30 = v15;
    v33 = -v31 < v15 && v31 > v15;
    (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA6C + 44))(dword_1047CA6C, 255, 255, 255);
    sub_101B2240(a1 - 44, v32);
    if ( v33 )
    {
      v32 = sub_101B21C0((char *)(a1 - 44), v30);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(a1 + 208));
      (*(void (__thiscall **)(int, _DWORD, int *, int *))(*(_DWORD *)dword_1047CA6C + 132))(
        dword_1047CA6C,
        *(_DWORD *)(a1 + 208),
        &v29,
        &v27);
      v16 = (int)((double)v28 * 1.25);
      v28 = v16;
      v27 = v16;
      v19 = 0.25 * v31;
      v18 = fabs(v30);
      v17 = sub_100260E0(v18, v19, v31, 1.0, 0.25);
      v29 = (int)(v17 * (double)v28);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        (int)v32 - (v29 >> 1),
        (v6 >> 1) - (v16 >> 1),
        (int)v32 - (v29 >> 1) + v29,
        (v6 >> 1) - (v16 >> 1) + v16);
    }
  }
}
