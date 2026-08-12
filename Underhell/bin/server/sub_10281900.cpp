int __usercall sub_10281900@<eax>(int a1@<ecx>, int a2@<ebx>, float a3@<ebp>, int a4@<edi>)
{
  int *v4; // esi
  unsigned int v5; // eax
  float v6; // edx
  float v7; // eax
  int *v8; // edi
  _DWORD *v9; // esi
  int v10; // eax
  int v11; // ecx
  const char *v12; // eax
  const char *v13; // ecx
  int v14; // eax
  int *v16; // ecx
  int v17; // esi
  int result; // eax
  const char *v19; // [esp-Ch] [ebp-12Ch]
  const char *v20; // [esp-8h] [ebp-128h]
  int v22; // [esp+18h] [ebp-108h]
  float v23[22]; // [esp+24h] [ebp-FCh] BYREF
  _BYTE v24[12]; // [esp+7Ch] [ebp-A4h] BYREF
  int v25; // [esp+88h] [ebp-98h] BYREF
  _DWORD *v26; // [esp+C8h] [ebp-58h]
  _DWORD v27[3]; // [esp+D8h] [ebp-48h] BYREF
  float v28[3]; // [esp+E4h] [ebp-3Ch] BYREF
  float v29[3]; // [esp+F0h] [ebp-30h] BYREF
  float v30[3]; // [esp+FCh] [ebp-24h] BYREF
  int v31; // [esp+108h] [ebp-18h]
  int v32; // [esp+10Ch] [ebp-14h]
  int *v33; // [esp+110h] [ebp-10h]
  float v34; // [esp+114h] [ebp-Ch]
  void *v35; // [esp+118h] [ebp-8h]
  int v36; // [esp+11Ch] [ebp-4h]
  void *retaddr; // [esp+120h] [ebp+0h]

  sub_100E38F0((float *)a1);
  if ( *(_DWORD *)(a1 + 260) )
  {
    result = sub_100EC3F0((_DWORD *)a1, (int)nullsub_4, 0.0, 0);
    *(_DWORD *)(a1 + 200) = sub_10281720;
    return result;
  }
  v16 = (int *)a1;
  v17 = v36;
  v36 = a2;
  v34 = a3;
  v35 = retaddr;
  v22 = v17;
  v4 = v16;
  v33 = v16;
  sub_10265570(v27, (int)v16, 0);
  v5 = (unsigned int)v4[63] >> 11;
  v27[0] = &`CDecal::StaticDecal'::`2'::CTraceFilterValidForDecal::`vftable';
  v32 = 0;
  if ( (v5 & 1) != 0 )
    sub_100DAE60((int)v4);
  v6 = *((float *)v4 + 146);
  v7 = *((float *)v4 + 147);
  v8 = v4 + 145;
  LODWORD(v30[0]) = v4[145];
  v30[1] = v6;
  v30[2] = v7;
  v29[0] = v30[0] + 5.0;
  v29[1] = v6 + 5.0;
  v29[2] = v7 + 5.0;
  v28[0] = v30[0] - 5.0;
  v28[1] = v6 - 5.0;
  v28[2] = v7 - 5.0;
  sub_1001F180(v23, v28, v29);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_106B31F4 + 16))(
    dword_106B31F4,
    v23,
    33570827,
    v27,
    v24,
    a4,
    v22);
  if ( *(_DWORD *)(dword_106CE63C + 48) )
    sub_101A0AD0((int)v24, (int)&v25, 255, 0, 0, 1, -1.0);
  if ( !(_WORD)v26 )
  {
    v31 = 0;
    goto LABEL_23;
  }
  v31 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v26[6]);
  if ( !v31 )
  {
LABEL_23:
    (*(void (__thiscall **)(int, float *, int, int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 160))(
      dword_106B31D0,
      v30,
      v4[200],
      v31,
      v32,
      *((unsigned __int8 *)v4 + 804));
    return sub_10246D70(v4);
  }
  v9 = v26;
  if ( !v26 )
    goto LABEL_22;
  v10 = (*(int (__thiscall **)(_DWORD *))(*v26 + 24))(v26);
  v11 = v9[63] >> 11;
  v32 = v10;
  if ( (v11 & 1) != 0 )
    sub_100DAE60((int)v9);
  if ( (v33[63] & 0x800) != 0 )
    sub_100DAE60((int)v33);
  sub_10421BA0(v8, v9 + 125, v30);
  if ( v32 )
  {
LABEL_22:
    v4 = v33;
    goto LABEL_23;
  }
  v12 = (const char *)v9[65];
  if ( !v12 )
    v12 = String;
  v13 = (const char *)v9[23];
  if ( !v13 )
    v13 = String;
  v14 = (*(int (__thiscall **)(int, _DWORD, const char *, const char *))(*(_DWORD *)dword_106B31D0 + 72))(
          dword_106B31D0,
          v9[6],
          v13,
          v12);
  Warning(
    "Suppressed StaticDecal which would have hit entity %i (class:%s, name:%s) with modelindex = 0\n",
    v14,
    v19,
    v20);
  return sub_10246D70(v33);
}
