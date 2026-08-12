int __userpurge sub_100D8790@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, float a4, float a5)
{
  double v6; // st7
  double (__thiscall *v7)(int, int *); // eax
  double v8; // st7
  double v9; // st7
  double v10; // st6
  int v13[3]; // [esp+20h] [ebp-60h] BYREF
  float v14; // [esp+2Ch] [ebp-54h] BYREF
  float v15; // [esp+30h] [ebp-50h]
  float v16; // [esp+34h] [ebp-4Ch]
  float v17; // [esp+38h] [ebp-48h]
  float v18; // [esp+3Ch] [ebp-44h]
  float v19; // [esp+40h] [ebp-40h]
  int v20; // [esp+44h] [ebp-3Ch]
  char v21; // [esp+48h] [ebp-38h]
  int v22; // [esp+4Ch] [ebp-34h]
  int v23; // [esp+50h] [ebp-30h]
  int v24; // [esp+54h] [ebp-2Ch]
  int v25; // [esp+58h] [ebp-28h]
  char v26; // [esp+5Ch] [ebp-24h]
  _DWORD v27[5]; // [esp+60h] [ebp-20h] BYREF
  float v28; // [esp+74h] [ebp-Ch] BYREF
  float v29; // [esp+78h] [ebp-8h]
  float v30; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF
  float v32; // [esp+8Ch] [ebp+Ch]
  float v33; // [esp+8Ch] [ebp+Ch]

  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v13[0] = (int)&CUserCmd::`vftable';
  memset(v27, 0, sizeof(v27));
  v13[1] = 0;
  v13[2] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  if ( LOBYTE(a5) )
  {
    sub_100D7C50((float *)a1, a4);
    sub_100D75F0((int *)a1, (int)v13);
    v32 = *(float *)(dword_1043290C + 44);
    v6 = ((double (__thiscall *)(int, int *))*(_DWORD *)(*(_DWORD *)a1 + 64))(a1, dword_10432614);
    v7 = *(double (__thiscall **)(int, int *))(*(_DWORD *)a1 + 64);
    v19 = v6 * v32 + v19;
    v33 = *(float *)(dword_1043290C + 44);
    v8 = v7(a1, dword_10432608);
    v19 = v19 - v8 * v33;
    sub_100D7770((int *)a1, (int)v13);
    if ( !*(_BYTE *)(a1 + 184) && *(_BYTE *)(a1 + 49) )
      sub_100D9C60(v13);
    sub_100D5540(a1, a2, a4, (int)v13);
  }
  sub_100D81B0((float *)a1, (int)&savedregs, a2, a1, (int)v13);
  (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, &v28, a3);
  v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 32))(a1, 0);
  if ( dword_103E0E84 )
  {
    v9 = v28;
    v14 = v28;
    v10 = v29;
    v15 = v29;
    v16 = v30;
    *(float *)(a1 + 232) = v30;
    *(float *)(a1 + 224) = v9;
    *(float *)(a1 + 228) = v10;
  }
  else
  {
    v14 = *(float *)(a1 + 224);
    v15 = *(float *)(a1 + 228);
    v16 = *(float *)(a1 + 232);
  }
  if ( (*(unsigned __int8 (__cdecl **)(_DWORD, int *))(*(_DWORD *)dword_1044CC48 + 84))(LODWORD(a4), v13) )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, &v14);
    (*(void (__thiscall **)(void *, float *))(*(_DWORD *)off_103ED0FC + 52))(off_103ED0FC, &v14);
  }
  v13[0] = (int)&CUserCmd::`vftable';
  return sub_1011A810(v27);
}
