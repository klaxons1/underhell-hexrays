void __thiscall sub_102CBED0(_DWORD *this)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // ebx
  float *v8; // edi
  float *v9; // eax
  double v10; // st4
  double v11; // st6
  double v12; // st4
  double v13; // st5
  double v14; // st6
  float *v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  float *v21; // eax
  unsigned __int8 (__thiscall *v22)(int, float *, int, _DWORD); // edx
  _DWORD *v23; // ebx
  float *v24; // eax
  double v25; // st4
  double v26; // st6
  double v27; // st4
  double v28; // st5
  double v29; // st6
  double v30; // st7
  unsigned int *v31; // eax
  char v32[44]; // [esp+Ch] [ebp-8Ch] BYREF
  float v33; // [esp+38h] [ebp-60h]
  char v34; // [esp+43h] [ebp-55h]
  float v35[3]; // [esp+60h] [ebp-38h] BYREF
  int v36; // [esp+6Ch] [ebp-2Ch]
  _DWORD *v37; // [esp+70h] [ebp-28h] BYREF
  int v38; // [esp+74h] [ebp-24h]
  float v39; // [esp+78h] [ebp-20h]
  _DWORD *v40; // [esp+7Ch] [ebp-1Ch]
  void *v41; // [esp+80h] [ebp-18h]
  int v42; // [esp+84h] [ebp-14h]
  int v43; // [esp+88h] [ebp-10h]
  float v44; // [esp+8Ch] [ebp-Ch] BYREF
  float v45; // [esp+90h] [ebp-8h]
  float v46; // [esp+94h] [ebp-4h]

  v1 = (int)this;
  v2 = this[62];
  v40 = this;
  if ( (v2 & 0x400) != 0 && (v2 & 0x800) == 0 )
  {
    v39 = 1440000.0;
    v42 = 0;
    v41 = 0;
    sub_102CA260(this, &v44);
    v38 = sub_1002A680(&dword_10690DF8);
    v3 = sub_1016BFB0(&dword_10690DF8);
    v4 = 0;
    v36 = v3;
    v43 = 0;
    if ( v3 > 0 )
    {
      while ( 1 )
      {
        v5 = *(_DWORD *)(v38 + 4 * v4);
        if ( v5
          && (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v5 + 264))(*(_DWORD *)(v38 + 4 * v4))
          && !*(_BYTE *)(v5 + 2680)
          && sub_102C9AB0((void *)v5, (int *)&v37) )
        {
          v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 368))(v5);
          v7 = (_DWORD *)v6;
          if ( !v6 )
            goto LABEL_14;
          if ( sub_102CB240((void *)v1, v6) )
          {
            v8 = (float *)sub_10019640((_DWORD *)v5);
            v9 = (float *)sub_10019640(v7);
            v10 = v9[1] - v8[1];
            v11 = v10 * v10;
            v12 = *v9 - *v8;
            v13 = v11;
            v14 = v9[2] - v8[2];
            if ( v12 * v12 + v13 + v14 * v14 >= 32400.0 )
            {
              v15 = (float *)sub_10019640(v7);
              v16 = v45 - v15[1];
              v17 = v16 * v16;
              v18 = v44 - *v15;
              v19 = v17;
              v20 = v46 - v15[2];
              if ( v18 * v18 + v19 + v20 * v20 >= 32400.0 )
              {
                v21 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 532))(v5);
                v22 = *(unsigned __int8 (__thiscall **)(int, float *, int, _DWORD))(*(_DWORD *)v5 + 544);
                v35[0] = *v21 + v44;
                v35[1] = v21[1] + v45;
                v35[2] = v21[2] + v46;
                if ( v22(v5, v35, 16449, 0) )
                {
                  v1 = (int)v40;
LABEL_14:
                  sub_10265A60((_DWORD *)v5, (int)&v44, (int)&v44, 33701899, v1, *(_DWORD *)(v5 + 420), (int)v32);
                  if ( !v34 && v33 >= 1.0 )
                  {
                    v23 = v37;
                    if ( !sub_102CA4D0(v37) && !sub_102C8C50((float *)v23) )
                    {
                      v24 = (float *)sub_10019640((_DWORD *)v5);
                      v25 = v45 - v24[1];
                      v26 = v25 * v25;
                      v27 = v44 - *v24;
                      v28 = v26;
                      v29 = v46 - v24[2];
                      v30 = v27 * v27 + v28 + v29 * v29;
                      if ( v39 > v30 )
                      {
                        v39 = v30;
                        v42 = v5;
                        v41 = v23;
                      }
                    }
                  }
                  goto LABEL_21;
                }
              }
            }
            v1 = (int)v40;
          }
        }
LABEL_21:
        v4 = v43 + 1;
        v43 = v4;
        if ( v4 >= v36 )
        {
          if ( v42 )
          {
            *(_DWORD *)(v1 + 920) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v42 + 8))(v42);
            v31 = (unsigned int *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v1 + 8))(v1, -1);
            sub_1029C740(v41, *v31);
            *(_BYTE *)(v1 + 1381) = 1;
          }
          return;
        }
      }
    }
  }
}
