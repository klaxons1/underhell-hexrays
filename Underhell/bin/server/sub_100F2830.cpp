void __thiscall sub_100F2830(int this, char *String2, float a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // eax
  int v6; // ebx
  const char *v8; // esi
  bool v9; // zf
  int v10; // ebx
  char *v11; // ebx
  int v12; // esi
  int v13; // eax
  double v14; // st7
  int v15; // esi
  int *v16; // ebx
  double v17; // st7
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  double v21; // st7
  int v22; // ecx
  float v23; // [esp+0h] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-Ch]
  int v25; // [esp+14h] [ebp-8h]
  int v26; // [esp+18h] [ebp-4h]
  float v27; // [esp+18h] [ebp-4h]
  char *String2a; // [esp+24h] [ebp+8h]

  v5 = a4;
  v6 = 0;
  if ( (int)a4[19] > 0 )
  {
    v26 = 0;
    do
    {
      v8 = (char *)&v5[v26] + v5[20];
      if ( v8 )
      {
        v9 = _stricmp(&v8[*(_DWORD *)v8], String2) == 0;
        v5 = a4;
        if ( v9 )
          break;
      }
      v26 += 6;
      ++v6;
    }
    while ( v6 < v5[19] );
    if ( v6 < v5[19] )
    {
      v10 = *((_DWORD *)v8 + 5);
      v9 = &v8[v10] == 0;
      v11 = (char *)&v8[v10];
      v12 = *((_DWORD *)v8 + 2);
      String2a = v11;
      if ( !v9 && v12 > 0 )
      {
        v25 = v12;
        while ( 1 )
        {
          v13 = sub_100F2760(this, v5, *(_DWORD *)v11);
          v14 = *((float *)v11 + 2) * a3;
          v15 = v13;
          if ( v14 <= 1.0 )
          {
            if ( v14 < 0.0 )
              v14 = 0.0;
          }
          else
          {
            v14 = 1.0;
          }
          v27 = v14;
          if ( v13 < 0 || v13 >= sub_100BF790(this) )
            goto LABEL_25;
          v24 = dword_10700AC8;
          (*(void (**)(void))(*(_DWORD *)dword_10700AC8 + 100))();
          if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
            sub_100BD750((volatile signed __int32 *)this);
          v16 = *(int **)(this + 1100);
          if ( !v16 || !*v16 )
            v16 = 0;
          (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 104))(v24);
          if ( !v16 )
            break;
          v18 = *v16;
          v19 = *(_DWORD *)(*v16 + 272);
          v11 = String2a;
          v20 = v19 + 20 * v15;
          v21 = *(float *)(v20 + v18 + 16);
          v22 = v18 + v20;
          if ( *(float *)(v22 + 12) == v21 )
            v17 = *(float *)(this + 4 * v15 + 1140);
          else
            v17 = (*(float *)(v22 + 16) - *(float *)(v22 + 12)) * *(float *)(this + 4 * v15 + 1140)
                + *(float *)(v22 + 12);
LABEL_26:
          v23 = v17 * (1.0 - v27) + v27 * *((float *)v11 + 1);
          sub_100ED710((_DWORD *)this, v15, v23);
          v11 += 12;
          v9 = v25-- == 1;
          String2a = v11;
          if ( v9 )
            return;
          v5 = a4;
        }
        v11 = String2a;
LABEL_25:
        v17 = 0.0;
        goto LABEL_26;
      }
    }
  }
}
