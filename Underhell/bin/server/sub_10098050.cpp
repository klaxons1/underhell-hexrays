_DWORD *__thiscall sub_10098050(void *this)
{
  int v1; // esi
  unsigned int i; // ebx
  char v3; // al
  char v4; // dl
  int v5; // edi
  int v6; // ecx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  _DWORD *result; // eax
  int v12; // [esp+8h] [ebp-18h] BYREF
  float v13; // [esp+Ch] [ebp-14h]
  _BYTE v14[4]; // [esp+10h] [ebp-10h] BYREF
  int v15; // [esp+14h] [ebp-Ch]
  float v16; // [esp+18h] [ebp-8h]
  char v17; // [esp+1Eh] [ebp-2h] BYREF
  char v18; // [esp+1Fh] [ebp-1h] BYREF

  v16 = -1.0;
  v1 = (int)this + 812;
  for ( i = 0; i < 720; i += 9 )
  {
    v12 = *(_DWORD *)sub_10162BE0(v14, (&off_10609220)[i]);
    v13 = v16;
    sub_10094200((_BYTE *)v1, (int)&v12, &v18, &v17);
    v3 = sub_10094590(v1);
    v4 = v18;
    v5 = 12 * v3;
    v6 = v5 + *(_DWORD *)(v1 + 4);
    LOBYTE(v15) = v3;
    *(_BYTE *)(v6 + 2) = v18;
    *(_WORD *)v6 = -1;
    *(_BYTE *)(v6 + 3) = 0;
    if ( v4 == -1 )
    {
      *(_BYTE *)(v1 + 16) = v3;
    }
    else
    {
      v7 = v4;
      v8 = *(_DWORD *)(v1 + 4);
      v9 = 3 * v7;
      if ( v17 )
        *(_BYTE *)(v8 + 4 * v9) = v3;
      else
        *(_BYTE *)(v8 + 4 * v9 + 1) = v3;
    }
    sub_100955F0(v1, v15);
    v10 = *(_DWORD *)(v1 + 4);
    ++*(_BYTE *)(v1 + 17);
    result = (_DWORD *)(v10 + v5 + 4);
    if ( v10 + v5 != -4 )
    {
      *result = v12;
      *(float *)(v10 + v5 + 8) = v13;
    }
  }
  return result;
}
