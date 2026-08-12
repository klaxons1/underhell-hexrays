int __thiscall sub_10095860(_DWORD *this, int a2, int a3, int a4, char a5, float *a6)
{
  float *v6; // eax
  double v7; // st6
  _DWORD *v8; // ecx
  double v9; // rt0
  float *v10; // esi
  int v11; // eax
  double v12; // st7
  int result; // eax
  float v14; // [esp+Ch] [ebp-20h] BYREF
  float v15; // [esp+10h] [ebp-1Ch]
  float v16; // [esp+14h] [ebp-18h]
  float v17; // [esp+18h] [ebp-14h]
  float v18[3]; // [esp+1Ch] [ebp-10h] BYREF
  _DWORD *v19; // [esp+28h] [ebp-4h]
  int v20; // [esp+40h] [ebp+14h]

  v19 = this;
  v6 = sub_10095750(v18, a4);
  v7 = v6[1] + a6[1];
  v8 = v19;
  v9 = v6[2] + a6[2];
  *(float *)(a2 + 4 * a3) = *v6 + *a6;
  *(float *)(a2 + 4 * a3 + 16) = v7;
  *(float *)(a2 + 4 * a3 + 32) = v9;
  v10 = (float *)(v8[12] + 32 * *(unsigned __int16 *)(a4 + 24));
  *(float *)(a2 + 4 * a3 + 48) = (v10[2] - *v10) * (*(float *)(a4 + 48) * 0.5);
  *(float *)(a2 + 4 * a3 + 64) = (v10[3] - v10[1]) * *(float *)(a4 + 48);
  if ( !a5 )
    v10 = (float *)(v8[17] + 32 * *(unsigned __int16 *)(a4 + 24));
  v11 = *(_DWORD *)(a4 + 28);
  v14 = (double)(unsigned __int8)v11 * flt_103EE280[SHIBYTE(v11)];
  v20 = BYTE2(v11);
  v15 = (double)BYTE1(v11) * flt_103EE280[SHIBYTE(v11)];
  v16 = (double)BYTE2(v11) * flt_103EE280[SHIBYTE(v11)];
  v17 = 255.0;
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)dword_1041315C + 172))(dword_1041315C, &v14, &v14);
  v12 = v14;
  *(_DWORD *)(a2 + 4 * a3 + 96) = v10;
  *(_BYTE *)(a2 + 4 * a3 + 83) = -1;
  *(_BYTE *)(a2 + 4 * a3 + 80) = (int)(v12 * 255.0);
  *(_BYTE *)(a2 + 4 * a3 + 81) = (int)(v15 * 255.0);
  result = HIWORD(v20) | 0xC00;
  *(_BYTE *)(a2 + 4 * a3 + 82) = (int)(255.0 * v16);
  return result;
}
