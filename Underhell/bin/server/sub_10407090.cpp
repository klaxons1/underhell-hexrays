unsigned int __thiscall sub_10407090(int this)
{
  int v2; // ecx
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  _BYTE *v7; // edi
  int *v8; // ecx
  unsigned int result; // eax
  int *v10; // ecx
  _DWORD *v11; // ecx
  float v12; // [esp+14h] [ebp-60h] BYREF
  float v13; // [esp+18h] [ebp-5Ch]
  float v14; // [esp+1Ch] [ebp-58h]
  float v15; // [esp+20h] [ebp-54h]
  float v16; // [esp+24h] [ebp-50h]
  float v17; // [esp+28h] [ebp-4Ch]
  float v18; // [esp+2Ch] [ebp-48h]
  float v19; // [esp+30h] [ebp-44h]
  float v20; // [esp+34h] [ebp-40h]
  float v21; // [esp+38h] [ebp-3Ch]
  float v22; // [esp+3Ch] [ebp-38h]
  float v23; // [esp+40h] [ebp-34h]
  int v24; // [esp+44h] [ebp-30h]
  int v25; // [esp+48h] [ebp-2Ch]
  float v26; // [esp+4Ch] [ebp-28h]
  float v27; // [esp+50h] [ebp-24h]
  float v28; // [esp+54h] [ebp-20h]
  int v29; // [esp+58h] [ebp-1Ch]
  __int16 v30; // [esp+5Ch] [ebp-18h]
  int v31; // [esp+60h] [ebp-14h]
  int v32; // [esp+64h] [ebp-10h]
  int v33; // [esp+68h] [ebp-Ch]
  char v34; // [esp+6Ch] [ebp-8h]

  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v2 = *(_DWORD *)(this + 252);
  v15 = 0.0;
  v16 = 0.0;
  v17 = 0.0;
  v18 = 0.0;
  v19 = 0.0;
  v24 = 0;
  v20 = 0.0;
  v25 = 0;
  v21 = 0.0;
  v29 = 0;
  v22 = 0.0;
  v30 = 0;
  v23 = 0.0;
  v31 = 0;
  v32 = 0;
  v26 = 1.0;
  v33 = 0;
  v34 = 0;
  v27 = 0.0;
  v28 = 0.0;
  if ( (v2 & 0x800) != 0 )
    sub_100DAE60(this);
  v12 = *(float *)(this + 580);
  v13 = *(float *)(this + 584);
  v14 = *(float *)(this + 588);
  sub_1028E890((int)"RPGShotDown", (int)&v12);
  v3 = *(_DWORD *)(this + 2108);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2108) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 2108) & 0xFFF) + 2] == v5 )
    {
      if ( *v4 )
      {
        v6 = off_1061BE18[4 * (*(_DWORD *)(this + 2108) & 0xFFF) + 2] == v5 ? *v4 : 0;
        v7 = (_BYTE *)(v6 + 868);
        if ( *(_BYTE *)(v6 + 868) != 1 )
        {
          if ( *(_BYTE *)(v6 + 84) )
          {
            *(_BYTE *)(v6 + 88) |= 1u;
          }
          else
          {
            v8 = *(int **)(v6 + 24);
            if ( v8 )
              sub_100194B0(v8, 868);
          }
          *v7 = 1;
        }
      }
    }
  }
  sub_100EC3F0((_DWORD *)this, (int)sub_10406F50, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  *(float *)(this + 2112) = *(float *)(dword_106B31C8 + 12) + 1.5;
  *(float *)(this + 2116) = *(float *)(dword_106B31C8 + 12) + 0.75;
  result = *(_DWORD *)(this + 2104);
  if ( result != -1 )
  {
    v10 = &off_1061BE18[4 * (*(_DWORD *)(this + 2104) & 0xFFF) + 1];
    result >>= 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 2104) & 0xFFF) + 2] == result )
    {
      if ( *v10 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 2104) & 0xFFF) + 2] == result )
          v11 = (_DWORD *)*v10;
        else
          v11 = 0;
        v11[353] = -1;
        result = (*(int (__thiscall **)(_DWORD *))(*v11 + 1064))(v11);
        *(_DWORD *)(this + 2104) = -1;
      }
    }
  }
  return result;
}
