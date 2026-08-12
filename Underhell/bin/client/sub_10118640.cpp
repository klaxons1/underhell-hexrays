int __thiscall sub_10118640(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v6; // eax
  float *v7; // eax
  float v8; // ecx
  float v9; // edx
  float v10; // eax
  int v11; // esi
  _BYTE Src[12]; // [esp+4h] [ebp-58h] BYREF
  float v13; // [esp+10h] [ebp-4Ch]
  float v14; // [esp+20h] [ebp-3Ch]
  float v15; // [esp+30h] [ebp-2Ch]
  float v16; // [esp+44h] [ebp-18h]
  float v17; // [esp+48h] [ebp-14h]
  float v18; // [esp+4Ch] [ebp-10h]
  float v19; // [esp+50h] [ebp-Ch]
  float v20; // [esp+54h] [ebp-8h]
  float v21; // [esp+58h] [ebp-4h]

  result = a3;
  if ( a3 > 0 )
  {
    do
    {
      v6 = this[7];
      if ( *(_DWORD *)(v6 + 1284) )
        v7 = (float *)(v6 + 1308);
      else
        v7 = &flt_10459240;
      v8 = *v7;
      v9 = v7[1];
      v10 = v7[2];
      v19 = v8;
      v20 = v9;
      v16 = -v8;
      v21 = v10;
      v17 = -v9;
      v18 = -v10;
      result = sub_101F17F0(a2);
      v11 = this[6];
      v13 = v13 + v16;
      v14 = v14 + v17;
      v15 = v15 + v18;
      if ( v11 )
      {
        if ( *(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 8) >= 64 )
        {
          memcpy_0(*(void **)(v11 + 4), Src, 0x40u);
          result = 64;
          *(_DWORD *)(v11 + 4) += 64;
          *(_DWORD *)(v11 + 8) += 64;
        }
        else
        {
          *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 12);
          result = Warning("Save/Restore overflow!\n");
        }
      }
      a2 += 64;
      --a3;
    }
    while ( a3 );
  }
  return result;
}
