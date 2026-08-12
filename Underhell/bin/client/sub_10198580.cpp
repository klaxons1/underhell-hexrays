int __thiscall sub_10198580(int this, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int v8; // edx
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  int v14; // edx
  int result; // eax

  sub_1003DBB0(this, a2);
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)(this - 8) + 408))(-1293.0);
  *(float *)(this + 1216) = *(float *)(this + 1280);
  *(float *)(this + 1220) = *(float *)(this + 1284);
  *(float *)(this + 1224) = *(float *)(this + 1288);
  *(float *)(this + 1228) = *(float *)(this + 1292);
  *(float *)(this + 1232) = *(float *)(this + 1296);
  *(float *)(this + 1236) = *(float *)(this + 1300);
  *(_DWORD *)(this + 1256) = 0;
  if ( *(_DWORD *)(this + 1256) )
  {
    v7 = *(_DWORD *)(this + 1244);
  }
  else
  {
    v3 = *(_DWORD *)(this + 1256);
    v4 = *(_DWORD *)(this + 1248);
    if ( v3 + 1 > v4 )
      sub_10118050((_DWORD *)(this + 1244), v3 - v4 + 1);
    ++*(_DWORD *)(this + 1256);
    v5 = *(_DWORD *)(this + 1244);
    v6 = *(_DWORD *)(this + 1256) - v3 - 1;
    *(_DWORD *)(this + 1260) = v5;
    if ( v6 > 0 )
      memcpy((void *)(v5 + 8 * v3 + 8), (const void *)(v5 + 8 * v3), 8 * v6);
    v7 = *(_DWORD *)(this + 1244) + 8 * v3;
  }
  v8 = *(_DWORD *)(this + 1304);
  *(float *)(v7 + 4) = 1.0;
  *(_DWORD *)v7 = v8;
  if ( *(float *)(this + 1280) == flt_10459240
    && *(float *)(this + 1284) == *(float *)&qword_10459244
    && *(float *)(this + 1288) == *((float *)&qword_10459244 + 1) )
  {
    v9 = this + 1212;
    *(_BYTE *)(this + 1212) = 0;
  }
  else
  {
    v9 = this + 1212;
    *(_BYTE *)(this + 1212) = 1;
  }
  if ( *((float *)off_103DC81C + 3) >= (double)*(float *)(this + 1312) )
  {
    if ( *(_DWORD *)(this + 1256) == 2 )
    {
      result = sub_100422D0();
      if ( !result )
        return result;
      if ( *(_DWORD *)(this + 1256) - 2 > 0 )
        memcpy(
          (void *)(*(_DWORD *)(this + 1244) + 8),
          (const void *)(*(_DWORD *)(this + 1244) + 16),
          8 * (*(_DWORD *)(this + 1256) - 2));
      --*(_DWORD *)(this + 1256);
    }
  }
  else if ( *(int *)(this + 1256) >= 2 )
  {
    v13 = *(_DWORD *)(this + 1244);
    v14 = *(_DWORD *)(this + 1308);
    *(float *)(v13 + 12) = 0.0;
    *(_DWORD *)(v13 + 8) = v14;
  }
  else
  {
    v10 = sub_10198350((int *)(this + 1244));
    v11 = *(_DWORD *)(this + 1244);
    v12 = *(_DWORD *)(this + 1308);
    *(float *)(v11 + 8 * v10 + 4) = 0.0;
    *(_DWORD *)(v11 + 8 * v10) = v12;
  }
  if ( *(_BYTE *)(this + 1320) )
  {
    dword_1043BD0C = v9;
  }
  else if ( dword_1043BD0C == v9 )
  {
    dword_1043BD0C = 0;
  }
  *(float *)(this + 1264) = *(float *)(this + 1328);
  *(float *)(this + 1268) = *(float *)(this + 1332);
  *(float *)(this + 1272) = *(float *)(this + 1336);
  if ( *(float *)(this + 1344) != *(float *)(this + 1340) )
  {
    *(float *)(this + 1352) = *((float *)off_103DC81C + 3);
    *(float *)(this + 1356) = *(float *)(this + 1276);
    *(float *)(this + 1344) = *(float *)(this + 1340);
    if ( 0.0 == *(float *)(this + 1348) )
      *(float *)(this + 1348) = 0.0099999998;
  }
  result = *(_DWORD *)(this + 1188);
  if ( *(_DWORD *)(this + 1192) != result )
  {
    *(_DWORD *)(this + 1192) = result;
    *(float *)(this + 1240) = (float)result;
  }
  return result;
}
