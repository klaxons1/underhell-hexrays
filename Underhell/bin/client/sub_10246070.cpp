void __thiscall sub_10246070(int this, char a2)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  double v6; // st7
  int v7; // esi
  int (__thiscall ***v8)(void *, int, int); // eax
  float *v9; // eax
  float *v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int (__thiscall ***v17)(void *, int, int); // eax
  int v18; // [esp+28h] [ebp-30h] BYREF
  int v19; // [esp+2Ch] [ebp-2Ch]
  int v20; // [esp+30h] [ebp-28h]
  int v21; // [esp+34h] [ebp-24h]
  float v22[4]; // [esp+38h] [ebp-20h] BYREF
  float v23[4]; // [esp+48h] [ebp-10h] BYREF

  v3 = 0;
  if ( *(int *)(this + 244) > 0 )
  {
    v4 = 0;
    do
    {
      v5 = *(_DWORD *)(this + 232);
      v6 = *(float *)(v5 + v4 + 52);
      v7 = v4 + v5;
      if ( v6 <= *(float *)(this + 208) || a2 )
      {
        if ( !sub_10237C80((_DWORD *)v7) )
          goto LABEL_15;
        if ( !*(_BYTE *)(v7 + 8) && !a2 )
        {
          v8 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)v7);
          v9 = sub_10244A40((_WORD *)this, v22, v7, v8, *(unsigned __int16 *)(v7 + 6));
          *(float *)(v7 + 12) = *v9;
          *(float *)(v7 + 16) = v9[1];
          *(float *)(v7 + 20) = v9[2];
          *(float *)(v7 + 24) = v9[3];
          *(_BYTE *)(v7 + 8) = 1;
        }
        if ( *(float *)(v7 + 56) <= (double)*(float *)(this + 208) || a2 )
        {
          v14 = *(_DWORD *)(v7 + 32);
          v15 = *(_DWORD *)(v7 + 36);
          v18 = *(_DWORD *)(v7 + 28);
          v16 = *(_DWORD *)(v7 + 40);
          v19 = v14;
          v20 = v15;
          v21 = v16;
        }
        else
        {
          v10 = sub_102445F0(
                  v23,
                  *(_DWORD *)(v7 + 44),
                  *(float *)(v7 + 48),
                  *(float *)(this + 208),
                  *(float *)(v7 + 52),
                  *(float *)(v7 + 56),
                  (float *)(v7 + 12),
                  (float *)(v7 + 28));
          v11 = *((_DWORD *)v10 + 1);
          v18 = *(_DWORD *)v10;
          v12 = *((_DWORD *)v10 + 2);
          v19 = v11;
          v13 = *((_DWORD *)v10 + 3);
          v20 = v12;
          v21 = v13;
        }
        v17 = (int (__thiscall ***)(void *, int, int))sub_10237C80((_DWORD *)v7);
        sub_102451D0((_WORD *)this, v7, v17, *(unsigned __int16 *)(v7 + 6), (float *)&v18);
        if ( *(float *)(v7 + 56) <= (double)*(float *)(this + 208) || a2 )
        {
LABEL_15:
          if ( *(_DWORD *)(this + 244) - v3 - 1 > 0 )
            memcpy(
              (void *)(v4 + *(_DWORD *)(this + 232)),
              (const void *)(v4 + *(_DWORD *)(this + 232) + 68),
              68 * (*(_DWORD *)(this + 244) - v3 - 1));
          --*(_DWORD *)(this + 244);
          --v3;
          v4 -= 68;
        }
      }
      ++v3;
      v4 += 68;
    }
    while ( v3 < *(_DWORD *)(this + 244) );
  }
}
