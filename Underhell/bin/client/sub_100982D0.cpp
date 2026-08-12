int __thiscall sub_100982D0(_DWORD *this, int a2, float *a3, int a4, char *a5)
{
  _DWORD *v5; // eax
  double v6; // st7
  double v7; // st5
  double v8; // st7
  double v9; // st7
  int v10; // edi
  int v11; // esi
  float *v12; // eax
  double v13; // st4
  double v14; // st7
  double v15; // st4
  double v16; // st5
  double v17; // st7
  int v18; // edx
  float v20; // [esp+0h] [ebp-24h]
  float v21; // [esp+4h] [ebp-20h]
  float v22; // [esp+8h] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-14h] BYREF
  float v25; // [esp+14h] [ebp-10h]
  int v26; // [esp+18h] [ebp-Ch] BYREF
  int v27; // [esp+1Ch] [ebp-8h]
  int v28; // [esp+20h] [ebp-4h]

  CVProfile::EnterScope(
    g_VProfCurrentProfile,
    "CDetailObjectSystem::SortSpritesBackToFront",
    0,
    "Detail_Prop_Rendering",
    0,
    4);
  (*(void (__thiscall **)(void *, int, int *, int *))(*(_DWORD *)off_103DCDDC + 36))(off_103DCDDC, a2, &v24, &v26);
  v5 = (_DWORD *)sub_100422D0();
  if ( v5 )
    v6 = 1.0 / sub_100138E0(v5);
  else
    v6 = (float)1.0;
  v7 = *(float *)(dword_1042CC5C + 44) * *(float *)(dword_1042CC5C + 44) * v6;
  v22 = v7;
  v8 = v6 * (*(float *)(dword_1042CC5C + 44) - *(float *)(dword_1042CCA4 + 44));
  if ( v8 <= 0.0 )
    v9 = 0.0;
  else
    v9 = v8 * v8;
  v25 = v9;
  v10 = 0;
  v26 += v24;
  v28 = v24;
  v21 = 255.0 / (v7 - v9);
  if ( v24 < v26 )
  {
    v27 = 44 * v24;
    do
    {
      v11 = v27 + this[7];
      v12 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v11 + 4) + 4))(v11 + 4);
      v13 = *v12 - *a3;
      v14 = v13 * v13;
      v15 = v12[1] - a3[1];
      v16 = v12[2] - a3[2];
      v17 = v16 * v16 + v15 * v15 + v14;
      if ( v22 > v17 )
      {
        *(_BYTE *)(v11 + 37) = v25 <= 0.0 || v25 >= v17 ? -1 : (unsigned __int8)(int)((v22 - v17) * v21);
        if ( (*(_BYTE *)(v11 + 36) & 0xC) != 0 && *(_BYTE *)(v11 + 37) )
        {
          sub_10094F20(v11);
          v18 = v28;
          v20 = v17;
          *(float *)&a5[8 * v10 + 4] = v20;
          *(_DWORD *)&a5[8 * v10++] = v18;
        }
      }
      v27 += 44;
      ++v28;
    }
    while ( v28 < v26 );
    if ( v10 )
    {
      if ( 8 * v10 > 8 )
        sub_10095E80((int)a5, (int)&a5[8 * v10], (unsigned __int8 (__cdecl *)(_DWORD *, _DWORD *))sub_10094B10);
      sub_100975E0(a5, (int)&a5[8 * v10], (unsigned __int8 (__cdecl *)(int, int))sub_10094B10);
    }
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
  return v10;
}
