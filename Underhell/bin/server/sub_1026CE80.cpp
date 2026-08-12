char __thiscall sub_1026CE80(_DWORD *this, int *a2)
{
  int *v2; // esi
  int (__thiscall *v4)(_DWORD *); // eax
  unsigned int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int (__thiscall *v12)(_DWORD *, int *); // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  float *v17; // eax
  int v18; // eax
  char *v19; // eax
  int v21; // [esp+28h] [ebp-54h]
  int v22; // [esp+30h] [ebp-4Ch]
  _DWORD v23[3]; // [esp+40h] [ebp-3Ch] BYREF
  _DWORD v24[3]; // [esp+4Ch] [ebp-30h] BYREF
  float v25[2]; // [esp+58h] [ebp-24h] BYREF
  float v26; // [esp+60h] [ebp-1Ch] BYREF
  float v27; // [esp+64h] [ebp-18h]
  float v28; // [esp+68h] [ebp-14h]
  float v29; // [esp+6Ch] [ebp-10h] BYREF
  float v30; // [esp+70h] [ebp-Ch]
  float v31; // [esp+74h] [ebp-8h]
  int v32; // [esp+78h] [ebp-4h]

  v2 = a2;
  if ( !a2 || !(*(unsigned __int8 (__thiscall **)(int *))(*a2 + 320))(a2) )
    return 0;
  sub_102600F0(v2, (int)String);
  v4 = *(int (__thiscall **)(_DWORD *))(*this + 236);
  v25[0] = *(float *)(dword_106B31C8 + 16);
  v25[1] = 0.0;
  v26 = 0.0;
  LOWORD(v27) = 0;
  BYTE2(v27) = 0;
  HIBYTE(v27) = v4(this);
  LOBYTE(v28) = 1;
  v5 = sub_1026B410((int)this, v25);
  if ( v5 != this[101] )
  {
    v22 = this[101];
    this[101] = v5;
    sub_1026A710((int)this, v22);
  }
  v32 = (*(int (__thiscall **)(_DWORD *, float *, char *))(*this + 84))(this, &v29, (char *)&a2 + 3);
  if ( (v2[63] & 0x800) != 0 )
    sub_100DAE60((int)v2);
  v6 = v2[146];
  v7 = v2[147];
  v23[0] = v2[145];
  v8 = (unsigned int)v2[63] >> 11;
  v23[1] = v6;
  v23[2] = v7;
  if ( (v8 & 1) != 0 )
    sub_100DAE60((int)v2);
  v9 = v2[177];
  v10 = v2[178];
  v24[0] = v2[176];
  v11 = *this;
  v24[1] = v9;
  v12 = *(int (__thiscall **)(_DWORD *, int *))(v11 + 4);
  v24[2] = v10;
  v13 = v12(this, v2);
  if ( !HIBYTE(a2) && v32 != -1 )
    goto LABEL_14;
  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD *, _DWORD *))(*this + 76))(this, v13, v23, v24)
    && !(*(unsigned __int8 (__thiscall **)(_DWORD, int *, int))(*(_DWORD *)this[12] + 48))(this[12], v2, v13) )
  {
    return 0;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 88))(this, 0, 1);
LABEL_14:
  (*(void (__thiscall **)(_DWORD, int *, int))(*(_DWORD *)this[12] + 40))(this[12], v2, v13);
  if ( v32 > -1
    && (v14 = __RTDynamicCast(
                this[11],
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CBaseAnimating `RTTI Type Descriptor',
                0),
        (v15 = v14) != 0) )
  {
    sub_10031B50(v14, 0.0);
    sub_100BC090((float *)(v15 + 124), (float *)(dword_106B31C8 + 12));
    sub_100C3330(v15, v32);
    sub_100C1A10(v15);
    (*(void (__thiscall **)(_DWORD, int, float, float, float))(*(_DWORD *)this[12] + 32))(
      this[12],
      1,
      COERCE_FLOAT(LODWORD(v29)),
      COERCE_FLOAT(LODWORD(v30)),
      COERCE_FLOAT(LODWORD(v31)));
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*v2 + 264))(v2) && sub_100CF460(v2) )
    {
      v16 = sub_100CF460(v2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 992))(v16);
      sub_101ED560((int)v2, 1);
    }
    v17 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v26 = v29 - *v17;
    v27 = v30 - v17[1];
    v28 = v31 - v17[2];
    v21 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24;
    v18 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    v19 = sub_10129A00(&v26, v18 + 12, v21, (int)v2, 1);
    if ( v19 )
      this[34] = *(_DWORD *)(*(int (__thiscall **)(char *))(*(_DWORD *)v19 + 8))(v19);
    else
      this[34] = -1;
    sub_100E0D20((int)v2, &v26);
    (*(void (__thiscall **)(int *, _DWORD, int))(*v2 + 140))(v2, 0, -1);
    return 1;
  }
  else
  {
    (*(void (__thiscall **)(int *, _DWORD *, _DWORD *))(*v2 + 1412))(v2, v23, v24);
    return 1;
  }
}
