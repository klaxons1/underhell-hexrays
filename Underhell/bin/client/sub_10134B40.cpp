void __thiscall sub_10134B40(int this, int a2, int a3, int a4, int a5, int a6)
{
  bool v7; // cc
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  int v22; // edi
  int v23; // [esp+Ch] [ebp-4Ch] BYREF
  int v24; // [esp+10h] [ebp-48h]
  int v25; // [esp+14h] [ebp-44h]
  int v26; // [esp+18h] [ebp-40h]
  int v27; // [esp+1Ch] [ebp-3Ch]
  int v28; // [esp+20h] [ebp-38h]
  int v29; // [esp+24h] [ebp-34h] BYREF
  int v30; // [esp+28h] [ebp-30h] BYREF
  int v31; // [esp+2Ch] [ebp-2Ch]
  int v32; // [esp+30h] [ebp-28h]
  int v33; // [esp+34h] [ebp-24h]
  int v34; // [esp+38h] [ebp-20h]
  int v35; // [esp+3Ch] [ebp-1Ch]
  __int16 v36; // [esp+40h] [ebp-18h] BYREF
  char v37; // [esp+42h] [ebp-16h]
  __int16 v38; // [esp+44h] [ebp-14h] BYREF
  char v39; // [esp+46h] [ebp-12h]
  __int16 v40; // [esp+48h] [ebp-10h] BYREF
  char v41; // [esp+4Ah] [ebp-Eh]
  __int16 v42; // [esp+4Ch] [ebp-Ch] BYREF
  char v43; // [esp+4Eh] [ebp-Ah]
  _BYTE v44[6]; // [esp+50h] [ebp-8h] BYREF
  char v45; // [esp+57h] [ebp-1h]

  *(_DWORD *)(this + 57744) = 0;
  v31 = *(_DWORD *)(this + 57760) - 26;
  v7 = *(_DWORD *)(dword_104397CC + 48) < 50;
  v32 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( v7 )
    sub_10229140(&unk_104397C8, 50);
  if ( !*(_DWORD *)(dword_10439814 + 48) || (v45 = 1, a5 < 2) )
    v45 = 0;
  v8 = a4;
  v35 = 0;
  if ( a4 > 0 )
  {
    v34 = a2 + a4 - 1;
    do
    {
      v9 = ((unsigned __int16)*(_DWORD *)(this + 57648) - (_WORD)v35) & 0x3FF;
      v28 = v9;
      if ( v45 )
        v33 = *(_DWORD *)(this + 8 * v9 + 288);
      else
        v33 = 0;
      sub_10132D00((_BYTE *)this, (_DWORD *)(this + 8 * v9 + 288), v44, &v30, &v29);
      if ( v30 )
      {
        v10 = (int)((double)v33 * (double)v31 / *(float *)(dword_104397CC + 44));
        v32 = v10;
      }
      else
      {
        v10 = v32;
      }
      if ( v10 > v31 )
        v10 = v31;
      v23 = v34;
      v24 = a3 - v10;
      v25 = 1;
      v26 = v10;
      if ( v30 )
      {
        v26 = (*(_DWORD *)(this + 8 * v9 + 292) != 0) + 1;
        sub_10134600((int *)this, &v23, v44, v44, v29, v29);
      }
      else
      {
        sub_10134600((int *)this, &v23, v44, v44, v29, 31);
      }
      v24 = a3;
      v26 = 1;
      *(_WORD *)v44 = -256;
      v44[2] = 0;
      sub_10134600((int *)this, &v23, v44, v44, 160, 160);
      if ( a5 >= 2 )
      {
        v24 = a3 - *(_DWORD *)(this + 57760) - 1;
        v11 = v24;
        v26 = 1;
        *(_WORD *)v44 = -1;
        v44[2] = -1;
        sub_10134600((int *)this, &v23, v44, v44, 255, 255);
        v12 = v11 - 1;
        if ( *(int *)(this + 8 * v9 + 288) <= 9995 )
        {
          v13 = *(unsigned __int16 *)(this + 36 * v9 + 20770);
          v14 = this + 36 * v9;
          v33 = v13;
          v15 = (int)((double)v13 / *(float *)(dword_104396AC + 44));
          v16 = v12 - v15;
          v42 = 0;
          v43 = -1;
          v26 = v15;
          v24 = v16;
          if ( v16 >= 2 )
          {
            sub_10134600((int *)this, &v23, &v42, &v42, 255, 255);
            v28 = *(unsigned __int16 *)(this + 4 * (9 * v28 + 5193));
            v17 = (int)((double)v28 / *(float *)(dword_104396AC + 44));
            v18 = v16 - v17;
            v40 = -256;
            v41 = 0;
            v26 = v17;
            v24 = v18;
            if ( v18 >= 2 )
            {
              sub_10134600((int *)this, &v23, &v40, &v40, 255, 255);
              v28 = *(unsigned __int16 *)(v14 + 20774);
              v19 = (int)((double)v28 / *(float *)(dword_104396AC + 44));
              v20 = v18 - v19;
              v38 = 255;
              v39 = 0;
              v26 = v19;
              v24 = v20;
              if ( v20 >= 2 )
              {
                sub_10134600((int *)this, &v23, &v38, &v38, 255, 255);
                v28 = *(unsigned __int16 *)(v14 + 20776);
                v21 = (int)((double)v28 / *(float *)(dword_104396AC + 44));
                v36 = -1;
                v37 = 0;
                v26 = v21;
                v24 = v20 - v21;
                if ( v20 - v21 >= 2 )
                {
                  sub_10134600((int *)this, &v23, &v36, &v36, 255, 255);
                  if ( sub_10134AE0((int *)this, &v23, *(unsigned __int16 *)(v14 + 20778), 0, 255, 255, 255) )
                  {
                    if ( sub_10134AE0((int *)this, &v23, *(unsigned __int16 *)(v14 + 20780), 128, 128, 0, 255) )
                    {
                      if ( sub_10134AE0((int *)this, &v23, *(unsigned __int16 *)(v14 + 20782), 0, 128, 128, 255) )
                      {
                        if ( sub_10134AE0((int *)this, &v23, *(unsigned __int16 *)(v14 + 20790), 128, 0, 0, 255) )
                        {
                          if ( sub_10134AE0((int *)this, &v23, *(unsigned __int16 *)(v14 + 20786), 0, 128, 0, 255) )
                          {
                            if ( sub_10134AE0((int *)this, &v23, *(unsigned __int16 *)(v14 + 20784), 0, 0, 128, 255) )
                            {
                              v28 = *(unsigned __int16 *)(v14 + 20794);
                              *(_WORD *)&v44[1] = -3856;
                              v44[0] = -16;
                              v26 = 1;
                              v22 = a3
                                  - (int)((double)v28 / *(float *)(dword_104396AC + 44))
                                  - *(_DWORD *)(this + 57760)
                                  - 1;
                              v24 = v22;
                              if ( v22 >= 2 )
                              {
                                sub_10134600((int *)this, &v23, v44, v44, 128, 128);
                                *(_DWORD *)(v14 + 20796) = v22;
                                *(_DWORD *)(v14 + 20800) = 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      --v34;
      ++v35;
    }
    while ( v35 < a4 );
    v8 = a4;
  }
  if ( a5 >= 2 )
  {
    sub_101349E0((int *)this, a2, a3 - *(_DWORD *)(this + 57760) - 1, a6);
    sub_10134920((int *)this, a2, a3, v8);
  }
  sub_10134030(this, this);
}
