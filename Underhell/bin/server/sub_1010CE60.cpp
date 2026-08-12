int __thiscall sub_1010CE60(int this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  int (__thiscall *v6)(int, const char *, int, _DWORD, int, int); // eax
  int v8; // esi
  int v9; // eax
  char *v10; // edx
  int v11; // esi
  int v12; // eax
  char *v13; // ecx
  char *v14; // eax
  float v15; // [esp+28h] [ebp-58h]
  float v16; // [esp+28h] [ebp-58h]
  int v17; // [esp+2Ch] [ebp-54h]
  float v18; // [esp+44h] [ebp-3Ch] BYREF
  int v19; // [esp+48h] [ebp-38h]
  int v20; // [esp+4Ch] [ebp-34h]
  unsigned int v21; // [esp+50h] [ebp-30h]
  unsigned int v22; // [esp+54h] [ebp-2Ch]
  int v23; // [esp+58h] [ebp-28h]
  unsigned int v24; // [esp+5Ch] [ebp-24h]
  int v25; // [esp+60h] [ebp-20h]
  int v26; // [esp+64h] [ebp-1Ch]
  int v27; // [esp+68h] [ebp-18h]
  int v28; // [esp+6Ch] [ebp-14h]
  int v29; // [esp+70h] [ebp-10h]
  int v30; // [esp+7Ch] [ebp-4h]

  v3 = *(_DWORD *)(this + 48);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 48);
      sub_1042FBE0(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  v5 = a2;
  *(_DWORD *)(this + 48) = 0;
  v21 = -1;
  v22 = -1;
  v24 = -1;
  v28 = -1;
  v6 = *(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 12);
  v25 = 0;
  v29 = 0;
  if ( !v6(a2, "EventQueue", this, 0, dword_10614A34, dword_10614A38) )
    return 0;
  v30 = 0;
  if ( *(int *)(this + 56) > 0 )
  {
    while ( (*(int (__thiscall **)(int, const char *, float *, _DWORD, int, int))(*(_DWORD *)v5 + 12))(
              v5,
              "PEvent",
              &v18,
              0,
              dword_10614A4C,
              dword_10614A50) )
    {
      if ( v24 != -1 && off_1061BE18[4 * (v24 & 0xFFF) + 2] == v24 >> 12 && off_1061BE18[4 * (v24 & 0xFFF) + 1] )
      {
        if ( v22 == -1 || off_1061BE18[4 * (v22 & 0xFFF) + 2] != v22 >> 12 )
          v8 = 0;
        else
          v8 = off_1061BE18[4 * (v22 & 0xFFF) + 1];
        if ( v21 == -1 || off_1061BE18[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
          v9 = 0;
        else
          v9 = off_1061BE18[4 * (v21 & 0xFFF) + 1];
        v15 = v18 - *(float *)(dword_106B31C8 + 12);
        v10 = (char *)v20;
        if ( !v20 )
          v10 = (char *)String;
        if ( off_1061BE18[4 * (v24 & 0xFFF) + 2] == v24 >> 12 )
          sub_1010C6E0(
            (float *)this,
            off_1061BE18[4 * (v24 & 0xFFF) + 1],
            v10,
            v25,
            v26,
            v27,
            v28,
            v29,
            v15,
            v9,
            v8,
            v23);
        else
          sub_1010C6E0((float *)this, 0, v10, v25, v26, v27, v28, v29, v15, v9, v8, v23);
      }
      else
      {
        if ( v22 == -1 || off_1061BE18[4 * (v22 & 0xFFF) + 2] != v22 >> 12 )
          v11 = 0;
        else
          v11 = off_1061BE18[4 * (v22 & 0xFFF) + 1];
        if ( v21 == -1 || off_1061BE18[4 * (v21 & 0xFFF) + 2] != v21 >> 12 )
          v12 = 0;
        else
          v12 = off_1061BE18[4 * (v21 & 0xFFF) + 1];
        v17 = v12;
        v13 = (char *)v20;
        if ( !v20 )
          v13 = (char *)String;
        v14 = (char *)v19;
        if ( !v19 )
          v14 = (char *)String;
        v16 = v18 - *(float *)(dword_106B31C8 + 12);
        sub_1010C5D0((float *)this, v14, v13, v25, v26, v27, v28, v29, v16, v17, v11, v23);
      }
      if ( ++v30 >= *(_DWORD *)(this + 56) )
        return 1;
      v5 = a2;
    }
    return 0;
  }
  return 1;
}
