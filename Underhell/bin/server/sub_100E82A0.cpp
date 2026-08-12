int __thiscall sub_100E82A0(float *this, int a2)
{
  int v3; // eax
  int v5; // eax
  float v6; // edx
  unsigned int v7; // ecx
  float *v8; // eax
  float v9; // ecx
  float v10; // edx
  float v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  float v14; // edi
  int v15; // eax
  unsigned int v16; // ecx
  float v18; // [esp+8h] [ebp-1Ch] BYREF
  float v19; // [esp+Ch] [ebp-18h]
  float v20; // [esp+10h] [ebp-14h]
  float v21; // [esp+14h] [ebp-10h]
  float v22; // [esp+18h] [ebp-Ch]
  float v23; // [esp+1Ch] [ebp-8h]
  _BYTE v24[4]; // [esp+20h] [ebp-4h] BYREF
  int v25; // [esp+2Ch] [ebp+8h]

  sub_10110FB0(this + 80);
  v3 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 44))(this);
  v25 = (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)a2 + 8))(a2, this, v3);
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 148))(a2);
  v6 = *(float *)(v5 + 1364);
  v21 = *(float *)(v5 + 1360);
  v23 = *(float *)(v5 + 1368);
  v7 = *((_DWORD *)this + 75);
  v22 = v6;
  if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 || !off_1061BE18[4 * (v7 & 0xFFF) + 1] )
  {
    if ( *(_DWORD *)(v5 + 1284) )
      v8 = (float *)(v5 + 1308);
    else
      v8 = &flt_106F1CA8;
    v9 = *v8;
    v10 = v8[1];
    v11 = v8[2];
    v18 = v9;
    v19 = v10;
    v20 = v11;
    v21 = v9 + v21;
    v22 = v10 + v22;
    v23 = v11 + v23;
  }
  sub_10421D00(this + 145, 3, this + 125);
  v18 = this[179] + v21;
  v19 = this[180] + v22;
  v20 = this[181] + v23;
  sub_100DB570(this + 179, &v18);
  *((_DWORD *)this + 63) &= ~0x8000u;
  sub_101126F0(this + 80);
  if ( *((_DWORD *)this + 6)
    && (*(int (__thiscall **)(float *))(*(_DWORD *)this + 24))(this)
    && *(_DWORD *)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 28))(this, v24)
    && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 144))(a2) )
  {
    v12 = *(const char **)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 28))(this, v24);
    if ( !v12 )
      v12 = String;
    sub_100E8220(a2, v12);
    v13 = *(const char **)(*(int (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 28))(this, v24);
    if ( !v13 )
      v13 = String;
    v14 = *this;
    v15 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31F0 + 8))(dword_106B31F0, v13);
    (*(void (__thiscall **)(float *, int))(LODWORD(v14) + 32))(this, v15);
  }
  v16 = *((_DWORD *)this + 113);
  if ( v16 != -1
    && off_1061BE18[4 * ((_DWORD)this[113] & 0xFFF) + 2] == v16 >> 12
    && off_1061BE18[4 * ((_DWORD)this[113] & 0xFFF) + 1] )
  {
    sub_101C4DF0(this);
  }
  if ( ((_DWORD)this[48] & 8) != 0 )
    sub_100EAB80(this, 8);
  return v25;
}
