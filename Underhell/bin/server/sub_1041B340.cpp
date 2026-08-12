int __thiscall sub_1041B340(int *this, void *Src, float a3, char a4)
{
  int v5; // eax
  int result; // eax
  int v7; // edx
  int v8; // ecx
  int v9; // ebp
  int v10; // eax
  int v11; // edi
  int v12; // esi
  _DWORD v13[4]; // [esp+8h] [ebp-38h] BYREF
  float v14; // [esp+18h] [ebp-28h]
  int v15; // [esp+1Ch] [ebp-24h]
  int v16; // [esp+20h] [ebp-20h]
  _DWORD v17[6]; // [esp+24h] [ebp-1Ch] BYREF
  char v18; // [esp+3Ch] [ebp-4h]
  int Srca; // [esp+44h] [ebp+4h]
  int v20; // [esp+48h] [ebp+8h]
  int v21; // [esp+4Ch] [ebp+Ch]

  sub_10431290(v17);
  sub_10431100(Src);
  *(float *)&v17[4] = a3;
  v5 = this[55];
  v18 = a4;
  v17[5] = this;
  sub_1041B110(this + 52, v5, (int)v17);
  sub_10431290(v13);
  sub_10431100((void *)String);
  result = this[55];
  v14 = 0.0;
  v7 = 1;
  v15 = 1;
  LOBYTE(v16) = 0;
  if ( result > 0 )
  {
    v8 = 0;
    v20 = 0;
    Srca = 1;
    do
    {
      v21 = v7;
      if ( v7 < result )
      {
        v9 = v8 + 28;
        do
        {
          v10 = this[52];
          v11 = v10 + v9;
          v12 = v8 + v10;
          if ( *(float *)(v10 + v9 + 16) < (double)*(float *)(v8 + v10 + 16) )
          {
            sub_104310E0(v12);
            v14 = *(float *)(v12 + 16);
            v15 = *(_DWORD *)(v12 + 20);
            LOBYTE(v16) = *(_BYTE *)(v12 + 24);
            sub_104310E0(v11);
            *(float *)(v12 + 16) = *(float *)(v11 + 16);
            *(_DWORD *)(v12 + 20) = *(_DWORD *)(v11 + 20);
            *(_BYTE *)(v12 + 24) = *(_BYTE *)(v11 + 24);
            sub_104310E0(v13);
            v7 = Srca;
            *(float *)(v11 + 16) = v14;
            *(_DWORD *)(v11 + 20) = v15;
            *(_BYTE *)(v11 + 24) = v16;
            v8 = v20;
          }
          v9 += 28;
          ++v21;
        }
        while ( v21 < this[55] );
      }
      result = this[55];
      ++v7;
      v8 += 28;
      Srca = v7;
      v20 = v8;
    }
    while ( v7 - 1 < result );
  }
  if ( v13[2] >= 0 )
  {
    result = v13[0];
    if ( v13[0] )
    {
      result = (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v13[0]);
      v13[0] = 0;
    }
    v13[1] = 0;
  }
  if ( v17[2] >= 0 )
  {
    result = v17[0];
    if ( v17[0] )
      return (*(int (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, v17[0]);
  }
  return result;
}
