void __thiscall sub_1018DAE0(int this, int a2, int a3, int a4)
{
  int v5; // ecx
  float *v6; // eax
  double v7; // st7
  _DWORD *v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // ecx
  int v16; // edx
  _DWORD *v17; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int i; // esi
  float *v22; // eax
  double v23; // st4
  float v24; // [esp+0h] [ebp-38h]
  float v25; // [esp+18h] [ebp-20h]
  float v26; // [esp+1Ch] [ebp-1Ch]
  float v27; // [esp+20h] [ebp-18h]
  float v28; // [esp+24h] [ebp-14h]
  int v29; // [esp+28h] [ebp-10h]
  _DWORD *v30; // [esp+2Ch] [ebp-Ch]
  float v31; // [esp+30h] [ebp-8h]
  float v32; // [esp+34h] [ebp-4h]
  int v33; // [esp+40h] [ebp+8h]
  int v34; // [esp+44h] [ebp+Ch]
  int v35; // [esp+48h] [ebp+10h]

  v5 = a2;
  if ( a2 == 4 )
  {
    sub_1018DAE0(0, a3, a4);
    sub_1018DAE0(1, a3, a4);
    sub_1018DAE0(3, a3, a4);
    v5 = 2;
  }
  switch ( v5 )
  {
    case 0:
      *(float *)(this + 12) = (double)a3 + *(float *)(this + 12);
      break;
    case 1:
      *(float *)(this + 52) = (double)a3 + *(float *)(this + 52);
      break;
    case 2:
      *(float *)(this + 24) = (double)a3 + *(float *)(this + 24);
      break;
    case 3:
      *(float *)(this + 56) = (double)a3 + *(float *)(this + 56);
      break;
    default:
      break;
  }
  *(float *)(this + 28) = (*(float *)(this + 16) + *(float *)(this + 4)) * 0.5;
  *(float *)(this + 32) = (*(float *)(this + 20) + *(float *)(this + 8)) * 0.5;
  *(float *)(this + 36) = 0.5 * (*(float *)(this + 24) + *(float *)(this + 12));
  if ( (_BYTE)a4 && *(float *)(dword_106B7B0C + 44) > 0.0 )
  {
    if ( !++dword_10632620 )
      dword_10632620 = 1;
    *(_DWORD *)(this + 492) = dword_10632620;
    v32 = *(float *)(dword_106B7B0C + 44);
    v6 = sub_1018B480((float *)this, v5);
    v7 = (double)a3;
    v31 = v7;
    v8 = (_DWORD *)dword_106B8370;
    v26 = *v6;
    v27 = v6[1];
    v28 = v6[2] - v7;
    v9 = (int)((*v6 - *(float *)(dword_106B8370 + 20)) / *(float *)(dword_106B8370 + 8));
    if ( v9 >= 0 )
    {
      v10 = *(_DWORD *)(dword_106B8370 + 12);
      if ( v9 >= v10 )
        v9 = v10 - 1;
    }
    else
    {
      v9 = 0;
    }
    v11 = (int)((v27 - *(float *)(dword_106B8370 + 24)) / *(float *)(dword_106B8370 + 8));
    v34 = v11;
    if ( v11 >= 0 )
    {
      v12 = *(_DWORD *)(dword_106B8370 + 16);
      if ( v11 >= v12 )
        v34 = v12 - 1;
    }
    else
    {
      v34 = 0;
    }
    v13 = v9 - 1;
    v14 = v9 + 1;
    v35 = v13;
    v29 = v14;
    if ( v13 <= v14 )
    {
      v15 = v34;
      do
      {
        if ( v13 >= 0 && v13 < v8[3] )
        {
          v16 = v15 - 1;
          v33 = v15 - 1;
          if ( !__OFSUB__(v15 - 1, v15 + 1) || v15 - 1 == v15 + 1 )
          {
            do
            {
              if ( v16 >= 0 && v16 < v8[4] )
              {
                v17 = (_DWORD *)(v8[1] + 36 * (v13 + v16 * v8[3]));
                v18 = v17[3];
                v30 = v17;
                if ( v18 != -1 )
                {
                  do
                  {
                    v19 = 12 * v18;
                    v20 = *(_DWORD *)(12 * v18 + *v17);
                    if ( *(_DWORD *)(v20 + 492) != dword_10632620 )
                    {
                      *(_DWORD *)(v20 + 492) = dword_10632620;
                      for ( i = 0; i < 4; ++i )
                      {
                        v22 = sub_1018B480((float *)v20, i);
                        v25 = v22[2];
                        v23 = v22[1] - v27;
                        v24 = v23 * v23 + (*v22 - v26) * (*v22 - v26) + (v25 - v28) * (v25 - v28);
                        if ( off_10689708(v24) < v32 )
                          sub_1018DAE0(i, (int)(v31 + v28 - v25), 0);
                      }
                      v17 = v30;
                      v16 = v33;
                    }
                    v18 = *(_DWORD *)(v19 + *v17 + 8);
                  }
                  while ( v18 != -1 );
                  v8 = (_DWORD *)dword_106B8370;
                  v13 = v35;
                }
              }
              v15 = v34;
              v33 = ++v16;
            }
            while ( v16 <= v34 + 1 );
            v14 = v29;
          }
        }
        v35 = ++v13;
      }
      while ( v13 <= v14 );
    }
  }
}
