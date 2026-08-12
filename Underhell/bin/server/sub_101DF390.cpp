int __thiscall sub_101DF390(int this)
{
  float *v2; // edi
  float v3; // ebx
  int v4; // ecx
  unsigned int v5; // eax
  char v6; // al
  float v7; // ecx
  float v8; // edx
  int v9; // ecx
  double v10; // st7
  int v11; // eax
  double v12; // st6
  double v13; // st7
  float *v14; // eax
  float v16; // [esp+0h] [ebp-4B4h]
  _DWORD v17[256]; // [esp+14h] [ebp-4A0h] BYREF
  _BYTE v18[44]; // [esp+414h] [ebp-A0h] BYREF
  float v19; // [esp+440h] [ebp-74h]
  int v20; // [esp+460h] [ebp-54h]
  int v21; // [esp+468h] [ebp-4Ch] BYREF
  _BYTE v22[12]; // [esp+470h] [ebp-44h] BYREF
  float v23[3]; // [esp+47Ch] [ebp-38h] BYREF
  int v24; // [esp+488h] [ebp-2Ch]
  float v25; // [esp+48Ch] [ebp-28h]
  float v26; // [esp+490h] [ebp-24h]
  float v27; // [esp+494h] [ebp-20h]
  float v28; // [esp+498h] [ebp-1Ch]
  float v29; // [esp+49Ch] [ebp-18h]
  float v30; // [esp+4A0h] [ebp-14h]
  float v31; // [esp+4A4h] [ebp-10h] BYREF
  float v32; // [esp+4A8h] [ebp-Ch]
  float v33; // [esp+4ACh] [ebp-8h]
  float v34; // [esp+4B0h] [ebp-4h]
  int savedregs; // [esp+4B4h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  v34 = *(float *)(this + 808);
  sub_1025F990(v17, 256, 0);
  v2 = (float *)(this + 580);
  v3 = 0.0;
  v24 = sub_1025FA20(this + 580, v34, (int)&v21);
  v34 = 0.0;
  if ( v24 > 0 )
  {
    do
    {
      v4 = v17[LODWORD(v3)];
      if ( *(_BYTE *)(v4 + 361) && (*(_BYTE *)(v4 + 356) & 4) == 0 )
      {
        v5 = *(_DWORD *)(v4 + 308);
        if ( v5 == -1 )
          goto LABEL_10;
        if ( off_1061BE18[4 * (*(_DWORD *)(v4 + 308) & 0xFFF) + 2] != v5 >> 12
          || !off_1061BE18[4 * (*(_DWORD *)(v4 + 308) & 0xFFF) + 1] )
        {
          v3 = v34;
LABEL_10:
          v6 = *(_BYTE *)(v4 + 306);
          if ( (v6 == 6 || v6 == 2 || v6 == 3)
            && (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) || (*(_DWORD *)(this + 248) & 8) != 0)
            && (*(_BYTE *)(v17[LODWORD(v3)] + 306) != 6 || (*(_DWORD *)(this + 248) & 0x10) != 0) )
          {
            if ( (*(_BYTE *)(this + 248) & 1) == 0 )
              goto LABEL_26;
            if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
              sub_100DAE60(this);
            v7 = *v2;
            v8 = *(float *)(this + 584);
            v33 = *(float *)(this + 588);
            v31 = v7;
            v9 = v17[LODWORD(v3)];
            v32 = v8;
            (*(void (__thiscall **)(int, float *, float *, _DWORD))(*(_DWORD *)v9 + 520))(v9, v23, &v31, 0);
            if ( 0.0 != *(float *)(this + 812) )
            {
              v28 = v23[0] - v31;
              v29 = v23[1] - v32;
              v30 = v23[2] - v33;
              off_10689714();
              v10 = *(float *)(this + 812);
              v11 = *(_DWORD *)(this + 252) >> 11;
              v25 = v28 * v10;
              v26 = v29 * v10;
              v27 = v10 * v30;
              if ( (v11 & 1) != 0 )
                sub_100DAE60(this);
              v12 = *(float *)(this + 584) + v26;
              v13 = *(float *)(this + 588) + v27;
              v31 = *v2 + v25;
              v32 = v12;
              v33 = v13;
            }
            v14 = (float *)(*(int (__thiscall **)(_DWORD, _BYTE *, float *, _DWORD))(*(_DWORD *)v17[LODWORD(v3)] + 520))(
                             v17[LODWORD(v3)],
                             v22,
                             &v31,
                             0);
            sub_1002A5F0((int)&savedregs, this, &v31, v14, 16395, this, 0, (int)v18);
            if ( v19 >= 1.0 || v20 == v17[LODWORD(v3)] )
LABEL_26:
              sub_101DF0F0((void *)this, v17[LODWORD(v3)]);
          }
          goto LABEL_28;
        }
        v3 = v34;
      }
LABEL_28:
      ++LODWORD(v3);
      v34 = v3;
    }
    while ( SLODWORD(v3) < v24 );
  }
  v16 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  return sub_100EC4A0((int *)this, v16, 0);
}
