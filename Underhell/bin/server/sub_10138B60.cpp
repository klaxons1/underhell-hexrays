int __thiscall sub_10138B60(int this, int a2)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // ebx
  _DWORD *v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  _BYTE *v14; // ecx
  int result; // eax
  int v16; // ebx
  _BYTE v17[4]; // [esp+Ch] [ebp-4h] BYREF

  v3 = sub_10261B20();
  v4 = v3;
  if ( *(_BYTE *)(this + 893) )
  {
    if ( v3 )
    {
      v5 = *(_DWORD *)(this + 804);
      *(_BYTE *)(this + 893) = 0;
      v6 = *(_DWORD *)(v4 + 4 * v5 + 3188);
      if ( v6 != -1 && v5 < 8 )
      {
        *(_DWORD *)(this + 876) = v6;
        v7 = 0;
        v8 = (_DWORD *)(this + 816);
        do
        {
          *(v8 - 1) = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(this + 804)) + 2676);
          *v8 = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(this + 804)) + 2680);
          v8[1] = *(_DWORD *)(v4 + 4 * (v7 + 16 * *(_DWORD *)(this + 804)) + 2684);
          v8[2] = *(_DWORD *)(v4 + 4 * (v7 + 16 * (*(_DWORD *)(this + 804) + 42)));
          v7 += 4;
          v8 += 4;
        }
        while ( v7 < 16 );
      }
    }
  }
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v9 = *(_DWORD *)(a2 + 8);
  else
    v9 = 0;
  v10 = (_DWORD *)sub_10162BE0(v17, String);
  v11 = a2;
  *(_DWORD *)(this + 4 * v9 + 808) = *v10;
  if ( *(_DWORD *)(v11 + 24) == 5 )
    v12 = *(_DWORD *)(v11 + 8);
  else
    v12 = 0;
  v13 = *(_DWORD *)(this + 876);
  if ( v13 == v12 && v13 > 1 )
  {
    while ( 1 )
    {
      v14 = *(_BYTE **)(this + 4 * v13 + 804);
      if ( v14 )
      {
        if ( *v14 )
          break;
      }
      if ( v13 == 2 )
        *(_DWORD *)(this + 876) = 0;
      if ( --v13 <= 1 )
        goto LABEL_22;
    }
    *(_DWORD *)(this + 876) = v13 - 1;
  }
LABEL_22:
  result = *(_DWORD *)(this + 804);
  if ( result >= 0 )
  {
    if ( result < 8 )
    {
      *(_DWORD *)(v4 + 4 * result + 3188) = *(_DWORD *)(this + 876);
      if ( *(_DWORD *)(v11 + 24) == 5 )
        v16 = *(_DWORD *)(v11 + 8);
      else
        v16 = 0;
      result = sub_10162BE0(&a2, String);
      *(_DWORD *)(v4 + 4 * (v16 + 16 * *(_DWORD *)(this + 804)) + 2672) = *(_DWORD *)result;
    }
    else
    {
      return Msg("Error: Global Message Index exceeds allowed number: %i\n", 7);
    }
  }
  return result;
}
