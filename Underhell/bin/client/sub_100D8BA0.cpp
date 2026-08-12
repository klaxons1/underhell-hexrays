char __thiscall sub_100D8BA0(int this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  float *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx
  int v9; // edx
  float *v10; // eax
  _DWORD *v11; // eax
  char result; // al
  _DWORD *v13; // [esp+Ch] [ebp-4h]
  _DWORD *v14; // [esp+Ch] [ebp-4h]

  v2 = (_DWORD *)sub_100DDA40(7564);
  if ( v2 )
  {
    *v2 = 90;
    v3 = v2 + 1;
    v13 = v2 + 1;
    v4 = 89;
    v5 = (float *)(v2 + 19);
    do
    {
      *v3 = &CUserCmd::`vftable';
      *(v5 - 2) = 0.0;
      *(v5 - 1) = 0.0;
      *v5 = 0.0;
      v5[2] = 0.0;
      *(v5 - 17) = 0.0;
      *(v5 - 16) = 0.0;
      *(v5 - 15) = 0.0;
      *(v5 - 14) = 0.0;
      *(v5 - 13) = 0.0;
      *(v5 - 9) = 0.0;
      *(v5 - 12) = 0.0;
      *((_BYTE *)v5 - 32) = 0;
      *(v5 - 11) = 0.0;
      *(v5 - 7) = 0.0;
      *(v5 - 10) = 0.0;
      *(v5 - 6) = 0.0;
      *(v5 - 5) = 0.0;
      *((_WORD *)v5 - 8) = 0;
      *((_WORD *)v5 - 7) = 0;
      *((_BYTE *)v5 - 12) = 0;
      v5[1] = 0.0;
      v3 += 21;
      v5 += 21;
      --v4;
    }
    while ( v4 >= 0 );
    v6 = v13;
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)(this + 240) = v6;
  v7 = (_DWORD *)sub_100DDA40(7924);
  if ( v7 )
  {
    *v7 = 90;
    v8 = v7 + 1;
    v14 = v7 + 1;
    v9 = 89;
    v10 = (float *)(v7 + 19);
    do
    {
      *v8 = &CUserCmd::`vftable';
      *(v10 - 2) = 0.0;
      *(v10 - 1) = 0.0;
      *v10 = 0.0;
      v10[2] = 0.0;
      *(v10 - 17) = 0.0;
      *(v10 - 16) = 0.0;
      *(v10 - 15) = 0.0;
      *(v10 - 14) = 0.0;
      *(v10 - 13) = 0.0;
      *(v10 - 9) = 0.0;
      *(v10 - 12) = 0.0;
      *((_BYTE *)v10 - 32) = 0;
      *(v10 - 11) = 0.0;
      *(v10 - 7) = 0.0;
      *(v10 - 10) = 0.0;
      *(v10 - 6) = 0.0;
      *(v10 - 5) = 0.0;
      *((_WORD *)v10 - 8) = 0;
      *((_WORD *)v10 - 7) = 0;
      *((_BYTE *)v10 - 12) = 0;
      v10[1] = 0.0;
      v8 += 22;
      v10 += 22;
      --v9;
    }
    while ( v9 >= 0 );
    v11 = v14;
  }
  else
  {
    v11 = 0;
  }
  *(_DWORD *)(this + 244) = v11;
  *(_BYTE *)(this + 76) = 0;
  *(_WORD *)(this + 48) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  *(_DWORD *)(this + 88) = 0;
  *(_WORD *)(this + 104) = 0;
  *(_BYTE *)(this + 106) = 0;
  *(float *)(this + 236) = 0.0;
  *(_DWORD *)(this + 92) = 0;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 1;
  *(_BYTE *)(this + 107) = 0;
  *(_BYTE *)(this + 50) = 0;
  sub_100D9590(this);
  sub_100D5CD0((_DWORD *)this);
  result = sub_100D39F0((_BYTE *)this);
  *(float *)(this + 28) = 0.0;
  *(float *)(this + 32) = 0.0;
  *(float *)(this + 40) = 0.0;
  *(float *)(this + 44) = 0.0;
  *(float *)(this + 16) = 0.0;
  *(float *)(this + 20) = 0.0;
  *(float *)(this + 24) = 0.0;
  *(float *)(this + 4) = flt_1045924C;
  *(float *)(this + 8) = flt_10459250;
  *(float *)(this + 12) = flt_10459254;
  return result;
}
