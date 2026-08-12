void __thiscall sub_1002B6F0(int this)
{
  unsigned int v2; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // eax
  char v6; // al
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  char v17; // cl
  _DWORD *v18; // eax
  _BYTE v19[44]; // [esp+10h] [ebp-84h] BYREF
  float v20; // [esp+3Ch] [ebp-58h]
  char v21; // [esp+47h] [ebp-4Dh]
  int v22; // [esp+5Ch] [ebp-38h]
  float v23[3]; // [esp+64h] [ebp-30h] BYREF
  float v24[3]; // [esp+70h] [ebp-24h] BYREF
  _DWORD v25[3]; // [esp+7Ch] [ebp-18h] BYREF
  float v26[2]; // [esp+88h] [ebp-Ch] BYREF
  float v27; // [esp+90h] [ebp-4h]

  if ( !(unsigned __int8)sub_100697A0(55, 1) )
  {
    v2 = *(_DWORD *)(this + 2688);
    if ( v2 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 2] != v2 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 2688) & 0xFFF) + 1]
      || *(_DWORD *)(this + 2684) != 1 )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
      v3 = sub_1007DB30(62);
      if ( v3 == -1
        || (v4 = v3 - 1000000000, v4 == -1)
        || ((1 << (v4 & 0x1F)) & *(_DWORD *)(this + 4 * (v4 >> 5) + 2192)) == 0 )
      {
        v5 = *(_DWORD *)(this + 308);
        if ( (v5 == -1
           || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v5 >> 12
           || !off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1])
          && (*(_DWORD *)(this + 2324) != 4 || (*(_DWORD *)(this + 256) & 0x400) == 0)
          && !*(_DWORD *)(*(_DWORD *)(this + 2588) + 12) )
        {
          v6 = *(_BYTE *)(this + 306);
          if ( v6 != 6 )
          {
            if ( v6 )
            {
              if ( sub_1001ED60((float *)(this + 2616)) )
              {
                *(float *)(this + 2616) = *(float *)(dword_106B31C8 + 12) + 0.5;
                v7 = (float *)sub_1001F490((_DWORD *)this);
                v26[0] = *v7;
                v26[1] = v7[1];
                v27 = v7[2];
                v8 = (float *)sub_1001F470((_DWORD *)this);
                v24[0] = *v8;
                v24[1] = v8[1];
                v24[2] = v8[2];
                if ( sub_1001F080(v24, v26) )
                {
                  v27 = v27 - 0.2;
                  v9 = (float *)sub_10019640((_DWORD *)this);
                  v23[0] = *v9;
                  v23[1] = v9[1];
                  v23[2] = v9[2] + 0.1;
                  v10 = (float *)sub_10019640((_DWORD *)this);
                  *(float *)v25 = *v10;
                  *(float *)&v25[1] = v10[1];
                  *(float *)&v25[2] = v10[2] - 4.0;
                  sub_10079F00(v23, v25, v24, v26, 33701899, v19);
                  if ( 1.0 == v20 )
                  {
                    sub_10023CB0((char *)this, 62);
                    sub_101C73D0(0);
                  }
                  else
                  {
                    if ( v21 )
                    {
                      if ( *(_BYTE *)(v22 + 306) == 6 )
                      {
                        v11 = *(_DWORD *)(v22 + 424);
                        if ( v11 )
                        {
                          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v11 + 116))(v11) < 500.0 )
                          {
                            v12 = v22;
                            *(float *)(this + 2616) = *(float *)(dword_106B31C8 + 12) + 0.1;
                            sub_101CABB0(this, v12, 1, 0.25);
                            v13 = *(_DWORD *)(this + 424);
                            if ( v13 )
                              (*(void (__thiscall **)(int))(*(_DWORD *)v13 + 108))(v13);
                          }
                        }
                      }
                    }
                    if ( v22 )
                    {
                      v14 = sub_101C5260(this);
                      if ( v22 != v14 )
                        sub_101C73D0(v22);
                    }
                  }
                }
              }
            }
          }
        }
        return;
      }
      v15 = *(_DWORD *)(this + 308);
      if ( (v15 == -1
         || off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 2] != v15 >> 12
         || !off_1061BE18[4 * (*(_DWORD *)(this + 308) & 0xFFF) + 1])
        && (*(_BYTE *)(this + 256) & 1) == 0
        && !*(_DWORD *)(*(_DWORD *)(this + 2588) + 12) )
      {
        return;
      }
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 2160))(this);
  v16 = sub_1007DB30(62);
  if ( v16 != -1 && v16 != 999999999 )
  {
    v17 = v16 & 0x1F;
    v18 = (_DWORD *)(this + 4 * ((v16 - 1000000000) >> 5) + 2192);
    *v18 &= ~(1 << v17);
  }
}
