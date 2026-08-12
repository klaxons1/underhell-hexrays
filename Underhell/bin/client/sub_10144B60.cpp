int __cdecl sub_10144B60(float *a1)
{
  int result; // eax
  int v2; // esi
  const char *v3; // eax
  float *v4; // esi
  float *v5; // edi
  float v6; // eax
  float v7; // edx
  double v8; // st7
  int v9; // edx
  double v10; // st6
  double v11; // st6
  double v12; // st5
  int v13; // ecx
  double v14; // st5
  int v15; // ecx
  double v16; // st5
  double v17; // st7
  float v18[3]; // [esp+8h] [ebp-20h] BYREF
  float v19[3]; // [esp+14h] [ebp-14h] BYREF
  int v20; // [esp+20h] [ebp-8h]
  int v21; // [esp+24h] [ebp-4h]

  result = sub_100422D0();
  v2 = result;
  if ( result )
  {
    if ( (dword_1043C3DC & 0x1000) != 0 )
    {
      v3 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v3 = *(const char **)(dword_1043C3E4 + 36);
      if ( !v3 )
        v3 = Locale;
    }
    if ( *(_DWORD *)(dword_1043C1A4 + 48) && v3 )
    {
      v4 = a1 + 2;
      v5 = a1 + 1;
      result = sscanf(v3, "%f%f%f", a1, a1 + 1, a1 + 2);
    }
    else
    {
      if ( *(_BYTE *)(v2 + 3781) )
      {
        sub_10013260((_DWORD *)v2, (int)v18, 0, 0);
        v6 = *(float *)(v2 + 3720);
        v7 = *(float *)(v2 + 3728);
        v19[1] = *(float *)(v2 + 3724);
        v19[0] = v6;
        v19[2] = v7;
        off_103EDFEC();
        sub_10043430((float *)(v2 + 3720), v19);
        v8 = *(float *)(v2 + 3724) * v18[1];
        v9 = *(unsigned __int8 *)(v2 + 3732);
        v10 = *(float *)(v2 + 3720) * v18[0];
        v21 = *(unsigned __int8 *)(v2 + 3736);
        v5 = a1 + 1;
        v11 = (v8 + v10 + *(float *)(v2 + 3728) * v18[2] + 1.0) * 0.5;
        v12 = (double)v21;
        v21 = v9;
        *a1 = v12 * (1.0 - v11) + (double)v9 * v11;
        v13 = *(unsigned __int8 *)(v2 + 3733);
        v21 = *(unsigned __int8 *)(v2 + 3737);
        v14 = (double)v21;
        v21 = v13;
        a1[1] = v14 * (1.0 - v11) + (double)v13 * v11;
        v15 = *(unsigned __int8 *)(v2 + 3734);
        v20 = *(unsigned __int8 *)(v2 + 3738);
        v16 = (double)v20;
        v20 = v15;
        v17 = (1.0 - v11) * v16 + v11 * (double)v15;
      }
      else
      {
        v20 = *(unsigned __int8 *)(v2 + 3732);
        v5 = a1 + 1;
        *a1 = (float)v20;
        v20 = *(unsigned __int8 *)(v2 + 3733);
        a1[1] = (float)v20;
        v20 = *(unsigned __int8 *)(v2 + 3734);
        v17 = (double)v20;
      }
      result = (int)(a1 + 2);
      a1[2] = v17;
      v4 = a1 + 2;
    }
    *a1 = *a1 * 0.0039215689;
    *v5 = *v5 * 0.0039215689;
    *v4 = 0.0039215689 * *v4;
  }
  return result;
}
