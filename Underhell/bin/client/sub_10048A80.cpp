int __thiscall sub_10048A80(int this)
{
  int v2; // eax
  char v3; // al
  int v4; // ecx
  int v5; // eax
  float *v6; // eax
  float *v7; // ecx
  float *v8; // eax
  int v9; // eax
  int v10; // eax
  int (__thiscall *v11)(int); // edx
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  int v15; // ecx
  double v16; // st7
  double v17; // st7
  int v18; // eax
  double v19; // st6
  int v20; // eax
  double v21; // st7
  int v22; // eax
  float *v23; // eax
  int v24; // eax
  float v26; // [esp+0h] [ebp-80h]
  _BYTE v27[12]; // [esp+Ch] [ebp-74h] BYREF
  float v28; // [esp+18h] [ebp-68h]
  float v29; // [esp+1Ch] [ebp-64h]
  float v30; // [esp+20h] [ebp-60h]
  float v31; // [esp+38h] [ebp-48h]
  float v32[3]; // [esp+60h] [ebp-20h] BYREF
  float v33; // [esp+6Ch] [ebp-14h] BYREF
  float v34; // [esp+70h] [ebp-10h]
  float v35; // [esp+74h] [ebp-Ch]
  int v36; // [esp+78h] [ebp-8h]
  int v37; // [esp+7Ch] [ebp-4h]
  int savedregs; // [esp+80h] [ebp+0h] BYREF

  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)(this - 12) + 40))(this - 12);
  sub_101EDFB0(v2, &v33);
  v3 = *(_BYTE *)(this + 1180);
  if ( (v3 & 2) != 0 )
  {
    v9 = *(_DWORD *)(this + 1204);
    if ( v9 )
    {
      *(float *)(v9 + 24) = *((float *)off_103DC81C + 3);
      *(_DWORD *)(this + 1204) = 0;
    }
  }
  else
  {
    v4 = *(_DWORD *)(this + 1204);
    if ( !v4 || *(_DWORD *)(v4 + 36) != *(_DWORD *)(this + 68) )
    {
      if ( (v3 & 1) != 0 )
        v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 20))(
               dword_10413164,
               *(_DWORD *)(this + 68));
      else
        v5 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413164 + 16))(
               dword_10413164,
               *(_DWORD *)(this + 68));
      *(_DWORD *)(this + 1204) = v5;
      *(float *)(v5 + 32) = 0.0;
    }
    *(_DWORD *)(*(_DWORD *)(this + 1204) + 40) = *(unsigned __int8 *)(this + 1181);
    *(float *)(*(_DWORD *)(this + 1204) + 16) = *(float *)(this + 1184);
    **(_DWORD **)(this + 1204) = *(unsigned __int8 *)(this + 1180);
    if ( *(float *)(this + 1196) > 0.0 )
      **(_DWORD **)(this + 1204) |= 1u;
    *(_BYTE *)(*(_DWORD *)(this + 1204) + 20) = *(_BYTE *)(this + 76);
    *(_BYTE *)(*(_DWORD *)(this + 1204) + 21) = *(_BYTE *)(this + 77);
    *(_BYTE *)(*(_DWORD *)(this + 1204) + 22) = *(_BYTE *)(this + 78);
    *(_BYTE *)(*(_DWORD *)(this + 1204) + 23) = *(_BYTE *)(this + 1188);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 12) + 36))(this - 12);
    v7 = *(float **)(this + 1204);
    v7[1] = *v6;
    v7[2] = v6[1];
    v7[3] = v6[2];
    *(float *)(*(_DWORD *)(this + 1204) + 56) = *(float *)(this + 1192);
    *(float *)(*(_DWORD *)(this + 1204) + 60) = *(float *)(this + 1196);
    *(float *)(*(_DWORD *)(this + 1204) + 24) = *((float *)off_103DC81C + 3) + 1000000.0;
    v8 = *(float **)(this + 1204);
    v8[11] = v33;
    v8[12] = v34;
    v8[13] = v35;
  }
  if ( *(float *)(this + 1196) <= 0.0 || (*(_BYTE *)(this + 1180) & 1) != 0 )
  {
    v24 = *(_DWORD *)(this + 1208);
    if ( v24 )
    {
      *(float *)(v24 + 24) = *((float *)off_103DC81C + 3);
      goto LABEL_23;
    }
  }
  else
  {
    v10 = *(_DWORD *)(this + 1208);
    if ( !v10 || *(_DWORD *)(v10 + 36) != -*(_DWORD *)(this + 68) )
      *(_DWORD *)(this + 1208) = (*(int (__stdcall **)(int))(*(_DWORD *)dword_10413164 + 16))(-*(_DWORD *)(this + 68));
    v11 = *(int (__thiscall **)(int))(*(_DWORD *)(this - 12) + 36);
    v37 = *(int *)(this + 1184);
    v12 = (float *)v11(this - 12);
    v32[0] = v33 * *(float *)&v37 + *v12;
    v32[1] = v34 * *(float *)&v37 + v12[1];
    v32[2] = *(float *)&v37 * v35 + v12[2];
    sub_10034140(0);
    v13 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this - 12) + 36))(this - 12);
    sub_1000FCE0((int)&savedregs, this, v13, v32, 131083, 0, 0, (int)v27);
    sub_10034180();
    v14 = *(float **)(this + 1208);
    v14[1] = v28;
    v14[2] = v29;
    v14[3] = v30;
    v15 = *(_DWORD *)(this + 1208);
    v16 = v31;
    if ( 1.0 == v31 )
    {
      *(float *)(v15 + 24) = *((float *)off_103DC81C + 3);
LABEL_23:
      *(_DWORD *)(this + 1208) = 0;
      goto LABEL_24;
    }
    *(_DWORD *)(v15 + 40) = *(unsigned __int8 *)(this + 1181);
    v17 = (1.0 - v16) * (1.0 - v16);
    **(_DWORD **)(this + 1208) = *(_BYTE *)(this + 1180) & 0xC | 2;
    *(float *)(*(_DWORD *)(this + 1208) + 16) = *(float *)(this + 1200);
    *(float *)(*(_DWORD *)(this + 1208) + 24) = *((float *)off_103DC81C + 3) + 1000000.0;
    v37 = *(unsigned __int8 *)(this + 76);
    v36 = HIWORD(v37) | 0xC00;
    v18 = *(_DWORD *)(this + 1208);
    v36 = (int)((double)v37 * v17);
    *(_BYTE *)(v18 + 20) = v36;
    v36 = *(unsigned __int8 *)(this + 77);
    v19 = (double)v36 * v17;
    v36 = HIWORD(v37) | 0xC00;
    v20 = *(_DWORD *)(this + 1208);
    v36 = (int)v19;
    *(_BYTE *)(v20 + 21) = (int)v19;
    v36 = *(unsigned __int8 *)(this + 78);
    v21 = v17 * (double)v36;
    v36 = HIWORD(v37) | 0xC00;
    v22 = *(_DWORD *)(this + 1208);
    v36 = (int)v21;
    *(_BYTE *)(v22 + 22) = (int)v21;
    *(_BYTE *)(*(_DWORD *)(this + 1208) + 23) = *(_BYTE *)(this + 1188);
    v23 = *(float **)(this + 1208);
    v23[11] = v33;
    v23[12] = v34;
    v23[13] = v35;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_10413168 + 8))(dword_10413168, *(_DWORD *)(this + 1208));
  }
LABEL_24:
  v26 = *((float *)off_103DC81C + 3) + 0.001;
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(this - 12) + 408))(this - 12, LODWORD(v26));
}
