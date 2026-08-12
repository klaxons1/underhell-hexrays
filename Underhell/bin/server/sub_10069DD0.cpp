void __thiscall sub_10069DD0(float *this, char a2)
{
  int v2; // esi
  int v3; // eax
  int v5; // edx
  double v6; // st7
  float *v7; // ebx
  int v8; // ecx
  double v9; // st7
  float *v10; // edi
  double v11; // st6
  double v12; // st4
  double v13; // st6
  int v14; // esi
  int v15; // eax
  char v16; // dl
  float *v18; // ecx
  double v19; // st4
  double v20; // st6
  double v21; // st4
  double v22; // st5
  double v23; // st6
  int v24[3]; // [esp+28h] [ebp-2Ch] BYREF
  int v25; // [esp+34h] [ebp-20h]
  int v26; // [esp+38h] [ebp-1Ch]
  float *v27; // [esp+3Ch] [ebp-18h]
  int v28; // [esp+40h] [ebp-14h]
  float v29; // [esp+44h] [ebp-10h]
  int v30; // [esp+48h] [ebp-Ch]
  int v31; // [esp+4Ch] [ebp-8h]
  int v32; // [esp+50h] [ebp-4h]

  v2 = *(_DWORD *)(dword_106935D8 + 4);
  v3 = *(_DWORD *)(dword_106935D8 + 8);
  v27 = this;
  v25 = v2;
  v30 = v3;
  CVProfile::EnterScope(g_VProfCurrentProfile, "ModifyLinks", 0, "ModifyLinks", 0, 4);
  v5 = 0;
  v6 = *(float *)(dword_10692E5C + 44) + 0.1;
  v32 = 0;
  v29 = v6 * v6;
  if ( v2 > 0 )
  {
    v7 = this + 201;
    do
    {
      v8 = *(_DWORD *)(v30 + 4 * v5);
      v9 = *v7 - *(float *)(v8 + 4);
      v10 = (float *)(v8 + 4);
      v11 = v7[1];
      v28 = v8;
      v12 = v11 - *(float *)(v8 + 8);
      v13 = v7[2] - *(float *)(v8 + 12);
      if ( v9 * v9 + v12 * v12 + v13 * v13 < v29 )
      {
        v26 = *(_DWORD *)(v8 + 84);
        v31 = 0;
        if ( v26 > 0 )
        {
          while ( 1 )
          {
            v14 = *(_DWORD *)(*(_DWORD *)(v8 + 72) + 4 * v31);
            v15 = sub_10074630(v5);
            if ( v15 > v32 )
            {
              v16 = 1;
              if ( !*(_BYTE *)(v14 + 4) && !*(_BYTE *)(v14 + 6) )
                v16 = 0;
              v18 = *(float **)(v30 + 4 * v15);
              if ( v16 )
              {
                v19 = v7[1] - v18[2];
                v20 = v19 * v19;
                v21 = *v7 - v18[1];
                v22 = v20;
                v23 = v7[2] - v18[3];
                if ( v21 * v21 + v22 + v23 * v23 < v29 )
                {
                  *(float *)v24 = v18[1] - *v10;
                  *(float *)&v24[1] = v18[2] - v10[1];
                  *(float *)&v24[2] = v18[3] - v10[2];
                  if ( (unsigned __int8)sub_101147C0((int)v10, (int)v24, (int)v7, v27[200], 0.0) )
                  {
                    if ( a2 )
                    {
                      *(_BYTE *)(v14 + 14) |= 1u;
                      *(float *)(v14 + 16) = 3.4028235e38;
                    }
                    else
                    {
                      *(_BYTE *)(v14 + 14) &= ~1u;
                    }
                  }
                }
              }
            }
            v5 = v32;
            if ( ++v31 >= v26 )
              break;
            v8 = v28;
          }
        }
      }
      v32 = ++v5;
    }
    while ( v5 < v25 );
  }
  CVProfile::ExitScope(g_VProfCurrentProfile);
}
