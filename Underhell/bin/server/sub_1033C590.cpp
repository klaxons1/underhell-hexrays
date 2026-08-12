void __thiscall sub_1033C590(int this)
{
  float *v2; // eax
  double v3; // rt0
  double v4; // st6
  int v5; // eax
  float *v6; // eax
  double v7; // st7
  double v8; // st7
  double v9; // st5
  double v10; // st7
  double v11; // rt2
  double v12; // st7
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // ebx
  int v17; // ecx
  int v18; // eax
  int (__thiscall *v19)(int); // edx
  float *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // esi
  int v23; // [esp+4h] [ebp-5Ch]
  int v24; // [esp+Ch] [ebp-54h]
  int v25; // [esp+24h] [ebp-3Ch] BYREF
  float v26; // [esp+28h] [ebp-38h]
  int v27; // [esp+30h] [ebp-30h] BYREF
  float v28; // [esp+34h] [ebp-2Ch]
  int v29; // [esp+3Ch] [ebp-24h] BYREF
  float v30; // [esp+40h] [ebp-20h]
  float v31; // [esp+44h] [ebp-1Ch]
  int v32; // [esp+48h] [ebp-18h] BYREF
  float v33; // [esp+4Ch] [ebp-14h]
  float v34; // [esp+50h] [ebp-10h]
  int v35; // [esp+54h] [ebp-Ch]
  float v36; // [esp+58h] [ebp-8h]
  float v37; // [esp+5Ch] [ebp-4h]

  sub_10095FB0(this);
  sub_1033B970((float *)this);
  sub_103362F0(this);
  if ( *(_DWORD *)(dword_106E5F44 + 48) || !*(_DWORD *)(dword_106E5F8C + 48) || !sub_100296A0((_DWORD *)this) )
    goto LABEL_30;
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v2 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 4))(this + 320);
  v3 = 0.5 * v2[1];
  v4 = *v2 * 0.5;
  v5 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v25 = v4 + *(float *)(this + 580);
  v26 = v3 + *(float *)(this + 584);
  if ( (v5 & 1) != 0 )
    sub_100DAE60(this);
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 320) + 8))(this + 320);
  v7 = 0.5 * v6[1];
  *(float *)&v27 = *v6 * 0.5 + *(float *)(this + 580);
  v28 = v7 + *(float *)(this + 584);
  v8 = *(float *)(dword_106B31C8 + 12) - *(float *)(this + 5736);
  v9 = 1.0;
  if ( v8 <= 0.0 )
  {
    v10 = 1.0;
    v9 = 0.0;
    goto LABEL_12;
  }
  if ( v8 > 1.0 )
  {
    v10 = 1.0;
LABEL_12:
    v11 = v9;
    v9 = v10;
    v8 = v11;
  }
  v12 = v9 - v8;
  v13 = *(_DWORD *)(this + 252) >> 11;
  *(float *)&v35 = 0.0 * v12 + 255.0;
  v36 = v12 * 127.0 + 128.0;
  v37 = v12 * 255.0;
  if ( (v13 & 1) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v14 = *(_DWORD *)(this + 252);
  v32 = v27;
  v33 = *(float *)(this + 584);
  v34 = *(float *)(this + 588) + 1.0;
  if ( (v14 & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v29 = v25;
  v30 = *(float *)(this + 584);
  v31 = *(float *)(this + 588) + 1.0;
  v15 = (int)v37;
  v16 = (int)v36;
  v23 = (int)*(float *)&v35;
  v35 = v23;
  sub_1011BC50((float *)&v29, (float *)&v32, v23, v16, v15, 0, 0.11);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v17 = *(_DWORD *)(this + 252);
  v29 = *(int *)(this + 580);
  v30 = v28;
  v31 = *(float *)(this + 588) + 1.0;
  if ( (v17 & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v32 = *(int *)(this + 580);
  v33 = v26;
  v34 = *(float *)(this + 588) + 1.0;
  sub_1011BC50((float *)&v32, (float *)&v29, v35, v16, v15, 0, 0.11);
LABEL_30:
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this) && *(_DWORD *)(dword_106E5EFC + 48) )
  {
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
    v19 = *(int (__thiscall **)(int))(*(_DWORD *)v18 + 504);
    *(float *)&v25 = 0.1;
    v24 = v19(v18);
    v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 504))(this);
    sub_1011BC50(v20, (float *)&v27, v24, (int)&v25, 255, 0, 0.0);
  }
  if ( *(_DWORD *)(dword_106E640C + 48) )
  {
    if ( (*(_DWORD *)(this + 236) & 0x1000) != 0 && sub_103341B0((float *)this) )
    {
      v21 = sub_1012BC90(&dword_1069E3E0, 0, "info_target_command_point");
      v22 = v21;
      if ( v21 )
      {
        if ( (v21[63] & 0x800) != 0 )
          sub_100DAE60((int)v21);
        sub_1011C120((int)(v22 + 145), 16.0, 0, 255, 255, 0, 0.1);
      }
    }
  }
}
