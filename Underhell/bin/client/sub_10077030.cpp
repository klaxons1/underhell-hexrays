char __usercall sub_10077030@<al>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, int a4, float a5, float a6, float a7)
{
  char v7; // al
  void (__thiscall *v8)(int, float *, float *, int, int, int); // edx
  int v9; // esi
  double v10; // st7
  int v11; // edi
  int (__thiscall *v12)(int); // eax
  int v13; // eax
  double v14; // st7
  float *v15; // eax
  unsigned __int8 v16; // bl
  unsigned __int8 v17; // al
  float v20; // [esp+28h] [ebp-48h]
  float v21[3]; // [esp+2Ch] [ebp-44h] BYREF
  float v22[3]; // [esp+38h] [ebp-38h] BYREF
  float v23; // [esp+44h] [ebp-2Ch] BYREF
  float v24; // [esp+48h] [ebp-28h]
  float v25; // [esp+4Ch] [ebp-24h]
  float v26; // [esp+50h] [ebp-20h] BYREF
  float v27; // [esp+54h] [ebp-1Ch]
  float v28; // [esp+58h] [ebp-18h]
  float v29; // [esp+5Ch] [ebp-14h] BYREF
  float v30; // [esp+60h] [ebp-10h]
  float v31; // [esp+64h] [ebp-Ch]
  float v32; // [esp+68h] [ebp-8h]
  unsigned __int8 v33; // [esp+6Fh] [ebp-1h]

  if ( byte_104133B0 || *(float *)(dword_10439DC4 + 44) > 0.0 )
    return -1;
  v7 = sub_10076F10(a4, a4, a5, a6);
  v8 = *(void (__thiscall **)(int, float *, float *, int, int, int))(*(_DWORD *)(a4 + 4) + 80);
  v33 = v7;
  v9 = a4 + 4;
  v8(a4 + 4, &v26, &v23, a2, a3, a1);
  v20 = (v26 - v23) * (v26 - v23) + (v27 - v24) * (v27 - v24) + (v28 - v25) * (v28 - v25);
  v10 = off_103EDFE0(v20);
  v11 = *(_DWORD *)dword_10413178;
  v12 = *(int (__thiscall **)(int))(*(_DWORD *)(a4 + 4) + 36);
  v32 = v10 * 0.5;
  v13 = v12(a4 + 4);
  if ( (*(int (__thiscall **)(int, int))(v11 + 36))(dword_10413178, v13) == 1 )
  {
    (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v9 + 84))(v9, v21, v22);
    v29 = (v22[0] + v21[0]) * 0.5;
    v30 = (v22[1] + v21[1]) * 0.5;
    v14 = 0.5 * (v22[2] + v21[2]);
  }
  else
  {
    v15 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    v29 = *v15;
    v30 = v15[1];
    v14 = v15[2];
  }
  v31 = v14;
  v16 = (*(int (__thiscall **)(int, float *, float, _DWORD))(*(_DWORD *)dword_10413178 + 136))(
          dword_10413178,
          &v29,
          COERCE_FLOAT(LODWORD(v32)),
          LODWORD(a7));
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 324))(dword_1041315C) )
    v17 = -1;
  else
    v17 = (*(int (__thiscall **)(int, float *, float, _DWORD))(*(_DWORD *)dword_10413178 + 140))(
            dword_10413178,
            &v29,
            COERCE_FLOAT(LODWORD(v32)),
            LODWORD(a7));
  if ( v17 < v16 )
    v16 = v17;
  if ( v16 < v33 )
    return v16;
  return v33;
}
