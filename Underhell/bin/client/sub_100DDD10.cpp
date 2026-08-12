void __usercall sub_100DDD10(int a1@<ecx>, int a2@<edi>, int a3@<esi>)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  void (__thiscall *v10)(int, int, int, int, int, int, _DWORD, _DWORD); // edx
  double v11; // st7
  _DWORD *v12; // edi
  int *v13; // ecx
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int v17; // esi
  int v18; // eax
  _DWORD *v19; // eax
  double v20; // st7
  double v21; // st6
  double v22; // rt0
  int k; // edi
  int j; // edi
  double v25; // st6
  int v26; // [esp-4h] [ebp-44h]
  float v27; // [esp+0h] [ebp-40h]
  __int16 *v30; // [esp+14h] [ebp-2Ch]
  int v31; // [esp+18h] [ebp-28h]
  int v32; // [esp+1Ch] [ebp-24h]
  _DWORD *v33; // [esp+1Ch] [ebp-24h]
  __int16 *v34; // [esp+20h] [ebp-20h]
  float v35; // [esp+20h] [ebp-20h]
  int v36; // [esp+24h] [ebp-1Ch]
  int v37; // [esp+28h] [ebp-18h]
  int i; // [esp+2Ch] [ebp-14h]
  __int16 *v39; // [esp+2Ch] [ebp-14h]
  int v40; // [esp+2Ch] [ebp-14h]
  int v41; // [esp+30h] [ebp-10h] BYREF
  int v42; // [esp+34h] [ebp-Ch] BYREF
  int v43; // [esp+38h] [ebp-8h]
  int v44; // [esp+3Ch] [ebp-4h]

  if ( *(_BYTE *)(a1 + 236) )
  {
    v4 = *(_DWORD *)(a1 + 329);
    v5 = *(_DWORD *)(a1 + 334);
    v6 = *(_DWORD *)(a1 + 220);
    v7 = *(_DWORD *)(a1 + 232);
    v8 = *(_DWORD *)(a1 + 228);
    v41 = v4;
    v42 = v5;
    v32 = v6;
    v7 += 20;
    v9 = (int)((double)(sub_10076720() - v7) * 0.5);
    v10 = *(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 540);
    v27 = *(float *)(a1 + 300) * 0.0039215689;
    v26 = *(_DWORD *)(a1 + 339);
    v43 = v9;
    v10(a1, 10, v9 - 10, v8 + 20, v7, v26, LODWORD(v27), 0);
    v11 = *(float *)(a1 + 300) * 0.0039215689;
    HIBYTE(v41) = (int)((double)HIBYTE(v41) * v11);
    HIBYTE(v42) = (int)(v11 * (double)HIBYTE(v42));
    if ( v32 > 0 )
    {
      v37 = 0;
      v31 = v32;
      do
      {
        v12 = (_DWORD *)(v37 + *(_DWORD *)(a1 + 208));
        v13 = &v42;
        v14 = *v12;
        v33 = v12;
        if ( !*v12 )
          v13 = &v41;
        v15 = *v13;
        v36 = *v13;
        HIBYTE(v44) = 0;
        if ( v14 )
        {
          v16 = *(_DWORD *)(a1 + 252);
          if ( v16 >= 0 )
            HIBYTE(v44) = v14 == v16;
        }
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v15, a2, a3);
        v17 = v12[2];
        if ( *v12 )
        {
          v17 = (int)((double)(int)v12[2] * *(float *)(a1 + 284));
          v18 = *(_DWORD *)(a1 + 316);
        }
        else
        {
          v18 = *(_DWORD *)(a1 + 308);
        }
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v18);
        v19 = (_DWORD *)(a1 + 316);
        if ( !*v12 )
          v19 = (_DWORD *)(a1 + 308);
        v34 = &word_104341D0[v12[1]];
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *v19);
        a3 = v43;
        a2 = 20;
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C);
        for ( i = 0; i < v17; ++i )
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))(
            dword_1047CA6C,
            (unsigned __int16)v34[i],
            0);
        if ( HIBYTE(v44) )
        {
          v20 = *(float *)(a1 + 276);
          v35 = *(float *)(a1 + 276);
          if ( v20 > 0.0 )
          {
            v21 = 1.0;
            while ( 1 )
            {
              if ( v21 > v20 )
              {
                v44 = HIBYTE(v36);
                v40 = v36;
                HIBYTE(v40) = (int)(v20 * (double)HIBYTE(v36));
                (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, v40);
                v30 = &word_104341D0[v12[1]];
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(
                  dword_1047CA6C,
                  *(_DWORD *)(a1 + 324));
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, 20, v43);
                for ( j = 0; j < v17; ++j )
                  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))((unsigned __int16)v30[j], 0);
              }
              else
              {
                v39 = &word_104341D0[v12[1]];
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(
                  dword_1047CA6C,
                  *(_DWORD *)(a1 + 324));
                (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, 20, v43);
                for ( k = 0; k < v17; ++k )
                  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 92))((unsigned __int16)v39[k], 0);
              }
              v12 = v33;
              v25 = v35 - 1.0;
              v35 = v25;
              if ( v25 <= 0.0 )
                break;
              v22 = v25;
              v21 = 1.0;
              v20 = v22;
            }
          }
        }
        v43 += v12[4];
        v37 += 20;
        --v31;
      }
      while ( v31 );
    }
  }
}
