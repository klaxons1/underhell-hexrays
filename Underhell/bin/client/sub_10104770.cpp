int sub_10104770()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // esi
  int v3; // ebx
  _DWORD *v4; // edi
  float *v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  float *v12; // eax
  float *v13; // eax
  int v14; // ecx
  _DWORD *v15; // [esp+0h] [ebp-10h]
  int *v16; // [esp+4h] [ebp-Ch]
  float *v17; // [esp+4h] [ebp-Ch]
  float *v18; // [esp+4h] [ebp-Ch]
  int v19; // [esp+8h] [ebp-8h]
  int v20; // [esp+Ch] [ebp-4h]

  result = 0;
  v19 = 0;
  if ( dword_104363E8 > 0 )
  {
    v1 = dword_104363D4;
    do
    {
      v2 = *(_DWORD **)(dword_104363DC + 4 * result);
      v3 = 0;
      v15 = v2;
      v20 = 0;
      if ( v1 > 0 )
      {
        do
        {
          v4 = *(_DWORD **)(dword_104363C8 + 4 * v3);
          v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 268))(v4);
          if ( sub_1008EB40((int)(v2 + 88), v5) )
          {
            v4[512] = v2;
            v6 = v2[301];
            v7 = v2[299];
            if ( v6 + 1 > v7 )
              sub_10103390(v2 + 298, v6 - v7 + 1);
            ++v2[301];
            v8 = v2[298];
            v9 = v2[301] - v6 - 1;
            v2[302] = v8;
            if ( v9 > 0 )
              memcpy((void *)(44 * v6 + v8 + 44), (const void *)(44 * v6 + v8), 44 * v9);
            v10 = 44 * v6;
            v11 = v10 + v2[298];
            if ( v11 )
              *(_DWORD *)(v11 + 40) = -1;
            v16 = (int *)(v10 + v2[298]);
            *v16 = sub_10034E90(v4);
            v17 = (float *)(v10 + v2[298]);
            v12 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 36))(v4);
            v17[1] = *v12;
            v17[2] = v12[1];
            v17[3] = v12[2];
            v18 = (float *)(v10 + v2[298]);
            v13 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 40))(v4);
            v18[4] = *v13;
            v18[5] = v13[1];
            v18[6] = v13[2];
            *(_DWORD *)(v2[298] + v10 + 28) = v4[299];
            *(_DWORD *)(v2[298] + v10 + 32) = v4[34];
            *(_DWORD *)(v2[298] + v10 + 36) = v4[496];
            v14 = v2[298];
            v2 = v15;
            *(_DWORD *)(v14 + v10 + 40) = v4[41];
            v3 = v20;
          }
          v1 = dword_104363D4;
          v20 = ++v3;
        }
        while ( v3 < dword_104363D4 );
        result = v19;
      }
      v19 = ++result;
    }
    while ( result < dword_104363E8 );
  }
  return result;
}
