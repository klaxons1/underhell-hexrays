_DWORD *__thiscall sub_10088E20(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  void *v5; // ecx
  int v6; // ebx
  int v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  int v10; // esi
  int v11; // edx
  int v12; // edi
  int v13; // edx
  int v14; // eax
  float *v15; // ebx
  int v16; // eax
  int v17; // eax
  char v18; // cl
  int v19; // eax
  char v20; // al
  double v21; // st7
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *result; // eax
  float v25; // [esp+Ch] [ebp-3Ch]
  float v26; // [esp+10h] [ebp-38h]
  float v27; // [esp+14h] [ebp-34h]
  float v28; // [esp+18h] [ebp-30h]
  float v29; // [esp+1Ch] [ebp-2Ch]
  float v30; // [esp+20h] [ebp-28h]
  int v31; // [esp+24h] [ebp-24h]
  int v32; // [esp+28h] [ebp-20h]
  int v33; // [esp+2Ch] [ebp-1Ch]
  float *v34; // [esp+30h] [ebp-18h]
  int v35; // [esp+34h] [ebp-14h]
  _DWORD *v36; // [esp+38h] [ebp-10h]
  int v37; // [esp+3Ch] [ebp-Ch]
  float v38; // [esp+3Ch] [ebp-Ch]
  int v39; // [esp+40h] [ebp-8h]
  char v40; // [esp+47h] [ebp-1h]

  v3 = this;
  v4 = *this + 12 * *(_DWORD *)a3;
  v5 = *(void **)(v4 + 8);
  v36 = v3;
  if ( v5 )
    memset(v5, 0, 4 * *(unsigned __int16 *)(v4 + 2));
  v6 = a2;
  sub_10088A90(v3, a2, a3);
  v7 = 0;
  v35 = 0;
  if ( *(int *)(a2 + 4) > 0 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == dword_10608F94 && v7 == dword_10608F98
        || *(_DWORD *)a3 == dword_10608F98 && v7 == dword_10608F94 )
      {
        DevMsg(String);
      }
      v8 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 != v7 )
        break;
      v9 = (_DWORD *)(*(_DWORD *)(*v3 + 12 * v8 + 8) + 4 * (v7 >> 5));
      *v9 &= ~(1 << (v7 & 0x1F));
LABEL_59:
      v35 = ++v7;
      if ( v7 >= *(_DWORD *)(v6 + 4) )
        goto LABEL_60;
    }
    v33 = 4 * (v7 >> 5);
    v32 = 1 << (v7 & 0x1F);
    if ( (v32 & *(_DWORD *)(v33 + *(_DWORD *)(*v36 + 12 * v8 + 8))) == 0
      || ((v10 = 0, v7 < 0) || v7 >= *(_DWORD *)(v6 + 4)
        ? (++dword_10691DE0, v39 = 0)
        : (v39 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 4 * v7)),
          v11 = *(_DWORD *)(v6 + 4),
          v11 <= 0) )
    {
LABEL_58:
      v3 = v36;
      goto LABEL_59;
    }
    while ( 1 )
    {
      if ( v10 != v7 && v10 != *(_DWORD *)a3 )
      {
        v12 = 1 << (v10 & 0x1F);
        v31 = 4 * (v10 >> 5);
        if ( (v12 & *(_DWORD *)(v31 + *(_DWORD *)(*v36 + 12 * *(_DWORD *)a3 + 8))) != 0 )
        {
          if ( v10 < 0 || v10 >= v11 )
          {
            ++dword_10691DE0;
            v37 = 0;
            v13 = 0;
          }
          else
          {
            v13 = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v10);
            v37 = v13;
          }
          v14 = *(_DWORD *)(v39 + 60);
          if ( v14 == 3 )
          {
            if ( *(_DWORD *)(v13 + 60) == 3 )
              goto LABEL_28;
          }
          else if ( *(_DWORD *)(v13 + 60) != 3 )
          {
LABEL_28:
            if ( *(_DWORD *)(a3 + 60) != 4 || v14 != 4 && *(_DWORD *)(v13 + 60) != 4 )
            {
              v15 = (float *)(a3 + 4);
              if ( !sub_10018CD0((float *)(v39 + 4), (float *)(a3 + 4))
                || *(_DWORD *)(a3 + 60) != 4
                || *(_DWORD *)(v39 + 60) != 4 )
              {
                v34 = (float *)(v37 + 4);
                if ( (!sub_10018CD0((float *)(v37 + 4), v15) || *(_DWORD *)(a3 + 60) != 4 || *(_DWORD *)(v37 + 60) != 4)
                  && (!sub_10018CD0(v34, (float *)(v39 + 4)) || *(_DWORD *)(v39 + 60) != 4 || *(_DWORD *)(v37 + 60) != 4) )
                {
                  v16 = *(_DWORD *)(a3 + 96);
                  if ( !v16 || (v40 = 1, *(_WORD *)(v16 + 816) != 904) )
                    v40 = 0;
                  v17 = *(_DWORD *)(v39 + 96);
                  v18 = v17 && *(_WORD *)(v17 + 816) == 904;
                  v19 = *(_DWORD *)(v37 + 96);
                  v20 = v19 && *(_WORD *)(v19 + 816) == 904;
                  if ( !v40 || v18 == v20 )
                  {
                    v25 = *(float *)(v39 + 4) - *v15;
                    v26 = *(float *)(v39 + 8) - *(float *)(a3 + 8);
                    v27 = *(float *)(v39 + 12) - *(float *)(a3 + 12);
                    v38 = off_10689714();
                    v28 = *v34 - *v15;
                    v29 = v34[1] - *(float *)(a3 + 8);
                    v30 = v34[2] - *(float *)(a3 + 12);
                    v21 = off_10689714();
                    if ( v29 * v26 + v28 * v25 + v30 * v27 >= 0.92387998 )
                    {
                      if ( v21 >= v38 )
                      {
                        sub_10086450(
                          *(_DWORD *)a3,
                          v10,
                          (int)"      Revoking neighbor status to to closer redundant link %d\n");
                        v23 = (_DWORD *)(v31 + *(_DWORD *)(*v36 + 12 * *(_DWORD *)a3 + 8));
                        *v23 &= ~v12;
                      }
                      else
                      {
                        sub_10086450(
                          *(_DWORD *)a3,
                          v35,
                          (int)"      Revoking neighbor status to to closer redundant link %d\n");
                        v22 = (_DWORD *)(v33 + *(_DWORD *)(*v36 + 12 * *(_DWORD *)a3 + 8));
                        *v22 &= ~v32;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v6 = a2;
      v11 = *(_DWORD *)(a2 + 4);
      v7 = v35;
      if ( ++v10 >= v11 )
        goto LABEL_58;
    }
  }
LABEL_60:
  result = (_DWORD *)(v3[7] + 4 * (*(int *)a3 >> 5));
  *result |= 1 << (*(_BYTE *)a3 & 0x1F);
  return result;
}
