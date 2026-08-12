int __thiscall sub_102226A0(int this)
{
  int result; // eax
  int v3; // edx
  unsigned int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // eax
  int v15; // edi
  _DWORD *v16; // ecx
  int v17; // eax
  int *v18; // eax
  int v19; // [esp+4h] [ebp-14h] BYREF
  int v20; // [esp+8h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-Ch]
  int v22; // [esp+10h] [ebp-8h]
  int v23; // [esp+14h] [ebp-4h]

  result = *(_DWORD *)(this + 1372);
  v3 = 0;
  v21 = result;
  v23 = 0;
  if ( result > 0 )
  {
    result = 0;
    v22 = 0;
    do
    {
      v4 = *(_DWORD *)(result + *(_DWORD *)(this + 1376) + 16);
      if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
        v5 = 0;
      else
        v5 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
      v19 = v5;
      v20 = v3;
      v6 = sub_10430EC0(&v19);
      if ( *(_BYTE *)(this + 1406) )
        v7 = v6 & *(_DWORD *)(this + 1408);
      else
        v7 = v6 % *(_DWORD *)(this + 1396);
      v8 = *(_DWORD *)(this + 1384);
      v9 = 5 * v7;
      v10 = *(_DWORD *)(v8 + 4 * v9 + 12);
      v11 = v8 + 4 * v9;
      v12 = 0;
      if ( v10 > 0 )
      {
        v13 = *(_DWORD **)v11;
        do
        {
          if ( *v13 == v19 )
            break;
          ++v12;
          v13 += 2;
        }
        while ( v12 < v10 );
      }
      if ( v12 == v10 )
      {
        v14 = *(_DWORD *)(v11 + 4);
        v15 = v10;
        if ( v10 + 1 > v14 )
          sub_10226330(v10 - v14 + 1);
        ++*(_DWORD *)(v11 + 12);
        v16 = *(_DWORD **)v11;
        v17 = *(_DWORD *)(v11 + 12) - v15 - 1;
        *(_DWORD *)(v11 + 16) = *(_DWORD *)v11;
        if ( v17 > 0 )
          memcpy(&v16[2 * v15 + 2], &v16[2 * v15], 8 * v17);
        v18 = (int *)(*(_DWORD *)v11 + 8 * v15);
        if ( v18 )
        {
          *v18 = v19;
          v18[1] = v20;
        }
      }
      v3 = v23 + 1;
      result = v22 + 56;
      v23 = v3;
      v22 += 56;
    }
    while ( v3 < v21 );
  }
  return result;
}
