void __thiscall sub_1009D450(int this, float *a2, float *a3, float *a4, float *a5, int a6)
{
  int v7; // ecx
  double v8; // st7
  int v9; // eax
  float v10[3]; // [esp+8h] [ebp-A8h] BYREF
  _BYTE v11[16]; // [esp+14h] [ebp-9Ch] BYREF
  float v12; // [esp+24h] [ebp-8Ch]
  float v13; // [esp+28h] [ebp-88h]
  float v14; // [esp+2Ch] [ebp-84h]
  float v15; // [esp+30h] [ebp-80h]
  float v16; // [esp+34h] [ebp-7Ch]
  float v17; // [esp+38h] [ebp-78h]
  float v18; // [esp+3Ch] [ebp-74h]
  float v19; // [esp+40h] [ebp-70h]
  float v20; // [esp+44h] [ebp-6Ch]
  float v21; // [esp+48h] [ebp-68h]
  float v22; // [esp+4Ch] [ebp-64h]
  int v23; // [esp+50h] [ebp-60h]
  int v24; // [esp+54h] [ebp-5Ch]
  __int16 v25; // [esp+58h] [ebp-58h]
  float v26; // [esp+5Ch] [ebp-54h]
  float v27; // [esp+60h] [ebp-50h]
  float v28; // [esp+64h] [ebp-4Ch]
  float v29; // [esp+68h] [ebp-48h]
  float v30; // [esp+6Ch] [ebp-44h]
  float v31; // [esp+70h] [ebp-40h]
  int v32; // [esp+74h] [ebp-3Ch]
  char v33; // [esp+78h] [ebp-38h]
  int v34; // [esp+7Ch] [ebp-34h]
  int v35; // [esp+80h] [ebp-30h]
  int v36; // [esp+84h] [ebp-2Ch]
  int v37; // [esp+88h] [ebp-28h]
  float v38[3]; // [esp+8Ch] [ebp-24h] BYREF
  float v39[3]; // [esp+98h] [ebp-18h] BYREF
  float v40[3]; // [esp+A4h] [ebp-Ch] BYREF

  if ( *(_BYTE *)(this + 4) )
  {
    v26 = 1024.0;
    v34 = -1;
    v35 = -1;
    v27 = 2.0;
    v36 = -1;
    v37 = -1;
    v28 = 16.0;
    v29 = 0.00050000002;
    v25 = 0;
    v33 = 0;
    v30 = 0.0;
    v32 = 0;
    v31 = 0.0;
    v39[0] = *a3;
    v39[1] = a3[1];
    v39[2] = a3[2];
    v40[0] = *a4;
    v40[1] = a4[1];
    v40[2] = a4[2];
    v38[0] = *a5;
    v38[1] = a5[1];
    v38[2] = a5[2];
    off_103EDFEC();
    off_103EDFEC();
    off_103EDFEC();
    sub_101F0FA0(v39, v40, v38, v11);
    v10[0] = *a2;
    v10[1] = a2[1];
    v10[2] = a2[2];
    v14 = 45.0;
    v15 = 30.0;
    v16 = *(float *)(dword_1042DB64 + 44);
    v17 = *(float *)(dword_1042DB1C + 44);
    v18 = *(float *)(dword_1042DAD4 + 44);
    v19 = 1.0;
    v20 = 1.0;
    v21 = 1.0;
    v7 = *(_DWORD *)(this + 24);
    v22 = *(float *)(dword_1042DBF4 + 44);
    v12 = *(float *)(dword_1042DA44 + 44);
    v8 = *(float *)(dword_1042DA8C + 44);
    v9 = *(unsigned __int16 *)(this + 12);
    v23 = v7;
    v13 = v8;
    LOBYTE(v25) = 1;
    v24 = 0;
    if ( (_WORD)v9 == 0xFFFF )
      *(_WORD *)(this + 12) = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)off_103DD080 + 72))(off_103DD080, v10);
    else
      (*(void (__thiscall **)(void *, int, float *))(*(_DWORD *)off_103DD080 + 76))(off_103DD080, v9, v10);
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)off_103DD080 + 84))(*(unsigned __int16 *)(this + 12), 1);
  }
}
