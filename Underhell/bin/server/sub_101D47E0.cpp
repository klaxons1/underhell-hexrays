int __thiscall sub_101D47E0(int *this, int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  int v5; // ebx
  int result; // eax
  int v7; // [esp+10h] [ebp-34h]
  int v8; // [esp+14h] [ebp-30h]
  int v9; // [esp+18h] [ebp-2Ch]
  int v10; // [esp+1Ch] [ebp-28h]
  float v11; // [esp+20h] [ebp-24h]
  float v12; // [esp+24h] [ebp-20h]
  float v13; // [esp+28h] [ebp-1Ch]
  float v14; // [esp+2Ch] [ebp-18h]
  float v15; // [esp+30h] [ebp-14h]
  float v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+38h] [ebp-Ch]
  int v18; // [esp+3Ch] [ebp-8h]
  int v19; // [esp+40h] [ebp-4h]

  v3 = *this;
  v4 = *this + 56 * a2;
  v7 = *(_DWORD *)(v4 + 4);
  v8 = *(_DWORD *)(v4 + 8);
  v9 = *(_DWORD *)(v4 + 12);
  v10 = *(_DWORD *)(v4 + 16);
  v5 = *(_DWORD *)v4;
  v11 = *(float *)(v4 + 20);
  v12 = *(float *)(v4 + 24);
  v13 = *(float *)(v4 + 28);
  v14 = *(float *)(v4 + 32);
  v15 = *(float *)(v4 + 36);
  v16 = *(float *)(v4 + 40);
  v17 = *(_DWORD *)(v4 + 44);
  v18 = *(_DWORD *)(v4 + 48);
  v19 = *(_DWORD *)(v4 + 52);
  *(_DWORD *)v4 = *(_DWORD *)(56 * a3 + *this);
  *(_DWORD *)(v4 + 4) = *(_DWORD *)(56 * a3 + v3 + 4);
  *(_DWORD *)(v4 + 8) = *(_DWORD *)(56 * a3 + v3 + 8);
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(56 * a3 + v3 + 12);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(56 * a3 + v3 + 16);
  *(float *)(v4 + 20) = *(float *)(56 * a3 + v3 + 20);
  *(float *)(v4 + 24) = *(float *)(56 * a3 + v3 + 24);
  *(float *)(v4 + 28) = *(float *)(56 * a3 + v3 + 28);
  *(float *)(v4 + 32) = *(float *)(56 * a3 + v3 + 32);
  *(float *)(v4 + 36) = *(float *)(56 * a3 + v3 + 36);
  *(float *)(v4 + 40) = *(float *)(56 * a3 + v3 + 40);
  *(_DWORD *)(v4 + 44) = *(_DWORD *)(56 * a3 + v3 + 44);
  *(_DWORD *)(v4 + 48) = *(_DWORD *)(56 * a3 + v3 + 48);
  *(_DWORD *)(v4 + 52) = *(_DWORD *)(56 * a3 + v3 + 52);
  result = 56 * a3 + *this;
  *(_DWORD *)(result + 4) = v7;
  *(_DWORD *)(result + 8) = v8;
  *(_DWORD *)result = v5;
  *(_DWORD *)(result + 12) = v9;
  *(_DWORD *)(result + 16) = v10;
  *(float *)(result + 20) = v11;
  *(float *)(result + 24) = v12;
  *(float *)(result + 28) = v13;
  *(float *)(result + 32) = v14;
  *(float *)(result + 36) = v15;
  *(float *)(result + 40) = v16;
  *(_DWORD *)(result + 44) = v17;
  *(_DWORD *)(result + 48) = v18;
  *(_DWORD *)(result + 52) = v19;
  return result;
}
