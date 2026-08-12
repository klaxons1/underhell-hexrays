int __thiscall sub_101FAD50(_DWORD *this)
{
  int v2; // ebp
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  void (**v6)(int, int, const char *, ...); // esi
  int v7; // eax
  _DWORD *v8; // edi
  int i; // ebx
  int v10; // eax
  unsigned __int64 v11; // st6
  int (__thiscall ***v12)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // ecx
  void (__cdecl **v13)(int, int, const char *, int); // esi
  int v14; // eax
  double v16; // [esp+Ch] [ebp-58h]
  double v17; // [esp+14h] [ebp-50h]
  int v18; // [esp+1Ch] [ebp-48h]
  int v19; // [esp+20h] [ebp-44h]
  int v20; // [esp+60h] [ebp-4h]

  v2 = (*(int (__thiscall **)(int, const char *, const char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 8))(
         dword_1047C968 + 4,
         "particle_profile.csv",
         "w",
         0);
  (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1047C968 + 96))(
    dword_1047C968,
    v2,
    "numframes,%d\n",
    this[69]);
  (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_1047C968 + 96))(
    dword_1047C968,
    v2,
    "name, total time, max time, max particles, allocated particles\n");
  v3 = this[35];
  v4 = 0;
  if ( *(_WORD *)(v3 + 38) )
  {
    do
    {
      v5 = *(_DWORD *)(*(_DWORD *)v3 + 4 * (unsigned __int16)v4);
      if ( *(_DWORD *)(v5 + 840) )
      {
        v19 = *(_DWORD *)(v5 + 544);
        v18 = *(_DWORD *)(v5 + 840);
        v17 = *(float *)(v5 + 836);
        v6 = (void (**)(int, int, const char *, ...))(*(_DWORD *)dword_1047C968 + 96);
        v16 = *(float *)(v5 + 828);
        v7 = sub_1022D040(v5 + 552);
        (*v6)(dword_1047C968, v2, "%s,%f,%f,%d,%d\n", v7, v16, v17, v18, v19);
      }
      v3 = this[35];
      ++v4;
    }
    while ( v4 < *(unsigned __int16 *)(v3 + 38) );
  }
  (*(void (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_1047C968 + 96))(
    dword_1047C968,
    v2,
    "\n\nopname, total time, max time\n");
  v8 = this + 3;
  v20 = 7;
  do
  {
    for ( i = 0; i < *v8; ++i )
    {
      v10 = *(_DWORD *)(*(v8 - 3) + 4 * i);
      *(double *)&v11 = *(float *)(v10 + 8);
      if ( *(double *)&v11 > 0.0 )
      {
        v12 = *(int (__thiscall ****)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(v8 - 3) + 4 * i);
        v13 = (void (__cdecl **)(int, int, const char *, int))(*(_DWORD *)dword_1047C968 + 96);
        v14 = (**v12)(
                v12,
                v11,
                HIDWORD(v11),
                COERCE_UNSIGNED_INT64(*(float *)(v10 + 4)),
                HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v10 + 4))));
        (*v13)(dword_1047C968, v2, "%s,%f,%f\n", v14);
      }
    }
    v8 += 5;
    --v20;
  }
  while ( v20 );
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_1047C968 + 4) + 12))(dword_1047C968 + 4, v2);
}
