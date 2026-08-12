int __thiscall sub_1003C6B0(char *this, int a2, int a3)
{
  char *v3; // edx
  _DWORD *v4; // ecx
  int result; // eax
  int v6; // edi
  int v7; // esi
  int v8; // edi
  _DWORD *v9; // edi
  int v10; // esi
  char *v11; // ecx
  char *v12; // edx
  int v13; // eax
  char *v14; // ecx
  int v15; // [esp+Ch] [ebp-18h]
  char *v16; // [esp+14h] [ebp-10h]
  int v17; // [esp+18h] [ebp-Ch]
  int v18; // [esp+1Ch] [ebp-8h]
  _DWORD *v19; // [esp+20h] [ebp-4h]

  v3 = this;
  v4 = this + 740;
  result = 0;
  v16 = v3;
  if ( v4 )
  {
    v6 = a2;
    v7 = 0;
    v15 = 0;
    v18 = 0;
    if ( a2 > 0 )
    {
      v19 = v4;
      v17 = a2;
      v18 = a2;
      do
      {
        v8 = v7;
        if ( v7 + 1 > 0 )
        {
          sub_1010AFF0(v7 + 1);
          v7 = v15;
        }
        v15 = ++v7;
        if ( v7 - v8 - 1 > 0 )
          memcpy((void *)(4 * v8 + 4), (const void *)(4 * v8), 4 * (v7 - v8 - 1));
        v9 = (_DWORD *)(4 * v8);
        if ( v9 )
          *v9 = *v19;
        ++v19;
        --v17;
      }
      while ( v17 );
      v6 = a2;
      v3 = v16;
      result = a2;
    }
    v10 = a3;
    if ( result < a3 )
    {
      v11 = &v3[4 * result + 740];
      v12 = &v3[4 * (result - v6) + 740];
      v13 = a3 - v18;
      do
      {
        *(_DWORD *)v12 = *(_DWORD *)v11;
        v11 += 4;
        v12 += 4;
        --v13;
      }
      while ( v13 );
      v3 = v16;
      v10 = a3;
    }
    result = 0;
    if ( v6 > 0 )
    {
      v14 = &v3[4 * (v10 - v6) + 740];
      do
      {
        *(_DWORD *)v14 = *(_DWORD *)(4 * result++);
        v14 += 4;
      }
      while ( result < v6 );
    }
  }
  return result;
}
