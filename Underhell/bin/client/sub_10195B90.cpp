int __userpurge sub_10195B90@<eax>(float a1@<esi>, int a2)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  float *v6; // eax
  int v7; // esi
  void *v8; // eax
  int v9; // esi
  float v10; // [esp+10h] [ebp-34h]
  float v12; // [esp+24h] [ebp-20h]
  int v13[2]; // [esp+28h] [ebp-1Ch] BYREF
  float v14; // [esp+30h] [ebp-14h]
  int v15; // [esp+34h] [ebp-10h] BYREF
  float v16; // [esp+38h] [ebp-Ch]
  float v17; // [esp+3Ch] [ebp-8h]
  float v18; // [esp+40h] [ebp-4h]
  float v19; // [esp+4Ch] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 16424) = 1;
  result = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(a2 + 16420) = result;
  if ( result != v3 + 4 )
  {
    **(_DWORD **)(a2 + 8) = *(_DWORD *)(result + 8);
    v5 = *(_DWORD *)(a2 + 16420);
    if ( v5 )
    {
      do
      {
        v19 = ((double (__thiscall *)(int, _DWORD, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_10413198 + 4))(
                dword_10413198,
                0.02,
                0.079999998,
                LODWORD(a1),
                LODWORD(v12));
        v6 = (float *)sub_100F0920();
        v7 = v5 + 24;
        *(float *)v13 = v6[25] * *(float *)(v7 - 8)
                      + v6[24] * *(float *)(v7 - 12)
                      + v6[26] * *(float *)(v7 - 4)
                      + v6[27];
        *(float *)&v13[1] = v6[29] * *(float *)(v7 - 8)
                          + v6[28] * *(float *)(v7 - 12)
                          + v6[30] * *(float *)(v7 - 4)
                          + v6[31];
        v14 = v6[33] * *(float *)(v7 - 8) + v6[32] * *(float *)(v7 - 12) + v6[34] * *(float *)(v7 - 4) + v6[35];
        v18 = v14;
        v8 = sub_10142310();
        sub_101F2270(v8, v7, &v15);
        v9 = *(_DWORD *)(a2 + 8);
        *(float *)&v15 = *(float *)&v15 * v19;
        v16 = v16 * v19;
        v17 = v19 * v17;
        v12 = 1.0;
        a1 = 0.0;
        v10 = (float)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10413198 + 8))(dword_10413198);
        sub_10175DC0(v9, (float *)v13, (float *)&v15, v10, (float *)2, COERCE_FLOAT(8), 0.0);
        result = sub_1004B070(a2, v18);
        v5 = result;
      }
      while ( result );
    }
  }
  return result;
}
