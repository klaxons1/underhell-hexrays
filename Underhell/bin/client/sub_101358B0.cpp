void __usercall sub_101358B0(float *a1@<edi>, float *a2@<esi>)
{
  double (__stdcall *v2)(void *); // edx
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  _BYTE v11[12]; // [esp+Ch] [ebp-28h] BYREF
  float v12; // [esp+18h] [ebp-1Ch] BYREF
  float v13; // [esp+1Ch] [ebp-18h]
  float v14; // [esp+20h] [ebp-14h]
  float v15; // [esp+24h] [ebp-10h] BYREF
  float v16; // [esp+28h] [ebp-Ch]
  float v17; // [esp+2Ch] [ebp-8h]
  float v18; // [esp+30h] [ebp-4h]

  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, &flt_10439F64);
  (*(void (__stdcall **)(_DWORD, int))(*off_103ED0D8 + 40))(*((float *)off_103DC81C + 2), 1);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &flt_10439F64);
  sub_101EE040(&flt_10439F64, &v15, &v12, v11);
  v2 = *(double (__stdcall **)(void *))(*off_103ED0D8 + 64);
  v18 = *(float *)(dword_10439F2C + 44) * *((float *)off_103DC81C + 2) * 320.0;
  v3 = v2(&unk_104326C8);
  v4 = v3 * v18;
  flt_10439F58 = v15 * v4 + flt_10439F58;
  flt_10439F5C = v16 * v4 + flt_10439F5C;
  flt_10439F60 = v4 * v17 + flt_10439F60;
  v5 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &unk_104326BC);
  v6 = v5 * v18;
  flt_10439F58 = flt_10439F58 - v15 * v6;
  flt_10439F5C = flt_10439F5C - v16 * v6;
  flt_10439F60 = flt_10439F60 - v6 * v17;
  v7 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &unk_104326A4);
  v8 = v7 * v18;
  flt_10439F58 = v12 * v8 + flt_10439F58;
  flt_10439F5C = v13 * v8 + flt_10439F5C;
  flt_10439F60 = v8 * v14 + flt_10439F60;
  v9 = ((double (__thiscall *)(int *, void *))*(_DWORD *)(*off_103ED0D8 + 64))(off_103ED0D8, &unk_104326B0);
  v10 = v9 * v18;
  flt_10439F58 = flt_10439F58 - v12 * v10;
  flt_10439F5C = flt_10439F5C - v13 * v10;
  flt_10439F60 = flt_10439F60 - v10 * v14;
  *a1 = flt_10439F58;
  a1[1] = flt_10439F5C;
  a1[2] = flt_10439F60;
  *a2 = flt_10439F64;
  a2[1] = flt_10439F68;
  a2[2] = flt_10439F6C;
}
