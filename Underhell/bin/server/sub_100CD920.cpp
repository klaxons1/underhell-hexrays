char __thiscall sub_100CD920(float *this, char a2)
{
  unsigned int *v3; // edi
  int v4; // ebx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  float *v8; // edi
  float *v9; // ebx
  float *v10; // eax
  double v11; // st7
  float *v12; // eax
  int v13; // edx
  int v14; // ebx
  int *v15; // ecx
  int v16; // edi
  int v17; // edi
  double v18; // st7
  int (__thiscall *v19)(float *, int, _DWORD, float *); // edx
  float v21[3]; // [esp+1Ch] [ebp-30h] BYREF
  _BYTE v22[12]; // [esp+28h] [ebp-24h] BYREF
  float v23; // [esp+34h] [ebp-18h] BYREF
  float v24; // [esp+38h] [ebp-14h]
  float v25; // [esp+3Ch] [ebp-10h]
  float v26; // [esp+40h] [ebp-Ch]
  int v27; // [esp+44h] [ebp-8h]
  unsigned int *v28; // [esp+48h] [ebp-4h]
  int savedregs; // [esp+4Ch] [ebp+0h] BYREF

  if ( ((_DWORD)this[64] & 0x2000) != 0 )
  {
    v3 = (unsigned int *)(this + 477);
    v4 = 48;
    do
    {
      v5 = *v3;
      if ( *v3 != -1 )
      {
        v5 >>= 12;
        if ( off_1061BE18[4 * (*v3 & 0xFFF) + 2] == v5 )
        {
          v6 = off_1061BE18[4 * (*v3 & 0xFFF) + 1];
          if ( v6 )
            LOBYTE(v5) = (*(int (__thiscall **)(float *, int, _DWORD, _DWORD))(*(_DWORD *)this + 960))(this, v6, 0, 0);
        }
      }
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    v7 = (*(int (__thiscall **)(float *, float *))(*(_DWORD *)this + 904))(this, &v23);
    sub_10422540(v7, v22);
    sub_104222B0(v22, v21, 0, 0);
    v8 = (float *)sub_10022D70();
    *v8 = this[85] - this[82];
    v8[1] = this[86] - this[83];
    v8[2] = this[87] - this[84];
    v9 = (float *)sub_10022D70();
    *v9 = this[85] - this[82];
    v9[1] = this[86] - this[83];
    v9[2] = this[87] - this[84];
    v10 = (float *)sub_10022D70();
    v11 = this[85];
    v27 = (int)v10;
    *v10 = v11 - this[82];
    v10[1] = this[86] - this[83];
    v10[2] = this[87] - this[84];
    v12 = (float *)sub_10022D70();
    v13 = v27;
    *v12 = this[85] - this[82];
    v12[1] = this[86] - this[83];
    v12[2] = this[87] - this[84];
    v26 = sqrt(*(float *)(v13 + 4) * v12[1] + *v9 * *v8);
    v14 = sub_100CF460(this);
    v28 = (unsigned int *)(this + 477);
    v27 = 48;
    do
    {
      v5 = *v28;
      if ( *v28 != -1 )
      {
        v15 = &off_1061BE18[4 * (*v28 & 0xFFF) + 1];
        v5 >>= 12;
        if ( off_1061BE18[4 * (*v28 & 0xFFF) + 2] == v5 )
        {
          v16 = *v15;
          if ( *v15 )
          {
            if ( v16 != v14 )
            {
              LOBYTE(v5) = sub_100CD770(
                             (unsigned int *)this,
                             (int)&savedregs,
                             v16,
                             (int)this,
                             (_BYTE *)v16,
                             v21,
                             (int)v22,
                             v26);
              if ( a2 )
              {
                LOBYTE(v5) = sub_101129A0(*(_WORD *)(v16 + 356) & 0xFFF7);
                v17 = *(_DWORD *)(v16 + 424);
                if ( v17 )
                  LOBYTE(v5) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v17 + 72))(v17, 128);
              }
            }
          }
        }
      }
      ++v28;
      --v27;
    }
    while ( v27 );
    if ( v14 )
    {
      sub_100CB300((int)this, (int)&savedregs, v14, v21, &v23);
      v18 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              800.0,
              1000.0);
      v19 = *(int (__thiscall **)(float *, int, _DWORD, float *))(*(_DWORD *)this + 960);
      v23 = v23 * v18;
      v24 = v24 * v18;
      v25 = v18 * v25;
      LOBYTE(v5) = v19(this, v14, 0, &v23);
      *(_BYTE *)(v14 + 1172) = 0;
      if ( a2 )
        LOBYTE(v5) = sub_101129A0(*(_WORD *)(v14 + 356) & 0xFFF7);
    }
  }
  return v5;
}
