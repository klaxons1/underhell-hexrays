void __usercall sub_103D33B0(int a1@<ecx>, int a2@<edi>)
{
  int v3; // eax
  int v4; // ebx
  float v5; // edx
  float v6; // eax
  double v7; // st7
  int v8; // ecx
  float v9; // edx
  float v10; // eax
  double v11; // st7
  double v12; // st7
  char v13; // al
  int v14; // edi
  float v15; // [esp+10h] [ebp-44h]
  float v16; // [esp+10h] [ebp-44h]
  float v17; // [esp+14h] [ebp-40h]
  float v19[3]; // [esp+20h] [ebp-34h] BYREF
  float v20[3]; // [esp+2Ch] [ebp-28h] BYREF
  float v21; // [esp+38h] [ebp-1Ch] BYREF
  float v22; // [esp+3Ch] [ebp-18h]
  float v23; // [esp+40h] [ebp-14h]
  float v24; // [esp+44h] [ebp-10h] BYREF
  float v25; // [esp+48h] [ebp-Ch]
  int v26; // [esp+4Ch] [ebp-8h]
  float v27; // [esp+50h] [ebp-4h]

  v3 = sub_101811E0("prop_combine_ball", -1);
  v4 = v3;
  if ( v3 )
  {
    sub_103D2FA0(v3, *(float *)(a1 + 804));
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    v5 = *(float *)(a1 + 584);
    v6 = *(float *)(a1 + 588);
    v20[0] = *(float *)(a1 + 580);
    v20[1] = v5;
    v20[2] = v6;
    sub_100E0D20(v4, v20);
    *(_DWORD *)(v4 + 1168) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v7 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           *(float *)(a1 + 812),
           *(float *)(a1 + 816));
    v8 = *(_DWORD *)(a1 + 252);
    v27 = v7;
    if ( (v8 & 0x800) != 0 )
      sub_100DAE60(a1);
    v9 = *(float *)(a1 + 704);
    v10 = *(float *)(a1 + 708);
    v17 = *(float *)(a1 + 1008);
    v26 = *(_DWORD *)(a1 + 712);
    v11 = *(float *)(a1 + 1008);
    v25 = v10;
    v24 = v9;
    v15 = -v11;
    v19[0] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
               dword_106B31E4,
               LODWORD(v15),
               LODWORD(v17));
    v16 = -*(float *)(a1 + 1008);
    v12 = ((double (__stdcall *)(_DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
            LODWORD(v16),
            *(float *)(a1 + 1008));
    v24 = v24 + v19[0];
    v25 = v12 + v25;
    sub_104222B0(&v24, &v21, 0, 0);
    v21 = v21 * v27;
    v22 = v22 * v27;
    v23 = v27 * v23;
    sub_100DD660(v4, &v21);
    sub_10260750((char *)v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 136))(v4);
    v13 = *(_BYTE *)(v4 + 1144);
    if ( v13 != 3 )
    {
      if ( !v13 )
        *(float *)(v4 + 1164) = *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(v4 + 1144) = 3;
    }
    *(_DWORD *)(v4 + 1128) = *(_DWORD *)(a1 + 1004);
    if ( (*(_DWORD *)(a1 + 248) & 2) != 0 )
      sub_100EBE30(v4, 32);
    if ( (*(_BYTE *)(a1 + 248) & 1) != 0 )
    {
      v14 = sub_101811E0("npc_bullseye", -1);
      if ( v14 )
      {
        if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
          sub_100DAE60(v4);
        sub_100E0D20(v14, (float *)(v4 + 580));
        v19[0] = 0.0;
        v19[1] = 0.0;
        v19[2] = 0.0;
        sub_100E0EA0(v14, v19);
        (*(void (__thiscall **)(int, const char *, const char *, int))(*(_DWORD *)v14 + 128))(v14, "solid", "6", a2);
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v14 + 128))(v14, "targetname");
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 96))(v14);
        sub_10260750((char *)v14);
        (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 136))(v14);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 140))(v14, v4, -1);
        if ( *(_DWORD *)(v14 + 220) != 10 )
        {
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 464))(v14, v14 + 220);
          *(_DWORD *)(v14 + 220) = 10;
        }
      }
    }
  }
}
