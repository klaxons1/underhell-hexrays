_DWORD *__thiscall sub_100A2EF0(int this, int *a2)
{
  int v2; // edi
  _DWORD *result; // eax
  int v5; // edx
  int v6; // ebx
  char *v7; // eax
  char v8; // di
  bool (__cdecl **v9)(int, int); // eax
  char *v10; // ecx
  char *v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  char **v16; // edi
  int v17; // edx
  bool (__cdecl *v18[7])(int, int); // [esp+4h] [ebp-2Ch] BYREF
  int v19; // [esp+20h] [ebp-10h]
  int v20; // [esp+24h] [ebp-Ch]
  int v21; // [esp+28h] [ebp-8h]
  char *v22; // [esp+2Ch] [ebp-4h]
  _DWORD *v23; // [esp+38h] [ebp+8h]

  v2 = 0;
  result = 0;
  v19 = this;
  v20 = 0;
  if ( *(__int16 *)(this + 22) > 0 )
  {
    do
    {
      result = (_DWORD *)(*(_DWORD *)(this + 8) + 60 * (__int16)v2 + 12);
      v5 = 0;
      v23 = result;
      v21 = 0;
      if ( (int)result[3] > 0 )
      {
        do
        {
          v6 = *result + 8 * v5;
          if ( (*(_BYTE *)(v6 + 7) & 0x3F) != 4 )
          {
            v7 = (char *)sub_10184390(168);
            if ( v7 )
              v22 = sub_10065740(v7);
            else
              v22 = 0;
            v8 = *(_BYTE *)(v6 + 7) & 0x3F;
            v9 = sub_10067CD0(v18);
            v10 = *(char **)v6;
            v11 = v22;
            sub_100680A0((int)v22, v8, v10, v9, (int)(v23 + 5), 0, 0, 0);
            sub_10067DD0((int)v18);
            v12 = a2[3];
            v13 = a2[1];
            if ( v12 + 1 > v13 )
              sub_102ABFC0(v12 - v13 + 1);
            ++a2[3];
            v14 = *a2;
            v15 = a2[3] - v12 - 1;
            a2[4] = *a2;
            if ( v15 > 0 )
              memcpy((void *)(v14 + 4 * v12 + 4), (const void *)(v14 + 4 * v12), 4 * v15);
            v16 = (char **)(*a2 + 4 * v12);
            result = v23;
            if ( v16 )
              *v16 = v11;
          }
          v5 = v21 + 1;
          v21 = v5;
        }
        while ( v5 < result[3] );
        v2 = v20;
        this = v19;
      }
      v17 = *(__int16 *)(this + 22);
      v20 = ++v2;
    }
    while ( v2 < v17 );
  }
  return result;
}
