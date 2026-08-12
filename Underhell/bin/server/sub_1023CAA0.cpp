int __cdecl sub_1023CAA0(int a1, float *a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // esi
  int v5; // eax
  double v6; // st4
  double v7; // st5
  double v8; // st7
  float v10; // [esp+0h] [ebp-18h]
  int v11; // [esp+10h] [ebp-8h]
  float v12; // [esp+14h] [ebp-4h]

  v2 = dword_106C4FC4;
  v12 = 268435460.0;
  v11 = 0;
  if ( !dword_106C4FC4 )
    return 0;
  v3 = *(_DWORD *)(dword_106C4FC4 + 804);
  if ( v3 == -1 )
    return 0;
  while ( 1 )
  {
    if ( v2 )
    {
      if ( v3 <= 127 )
      {
        if ( v3 >= 0 )
        {
          v5 = 52 * v3;
          v4 = v5 + v2 + 812;
          if ( v5 + v2 != -812
            && *(_DWORD *)(v5 + v2 + 828) == a1
            && (!*(_BYTE *)(v5 + v2 + 860)
             || *(_DWORD *)v4 != -1
             && off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 2] == *(_DWORD *)v4 >> 12
             && off_1061BE18[4 * (*(_DWORD *)v4 & 0xFFF) + 1]) )
          {
            v6 = *(float *)(v5 + v2 + 852) - a2[1];
            v7 = *(float *)(v5 + v2 + 856) - a2[2];
            v10 = v7 * v7 + v6 * v6 + (*(float *)(v5 + v2 + 848) - *a2) * (*(float *)(v5 + v2 + 848) - *a2);
            v8 = off_10689708(v10);
            if ( (double)*(int *)(v4 + 8) >= v8 && v12 > v8 )
            {
              v12 = v8;
              v11 = v4;
            }
          }
        }
        else
        {
          Msg("SoundPointerForIndex() - Index < 0!\n");
          v4 = 0;
        }
      }
      else
      {
        Msg("SoundPointerForIndex() - Index too large!\n");
        v4 = 0;
      }
    }
    else
    {
      v4 = 0;
    }
    v3 = *(__int16 *)(v4 + 28);
    if ( v3 == -1 )
      break;
    v2 = dword_106C4FC4;
  }
  return v11;
}
