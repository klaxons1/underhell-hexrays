void __thiscall sub_1023F0D0(int this, float a2)
{
  bool v3; // zf
  int v4; // ecx
  const char *v5; // eax
  double v6; // st6
  int v7; // eax
  int v8; // eax
  const char *v9; // eax
  int v10; // eax
  char *v11; // [esp-8h] [ebp-60h]
  float v12; // [esp+0h] [ebp-58h]
  int v13; // [esp+14h] [ebp-44h] BYREF
  const char *v14; // [esp+18h] [ebp-40h]
  float v15; // [esp+1Ch] [ebp-3Ch]
  int v16; // [esp+20h] [ebp-38h]
  int v17; // [esp+24h] [ebp-34h]
  int v18; // [esp+28h] [ebp-30h]
  int v19; // [esp+2Ch] [ebp-2Ch]
  float v20; // [esp+30h] [ebp-28h]
  int v21; // [esp+34h] [ebp-24h]
  char v22; // [esp+38h] [ebp-20h]
  __int16 v23; // [esp+39h] [ebp-1Fh]
  int v24; // [esp+3Ch] [ebp-1Ch]
  int v25[5]; // [esp+40h] [ebp-18h] BYREF
  __int16 v26; // [esp+54h] [ebp-4h]

  v3 = (*(_BYTE *)(this + 80) & 1) == 0;
  *(_DWORD *)(this + 60) = 0;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(this + 56);
    v20 = 0.0;
    v26 = -1;
    v5 = *(const char **)(this + 44);
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v24 = -1;
    memset(v25, 0, sizeof(v25));
    v13 = v4;
    v14 = v5;
    if ( !v5 )
      v14 = String;
    v6 = *(float *)(this + 72) * *(float *)(this + 16);
    v7 = *(_DWORD *)(this + 64) | 1;
    v16 = *(_DWORD *)(this + 32);
    v15 = v6;
    v17 = v7;
    v18 = (int)*(float *)this;
    v22 = 0;
    if ( a2 != 0.0 )
      v20 = a2;
    v8 = sub_1023DDA0((_DWORD *)this);
    sub_1023BE40((_BYTE *)(this + 76), v8, (int)&v13);
    v9 = *(const char **)(this + 48);
    if ( !v9 )
      v9 = String;
    v12 = *(float *)(this + 104);
    v11 = (char *)v9;
    v10 = sub_1023DDA0((_DWORD *)this);
    sub_1023B8D0((_BYTE *)(this + 76), v10, v11, (int)v25, v12, 1);
    sub_102375F0(v25);
  }
  *(_DWORD *)(this + 68) = 1;
}
