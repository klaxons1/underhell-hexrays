char __thiscall sub_10258950(void *this, int *a2, float a3)
{
  __int64 v3; // rdi
  float *v4; // eax
  bool v5; // zf
  char v6; // al
  _DWORD *v7; // ecx
  int *v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *v13; // eax
  float v15; // [esp+8h] [ebp-84h]
  int v16[20]; // [esp+18h] [ebp-74h] BYREF
  int v17[3]; // [esp+68h] [ebp-24h] BYREF
  int v18; // [esp+74h] [ebp-18h] BYREF
  int v19; // [esp+78h] [ebp-14h]
  int v20; // [esp+7Ch] [ebp-10h]
  float v21; // [esp+80h] [ebp-Ch] BYREF
  float v22; // [esp+84h] [ebp-8h]
  float v23; // [esp+88h] [ebp-4h]

  v3 = __PAIR64__((unsigned int)this, (unsigned int)a2);
  if ( !*((_BYTE *)a2 + 225)
    || !(*(unsigned __int8 (__thiscall **)(void *, int *))(*(_DWORD *)this + 752))(this, a2)
    || (*(_DWORD *)(HIDWORD(v3) + 1116) & 0x10000) != 0
    && (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 320))(a2)
    && *((_BYTE *)a2 + 3370) )
  {
    return 0;
  }
  if ( a3 >= 0.0 )
  {
    v4 = sub_100EA2C0(HIDWORD(v3) + 320);
    v21 = *v4;
    v22 = v4[1];
    v23 = v4[2];
    sub_10111A60((_BYTE *)a2 + 320, &v21, (float *)&v18);
    sub_10248110((int)v16, SHIDWORD(v3), SHIDWORD(v3), a3, *(_DWORD *)(HIDWORD(v3) + 1116), 0);
    v5 = *(_BYTE *)(HIDWORD(v3) + 1124) == 0;
    v16[4] = v18;
    v16[5] = v19;
    v16[6] = v20;
    if ( v5 )
    {
      *(float *)v17 = *(float *)&v18 - v21;
      *(float *)&v17[1] = *(float *)&v19 - v22;
      *(float *)&v17[2] = *(float *)&v20 - v23;
      sub_10248740((int)v16, (float *)v17, (float *)&v18, 1.0);
    }
    else
    {
      *(float *)&v16[1] = flt_106F1CA8;
      *(float *)&v16[2] = flt_106F1CAC;
      *(float *)&v16[3] = flt_106F1CB0;
    }
    sub_100D9E70(a2, SHIDWORD(v3), v16);
  }
  else
  {
    v15 = -a3;
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*a2 + 260))(a2, LODWORD(v15), *(_DWORD *)(HIDWORD(v3) + 1116));
  }
  v6 = (*(int (__thiscall **)(int *))(*a2 + 320))(a2);
  v7 = (_DWORD *)(HIDWORD(v3) + 1152);
  if ( !v6 )
    v7 = (_DWORD *)(HIDWORD(v3) + 1128);
  sub_1010DD80(v7, v3, 0.0);
  v8 = (int *)(*(int (__thiscall **)(int *))(*a2 + 8))(a2);
  LODWORD(v3) = *(_DWORD *)(HIDWORD(v3) + 1188);
  v9 = *v8;
  v10 = *(_DWORD *)(HIDWORD(v3) + 1180);
  if ( (int)v3 + 1 > v10 )
    sub_102ABFC0(v3 - v10 + 1);
  ++*(_DWORD *)(HIDWORD(v3) + 1188);
  v11 = *(_DWORD *)(HIDWORD(v3) + 1176);
  v12 = *(_DWORD *)(HIDWORD(v3) + 1188) - v3 - 1;
  *(_DWORD *)(HIDWORD(v3) + 1192) = v11;
  if ( v12 > 0 )
    memcpy((void *)(v11 + 4 * v3 + 4), (const void *)(v11 + 4 * v3), 4 * v12);
  v13 = (_DWORD *)(*(_DWORD *)(HIDWORD(v3) + 1176) + 4 * v3);
  if ( v13 )
    *v13 = v9;
  return 1;
}
