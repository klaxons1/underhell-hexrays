float *__stdcall sub_101D8600(float *a1, _DWORD *a2, char a3)
{
  float *result; // eax
  int i; // ecx
  float v5; // edx
  int j; // ecx
  float v7; // edx
  unsigned int v8; // [esp+4h] [ebp-48h]
  float v9; // [esp+Ch] [ebp-40h]
  float v10; // [esp+10h] [ebp-3Ch]
  float v11; // [esp+14h] [ebp-38h]
  float v12; // [esp+1Ch] [ebp-30h]
  float v13; // [esp+20h] [ebp-2Ch]
  float v14; // [esp+24h] [ebp-28h]
  float v15; // [esp+28h] [ebp-24h]
  float v16; // [esp+2Ch] [ebp-20h]
  float v17; // [esp+2Ch] [ebp-20h]
  float v18; // [esp+30h] [ebp-1Ch]
  float v19; // [esp+30h] [ebp-1Ch]
  float v20; // [esp+34h] [ebp-18h]
  float v21; // [esp+34h] [ebp-18h]
  float v22; // [esp+3Ch] [ebp-10h]
  float v23; // [esp+40h] [ebp-Ch]
  float v24; // [esp+44h] [ebp-8h]

  v15 = 1.0;
  v8 = (unsigned __int16)*a2;
  v14 = (double)(8 * (*a2 & 0x1F) + ((8 * (*a2 & 0x1Fu)) >> 5)) / 255.0;
  v13 = (double)(((v8 >> 3) & 0xFC) + (((v8 >> 3) & 0xFC) >> 6)) / 255.0;
  v12 = (double)(((v8 >> 8) & 0xF8) + (((v8 >> 8) & 0xF8) >> 5)) / 255.0;
  v11 = (double)(8 * (HIWORD(*a2) & 0x1F) + ((8 * (HIWORD(*a2) & 0x1Fu)) >> 5)) / 255.0;
  v10 = (double)(((*a2 >> 19) & 0xFC) + (((*a2 >> 19) & 0xFCu) >> 6)) / 255.0;
  v9 = (double)((HIBYTE(*a2) & 0xF8) + ((HIBYTE(*a2) & 0xF8u) >> 5)) / 255.0;
  if ( a3 && v8 <= HIWORD(*a2) )
  {
    result = a1;
    for ( i = 0; i < 32; i += 2 )
    {
      switch ( (a2[1] >> i) & 3 )
      {
        case 0:
          *result = v12;
          result[1] = v13;
          result[2] = v14;
          result[3] = v15;
          break;
        case 1:
          *result = v9;
          result[1] = v10;
          result[2] = v11;
          v5 = 1.0;
          goto LABEL_9;
        case 2:
          v16 = 0.5 * (v9 + v12);
          *result = v16;
          v18 = (v10 + v13) * 0.5;
          result[1] = v18;
          v20 = (v11 + v14) * 0.5;
          result[2] = v20;
          v5 = 1.0;
          goto LABEL_9;
        case 3:
          *result = 0.0;
          result[1] = 0.0;
          result[2] = 0.0;
          v5 = 0.0;
LABEL_9:
          result[3] = v5;
          break;
        default:
          break;
      }
      result += 4;
    }
  }
  else
  {
    result = a1;
    for ( j = 0; j < 32; j += 2 )
    {
      switch ( (a2[1] >> j) & 3 )
      {
        case 0:
          *result = v12;
          result[1] = v13;
          result[2] = v14;
          result[3] = v15;
          break;
        case 1:
          *result = v9;
          result[1] = v10;
          result[2] = v11;
          v7 = 1.0;
          goto LABEL_18;
        case 2:
          v17 = (v12 * 2.0 + v9) / 3.0;
          *result = v17;
          v19 = (v13 * 2.0 + v10) / 3.0;
          result[1] = v19;
          v21 = (v14 * 2.0 + v11) / 3.0;
          result[2] = v21;
          v7 = 1.0;
          goto LABEL_18;
        case 3:
          v22 = (2.0 * v9 + v12) / 3.0;
          *result = v22;
          v23 = (v13 + v10 * 2.0) / 3.0;
          result[1] = v23;
          v24 = (v14 + v11 * 2.0) / 3.0;
          result[2] = v24;
          v7 = 1.0;
LABEL_18:
          result[3] = v7;
          break;
        default:
          break;
      }
      result += 4;
    }
  }
  return result;
}
