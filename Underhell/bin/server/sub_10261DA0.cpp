int __cdecl sub_10261DA0(float *a1, float a2, float a3, float a4, float a5, char a6)
{
  int result; // eax
  int i; // edi
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  float *v11; // esi
  double v12; // st4
  double v13; // st7
  double v14; // st4
  double v15; // st5
  double v16; // st7
  double v17; // st7
  float v18; // [esp+4h] [ebp-1Ch]
  float v19; // [esp+14h] [ebp-Ch] BYREF
  float v20; // [esp+18h] [ebp-8h]
  float v21; // [esp+1Ch] [ebp-4h]

  result = dword_106B31C8;
  for ( i = 1; i <= *(_DWORD *)(dword_106B31C8 + 20); ++i )
  {
    if ( i > 0 && i <= *(_DWORD *)(result + 20) )
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, i);
      if ( v8 )
      {
        if ( (*v8 & 2) == 0 )
        {
          v9 = v8[3];
          if ( v9 )
          {
            v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 20))(v9);
            v11 = (float *)v10;
            if ( v10 )
            {
              if ( a6 || (*(_BYTE *)(v10 + 256) & 1) != 0 )
              {
                v21 = a4;
                v19 = a2;
                v20 = a3;
                if ( a5 > 0.0 )
                {
                  if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
                    sub_100DAE60(v10);
                  v12 = *a1 - v11[145];
                  v13 = v12 * v12;
                  v14 = a1[1] - v11[146];
                  v15 = a1[2] - v11[147];
                  v18 = v15 * v15 + v14 * v14 + v13;
                  v16 = off_10689708(v18);
                  if ( a5 < v16 )
                    goto LABEL_16;
                  v17 = 1.0 - v16 / a5;
                  v19 = v19 * v17;
                  v20 = v20 * v17;
                  v21 = v17 * v21;
                }
                sub_100D8FC0(v11, (int)&v19);
              }
            }
          }
        }
      }
    }
LABEL_16:
    result = dword_106B31C8;
  }
  return result;
}
