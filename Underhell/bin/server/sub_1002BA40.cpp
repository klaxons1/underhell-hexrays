int __thiscall sub_1002BA40(char *this)
{
  int v2; // eax
  double v3; // st6
  void (__thiscall *v4)(char *, _DWORD, float *, _DWORD); // edx
  double v5; // st7
  char *i; // edi
  int v7; // eax
  int v8; // eax
  double v9; // st6
  double v10; // st7
  int v11; // eax
  unsigned __int64 v12; // rax
  int v14; // [esp+14h] [ebp-54h]
  int v15; // [esp+18h] [ebp-50h]
  int v16[3]; // [esp+34h] [ebp-34h] BYREF
  int v17; // [esp+40h] [ebp-28h] BYREF
  float v18; // [esp+44h] [ebp-24h]
  float v19; // [esp+48h] [ebp-20h]
  float v20; // [esp+4Ch] [ebp-1Ch] BYREF
  float v21; // [esp+50h] [ebp-18h]
  float v22; // [esp+54h] [ebp-14h]
  int v23; // [esp+58h] [ebp-10h] BYREF
  unsigned __int64 v24; // [esp+5Ch] [ebp-Ch] BYREF
  __int64 *v25; // [esp+64h] [ebp-4h] BYREF

  v25 = &qword_10690DC8;
  qword_10690DC8 = __rdtsc();
  if ( *(_DWORD *)(dword_10690A84 + 48)
    && *((_DWORD *)this + 699)
    && !(unsigned __int8)sub_100B1060(this)
    && ((unsigned __int8)sub_100B1BD0(this) || sub_100B16F0(1) == 1) )
  {
    v2 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)this + 504))(this, &v17);
    v3 = *(float *)(v2 + 4);
    v4 = *(void (__thiscall **)(char *, _DWORD, float *, _DWORD))(*(_DWORD *)this + 528);
    v5 = *(float *)(v2 + 8) + 12.0;
    v23 = *(int *)v2;
    *(float *)&v24 = v3;
    *((float *)&v24 + 1) = v5;
    v4(this, 0, &v20, 0);
    v17 = v23;
    v18 = *(float *)&v24;
    v19 = *((float *)&v24 + 1) + 64.0;
    sub_1011BC50((int)&v23, (int)&v17, 0, 255, 0, 0, 0.1);
    *(float *)&v17 = v20 * 32.0 + *(float *)&v23;
    v18 = v21 * 32.0 + *(float *)&v24;
    v19 = v22 * 32.0 + *((float *)&v24 + 1) + 32.0;
    sub_1011BC50((int)&v23, (int)&v17, 0, 255, 0, 0, 0.1);
    *(float *)&v17 = *(float *)&v23 - v20 * 32.0;
    v18 = *(float *)&v24 - v21 * 32.0;
    v19 = *((float *)&v24 + 1) + 32.0 - v22 * 32.0;
    sub_1011BC50((int)&v23, (int)&v17, 0, 255, 0, 0, 0.1);
    for ( i = (char *)sub_100B1560(&v25, 0); i; i = (char *)sub_100B1630(&v25, 0) )
    {
      if ( i != this )
      {
        v15 = (unsigned __int8)sub_100B1060(i) != 0 ? 127 : 255;
        v14 = (*(int (__thiscall **)(char *, int *, _DWORD))(*(_DWORD *)i + 504))(i, &v17, 0);
        v7 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 504))(this);
        sub_1011BC50(v7, (int)v16, v14, v15, 0, 0, 0.1);
      }
    }
  }
  if ( *(_DWORD *)(dword_10690ACC + 48) && !*((_DWORD *)this + 699) && *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v8 = (*(int (__thiscall **)(char *, int *))(*(_DWORD *)this + 504))(this, v16);
    v9 = *(float *)(v8 + 4);
    v10 = *(float *)(v8 + 8) + 12.0;
    v23 = *(int *)v8;
    *(float *)&v24 = v9;
    *((float *)&v24 + 1) = v10;
    v11 = sub_10261B20();
    (*(void (__thiscall **)(int, _DWORD, float *, _DWORD))(*(_DWORD *)v11 + 528))(v11, 0, &v20, 0);
    v17 = v23;
    v18 = *(float *)&v24;
    v19 = *((float *)&v24 + 1) + 64.0;
    sub_1011BC50((int)&v23, (int)&v17, 255, 0, 0, 0, 0.1);
    *(float *)&v17 = v20 * 32.0 + *(float *)&v23;
    v18 = v21 * 32.0 + *(float *)&v24;
    v19 = v22 * 32.0 + *((float *)&v24 + 1) + 32.0;
    sub_1011BC50((int)&v23, (int)&v17, 255, 0, 0, 0, 0.1);
    *(float *)&v17 = *(float *)&v23 - v20 * 32.0;
    v18 = *(float *)&v24 - v21 * 32.0;
    v19 = *((float *)&v24 + 1) + 32.0 - v22 * 32.0;
    sub_1011BC50((int)&v23, (int)&v17, 255, 0, 0, 0, 0.1);
  }
  *(_WORD *)(this + 2321) = 0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_106B2C88 + 28) + 48) && *(_BYTE *)(*((_DWORD *)this + 647) + 58) )
    sub_100D5D60("NPC w/no reachable nodes!", 5);
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1220))(this);
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1392))(this);
  if ( !this[2321] )
    this[2321] = 1;
  sub_1002B1F0((int)this);
  v25 = &qword_10690DE8;
  qword_10690DE8 = __rdtsc();
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1224))(this);
  v25 = (__int64 *)&v24;
  v24 = __rdtsc();
  qword_10690DE8 = v24 - qword_10690DE8;
  sub_10045E00(this);
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 1228))(this);
  sub_10026850(this);
  v12 = __rdtsc();
  qword_10690DC8 = v12 - qword_10690DC8;
  return v12;
}
