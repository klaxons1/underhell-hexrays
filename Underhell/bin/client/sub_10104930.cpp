void __usercall sub_10104930(int a1@<ecx>, float *a2@<edi>)
{
  int v2; // ebx
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  float v7; // edx
  float *v8; // eax
  int v9; // eax
  int v10; // edx
  float *v11; // eax
  float *v12; // eax
  _DWORD *v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v18[3]; // [esp+18h] [ebp-30h] BYREF
  int v19[3]; // [esp+24h] [ebp-24h] BYREF
  int v20[3]; // [esp+30h] [ebp-18h] BYREF
  void (__thiscall **v21)(_DWORD *, int); // [esp+3Ch] [ebp-Ch]
  _DWORD *v22; // [esp+40h] [ebp-8h]
  int i; // [esp+44h] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 1204); ++i )
  {
    v4 = *(_DWORD *)(a1 + 1192);
    v5 = *(_DWORD *)(v4 + v2 + 40);
    v6 = (float *)(v2 + v4);
    if ( v5 == -1 )
    {
      *(float *)v20 = 32.0;
      *(float *)&v20[1] = 32.0;
      *(float *)&v20[2] = 32.0;
      v7 = v6[1];
      *(float *)v19 = -32.0;
      *(float *)&v19[1] = -32.0;
      *(float *)&v19[2] = -32.0;
      if ( sub_10103270((int)a2, a1, v7, v6[2], v6[3], (float *)v19, (float *)v20) )
      {
        if ( dword_104363D4 < *(_DWORD *)(dword_1043627C + 48) )
        {
          v8 = (float *)sub_10034900(0x808u);
          if ( v8 )
          {
            a2 = sub_10103D30(v8);
            if ( a2 )
            {
              a2[496] = *(float *)(v2 + *(_DWORD *)(a1 + 1192) + 36);
              sub_10034E80(a2, *(_DWORD *)(v2 + *(_DWORD *)(a1 + 1192)));
              sub_10037BA0((int)a2, (float *)(v2 + *(_DWORD *)(a1 + 1192) + 4));
              sub_10037CA0((int)a2, (float *)(v2 + *(_DWORD *)(a1 + 1192) + 16));
              (*(void (__thiscall **)(float *, int))(*((_DWORD *)a2 + 490) + 96))(a2 + 490, 3);
              a2[299] = *(float *)(v2 + *(_DWORD *)(a1 + 1192) + 28);
              v9 = *(_DWORD *)(v2 + *(_DWORD *)(a1 + 1192) + 32);
              *((_DWORD *)a2 + 34) = v9;
              if ( !v9 )
                *((_BYTE *)a2 + 134) = 0;
              if ( sub_101034A0((int)a2) )
              {
                v10 = *((_DWORD *)a2 + 41);
                *((_DWORD *)a2 + 512) = a1;
                *(_DWORD *)(v2 + *(_DWORD *)(a1 + 1192) + 40) = v10;
              }
              else
              {
                (*(void (__thiscall **)(float *))(*((_DWORD *)a2 + 2) + 4))(a2 + 2);
              }
            }
          }
        }
        else
        {
          DevMsg("Warning! Client physic props overflow *max %i).\n", *(_DWORD *)(dword_1043627C + 48));
        }
      }
    }
    else
    {
      a2 = (float *)sub_1007A770(off_103DCD78, v5);
      if ( a2 )
      {
        v11 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 268))(a2);
        if ( !sub_1008EB40(a1 + 352, v11) )
        {
          (*(void (__thiscall **)(float *, int *, int *))(*((_DWORD *)a2 + 88) + 60))(a2 + 88, v17, v18);
          if ( sub_10103270(
                 (int)a2,
                 a1,
                 *(float *)(*(_DWORD *)(a1 + 1192) + v2 + 4),
                 *(float *)(*(_DWORD *)(a1 + 1192) + v2 + 8),
                 *(float *)(*(_DWORD *)(a1 + 1192) + v2 + 12),
                 (float *)v17,
                 (float *)v18) )
          {
            v12 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 36))(a2);
            if ( sub_10103270((int)a2, a1, *v12, v12[1], v12[2], (float *)v17, (float *)v18) )
            {
              sub_10037BA0((int)a2, (float *)(v2 + *(_DWORD *)(a1 + 1192) + 4));
              sub_10037CA0((int)a2, (float *)(v2 + *(_DWORD *)(a1 + 1192) + 16));
              v13 = (_DWORD *)*((_DWORD *)a2 + 46);
              v22 = v13;
              if ( v13 )
              {
                v14 = *(_DWORD *)a2;
                v21 = (void (__thiscall **)(_DWORD *, int))(*v13 + 180);
                v15 = (*(int (__thiscall **)(float *, int))(v14 + 40))(a2, 1);
                v16 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a2 + 36))(a2, v15);
                (*v21)(v22, v16);
              }
            }
          }
        }
      }
    }
    v2 += 44;
  }
}
