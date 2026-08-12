int __usercall sub_10250660@<eax>(int a1@<ebx>, int a2@<edi>)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // esi
  int v6; // eax
  int v7; // edi
  double v8; // st7
  int v9; // eax
  double v10; // st7
  int v13; // [esp+4h] [ebp-3Ch] BYREF
  int v14; // [esp+8h] [ebp-38h]
  int v15; // [esp+Ch] [ebp-34h]
  int v16; // [esp+10h] [ebp-30h]
  int v17; // [esp+14h] [ebp-2Ch]
  float v18[3]; // [esp+18h] [ebp-28h] BYREF
  float v19; // [esp+24h] [ebp-1Ch]
  float v20; // [esp+28h] [ebp-18h]
  float v21; // [esp+2Ch] [ebp-14h]
  int v22; // [esp+30h] [ebp-10h]
  int i; // [esp+34h] [ebp-Ch]
  float v24; // [esp+38h] [ebp-8h]
  int v25; // [esp+3Ch] [ebp-4h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  sub_1016B460(a1, &v13);
  v2 = v13;
  v24 = 0.0;
  v3 = 0;
  v25 = 0;
  for ( i = 0; v3 < v16; i = v3 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v2 + 4 * v3) + 424);
    v22 = v4;
    if ( v4 )
    {
      v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 316))(v4, a2);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) )
      {
        do
        {
          v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 8))(v5, 1);
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 68))(v6);
          if ( *(_BYTE *)(v7 + 306) == 6 )
          {
            (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 20))(v5, v18);
            v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 24))(v5);
            v9 = *(_DWORD *)(a1 + 252) >> 12;
            v19 = v18[0] * v8;
            v20 = v18[1] * v8;
            v21 = v8 * v18[2];
            if ( (v9 & 1) != 0 )
              sub_100DAFD0(a1);
            v10 = *(float *)(a1 + 480) * v20 + *(float *)(a1 + 476) * v19 + *(float *)(a1 + 484) * v21;
            if ( !v25 || v24 < v10 )
            {
              v24 = v10;
              v25 = v7;
            }
          }
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 48))(v5);
        }
        while ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5) );
        v4 = v22;
      }
      a2 = v5;
      (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4);
      v2 = v13;
      v3 = i;
    }
    ++v3;
  }
  v16 = 0;
  if ( v15 >= 0 )
  {
    if ( v2 )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
      v2 = 0;
      v13 = 0;
    }
    v14 = 0;
  }
  v17 = v2;
  if ( v15 >= 0 && v2 )
    (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v2);
  return v25;
}
