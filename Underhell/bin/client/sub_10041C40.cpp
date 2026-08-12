void __thiscall sub_10041C40(float *this, int a2, int a3, void *a4, char *a5)
{
  float *v5; // edi
  bool v6; // zf
  int *v7; // esi
  int v8; // ecx
  int v9; // ebx
  int v10; // edi
  int v11; // ecx
  int v12; // ebx
  int v13; // edi
  float *v14; // edx
  int v15; // eax
  int v16; // eax
  double v17; // st7
  double v18; // st7
  long double v19; // st5
  long double v20; // st5
  long double v21; // st4
  long double v22; // st5
  int v23; // ecx
  long double v24; // st5
  long double v25; // st7
  char *v26; // ecx
  long double v27; // st6
  long double v28; // st6
  int v31; // esi
  int v32; // eax
  float *v33; // ecx
  float *v34; // edx
  char v35[12]; // [esp+Ch] [ebp-10h] BYREF
  float *v36; // [esp+18h] [ebp-4h]

  v5 = this;
  v6 = *((_DWORD *)this + 484) == 0;
  v36 = this;
  if ( v6 && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this) )
    sub_10026520((int)(v5 - 1));
  v7 = (int *)*((_DWORD *)v5 + 484);
  if ( v7 && *v7 )
  {
    memset(flt_10405E78, 0, sizeof(flt_10405E78));
    if ( !*(_DWORD *)(*v7 + 268) )
    {
      memset(a4, 0, 4 * a3);
      if ( a5 )
        memset(a5, 0, 4 * a3);
      return;
    }
    (*(void (__thiscall **)(_DWORD *, int))(*((_DWORD *)v5 - 1) + 760))((_DWORD *)v5 - 1, 1);
    v8 = *v7;
    if ( *(_DWORD *)(*(_DWORD *)(*v7 + 272) + *v7 + 8) == -1 )
    {
      v9 = 0;
      if ( *(int *)(v8 + 268) > 0 )
      {
        v10 = 0;
        do
        {
          *(_DWORD *)(v10 + *(_DWORD *)(*v7 + 272) + *v7 + 8) = sub_1003E4D0((char *)(v8
                                                                                    + v10
                                                                                    + *(_DWORD *)(v8 + 272)
                                                                                    + *(_DWORD *)(v8
                                                                                                + v10
                                                                                                + *(_DWORD *)(v8 + 272)
                                                                                                + 4)));
          v8 = *v7;
          ++v9;
          v10 += 20;
        }
        while ( v9 < *(_DWORD *)(*v7 + 268) );
        v5 = v36;
      }
    }
    v11 = *v7;
    v12 = 0;
    if ( *(int *)(*v7 + 268) > 0 )
    {
      v13 = 0;
      v14 = v36 + 529;
      do
      {
        v15 = v11 + v13 + *(_DWORD *)(v11 + 272);
        flt_10405E78[*(_DWORD *)(v15 + 8)] = *v14;
        ++v12;
        ++v14;
        v13 += 20;
        flt_10405E78[*(_DWORD *)(v15 + 8)] = (*(float *)(v15 + 16) - *(float *)(v15 + 12))
                                           * flt_10405E78[*(_DWORD *)(v15 + 8)]
                                           + *(float *)(v15 + 12);
        v11 = *v7;
      }
      while ( v12 < *(_DWORD *)(*v7 + 268) );
      v5 = v36;
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*((_DWORD *)v5 - 1) + 760))((_DWORD *)v5 - 1, 0);
    v16 = *((_DWORD *)v5 + 636);
    if ( v16 != *((_DWORD *)v5 + 655) )
    {
      *((_DWORD *)v5 + 655) = v16;
      v5[654] = *(float *)(dword_10406F6C + 44) + *((float *)off_103DC81C + 3);
    }
    if ( *((_DWORD *)v5 + 656) == -1 )
      *((_DWORD *)v5 + 656) = sub_1003E4D0("blink");
    v17 = *(float *)(dword_10406F6C + 44);
    if ( v17 <= 0.0 )
      v18 = 0.0;
    else
      v18 = 1.0 / v17;
    v19 = v18 * ((v5[654] - *((float *)off_103DC81C + 3)) * 3.141592653589793 * 0.5);
    if ( v19 <= 0.0 )
      goto LABEL_39;
    v20 = cos(v19);
    if ( v20 <= 0.0 || v20 >= 1.0 )
      goto LABEL_39;
    v21 = sqrt(v20) * 2.0;
    if ( v21 <= 1.0 )
    {
      v22 = v21;
    }
    else
    {
      v22 = 2.0 - v21;
      if ( 2.0 - v21 > 1.0 )
      {
        v22 = 1.0;
LABEL_34:
        v23 = *((_DWORD *)v5 + 656);
        v24 = v22 + flt_10405E78[v23];
        v25 = v24;
        if ( v24 <= 1.0 )
        {
          if ( v24 < 0.0 )
            v25 = 0.0;
          flt_10405E78[v23] = v25;
        }
        else
        {
          flt_10405E78[v23] = 1.0;
        }
LABEL_39:
        sub_100416F0((__int16 *)v5 - 2, (int)(v5 + 662));
        (*(void (__thiscall **)(_DWORD *, int *, void *))(*((_DWORD *)v5 - 1) + 748))((_DWORD *)v5 - 1, v7, a4);
        (*(void (__thiscall **)(_DWORD *, char *, int *))(*((_DWORD *)v5 - 1) + 752))((_DWORD *)v5 - 1, v35, v7);
        v26 = a5;
        if ( a5 )
        {
          v27 = 1.0;
          if ( 0.0 != *((float *)off_103DC81C + 4) )
          {
            v28 = __FYL2X__(0.800000011920929, 0.6931471805599453094)
                * 30.30303
                * *((float *)off_103DC81C + 4)
                * 1.442695040888963407;
            _ST5 = v28;
            __asm { frndint }
            v27 = __FSCALE__(__F2XM1__(v28 - _ST5) + 1.0, _ST5);
          }
          v31 = *v7;
          v32 = 0;
          if ( *(int *)(v31 + 260) > 0 )
          {
            while ( 1 )
            {
              v33 = (float *)&v26[4 * v32];
              v34 = (float *)(*((_DWORD *)v5 + 661) + 4 * v32++);
              *v34 = *(float *)((char *)v33 + (_BYTE *)a4 - a5) * (1.0 - v27) + *v34 * v27;
              *v33 = *(float *)(*((_DWORD *)v5 + 661) + 4 * v32 - 4);
              if ( v32 >= *(_DWORD *)(v31 + 260) )
                break;
              v26 = a5;
            }
          }
        }
        return;
      }
    }
    if ( v22 < 0.0 )
      v22 = 0.0;
    goto LABEL_34;
  }
}
