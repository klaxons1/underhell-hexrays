int __thiscall sub_100ED270(int this, char a2, _DWORD **a3, float a4, char a5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD v11[5]; // [esp+20h] [ebp-4230h] BYREF
  char v12; // [esp+34h] [ebp-421Ch]
  float v13; // [esp+38h] [ebp-4218h]
  float v14; // [esp+3Ch] [ebp-4214h]
  int v15[4096]; // [esp+40h] [ebp-4210h] BYREF
  int v16; // [esp+4040h] [ebp-210h]
  int v17; // [esp+4044h] [ebp-20Ch]
  char v18; // [esp+4048h] [ebp-208h]
  float v19; // [esp+404Ch] [ebp-204h]
  int v20; // [esp+4050h] [ebp-200h]
  int v21[45]; // [esp+4054h] [ebp-1FCh] BYREF
  int v22; // [esp+4108h] [ebp-148h]
  int v23; // [esp+410Ch] [ebp-144h]
  char v24; // [esp+4110h] [ebp-140h]
  _DWORD v25[4]; // [esp+4114h] [ebp-13Ch] BYREF
  int v26; // [esp+4124h] [ebp-12Ch]
  int v27; // [esp+4128h] [ebp-128h]
  int v28; // [esp+412Ch] [ebp-124h]
  int v29; // [esp+4194h] [ebp-BCh]
  int v30; // [esp+41ECh] [ebp-64h]
  int v31; // [esp+41F4h] [ebp-5Ch]
  int v32; // [esp+41F8h] [ebp-58h]
  int v33[4]; // [esp+423Ch] [ebp-14h] BYREF
  int v34; // [esp+424Ch] [ebp-4h] BYREF

  sub_10016C20((int)v21);
  v33[2] = 0;
  v34 = 0;
  sub_100ECF10((_DWORD *)this, a3, a4, &v34, (int)v21, (int)v33, a5);
  v6 = *(unsigned __int16 *)(this + 132);
  if ( (unsigned __int16)v6 > 0x1000u )
    Error("CParticleEffectBinding::DrawMaterialParticles: too many particles (%d should be less than %d)", v6, 4096);
  v19 = 0.0;
  v11[2] = v33;
  v13 = 1.0e24;
  v11[3] = v21;
  v14 = -1.0e24;
  v7 = *(_DWORD *)(this + 140);
  v11[4] = v34;
  v12 = a2;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v16 = 0;
  v11[0] = this;
  v11[1] = a3;
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 24))(v7, v11);
  dword_10435878 += *(unsigned __int16 *)(this + 132);
  if ( a2 )
    sub_100EB8D0((int)a3, (int)v15, v16, v13, v14);
  if ( v24 )
  {
    switch ( v23 )
    {
      case 4:
        v8 = 2 * v32 - 2;
        break;
      case 5:
        v8 = 2 * v32;
        break;
      case 6:
        v8 = 3 * v32 - 6;
        break;
      case 7:
        v8 = 6 * v32 / 4;
        break;
      case 8:
        v8 = 0;
        break;
      default:
        v8 = v32;
        break;
    }
    sub_10016B00(v25, v23, v8);
  }
  (*(void (__thiscall **)(int, int, int, int *))(*(_DWORD *)v22 + 80))(v22, v32, v28, v21);
  v26 = 0;
  v27 = 0;
  v31 = 0;
  v30 = 0;
  v29 = -1;
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v22 + 48))(v22, -1, 0);
  v9 = *(unsigned __int16 *)(this + 132);
  v22 = 0;
  if ( v30 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v30 + 8))(v30) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v30 + 16))(v30);
  if ( v26 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v26 + 8))(v26) )
    (*(void (__thiscall **)(int))(*(_DWORD *)v26 + 16))(v26);
  return v9;
}
