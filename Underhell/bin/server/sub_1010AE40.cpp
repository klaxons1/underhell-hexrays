void __thiscall sub_1010AE40(int this, int a2, int a3, int a4, int a5)
{
  int v6; // eax
  int v7; // ecx
  int v8; // [esp-14h] [ebp-40h] BYREF
  int v9; // [esp-10h] [ebp-3Ch]
  int v10; // [esp-Ch] [ebp-38h]
  int v11; // [esp-8h] [ebp-34h]
  int v12; // [esp-4h] [ebp-30h]
  float v13; // [esp+0h] [ebp-2Ch]
  int v14; // [esp+4h] [ebp-28h]
  int v15; // [esp+8h] [ebp-24h]
  int v16; // [esp+Ch] [ebp-20h]
  float v17[4]; // [esp+18h] [ebp-14h] BYREF
  int v18; // [esp+28h] [ebp-4h]
  float v19; // [esp+34h] [ebp+8h]
  char v20; // [esp+34h] [ebp+8h]

  if ( *(_BYTE *)(this + 1120) != 1 )
  {
    if ( *(_BYTE *)(this + 976) )
    {
      if ( sub_10108010((float *)this, a2) )
      {
        if ( (*(_DWORD *)(this + 248) & 0x2000) != 0 )
        {
          v19 = 2.0 / *(float *)(this + 804);
          sub_1010C7F0(this, (int)"_DisableUpdateTarget", 0.0, this, this, 0);
          v16 = 0;
          v17[0] = v19;
          v15 = this;
          v14 = this;
          v13 = 0.0099999998;
          v17[3] = NAN;
          v18 = 1;
          sub_10023360(&v8, (int)v17);
          sub_1010C6E0(this, (int)"SetPosition", v8, v9, v10, v11, v12, v13, v14, v15, v16);
          v16 = 0;
          v17[0] = 0.0;
          v15 = this;
          v14 = this;
          v13 = 0.1;
          v18 = 1;
          sub_10023360(&v8, (int)v17);
          sub_1010C6E0(this, (int)"SetPosition", v8, v9, v10, v11, v12, v13, v14, v15, v16);
          v16 = 0;
          v15 = this;
          v14 = this;
          v17[0] = v19 * 0.5;
          v13 = 0.2;
          v18 = 1;
          sub_10023360(&v8, (int)v17);
          sub_1010C6E0(this, (int)"SetPosition", v8, v9, v10, v11, v12, v13, v14, v15, v16);
          v16 = 0;
          v17[0] = 0.0;
          v15 = this;
          v14 = this;
          v13 = 0.30000001;
          v18 = 1;
          sub_10023360(&v8, (int)v17);
          sub_1010C6E0(this, (int)"SetPosition", v8, v9, v10, v11, v12, v13, v14, v15, v16);
          sub_1010C7F0(this, (int)"_EnableUpdateTarget", 0.5, this, this, 0);
        }
      }
    }
    else
    {
      v20 = 0;
      if ( !*(_DWORD *)(this + 1244) )
      {
        *(_DWORD *)(this + 1284) = -*(_DWORD *)(this + 1284);
        v20 = 1;
        if ( *(_DWORD *)(this + 880) == -1
          || off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] != *(_DWORD *)(this + 880) >> 12 )
        {
          v6 = 0;
        }
        else
        {
          v6 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
        }
        sub_1010DD80(v6, this, 0.0);
      }
      v16 = this + 728;
      *(_DWORD *)(this + 1244) = 1;
      *(float *)&v15 = sub_10108630(this, v16);
      sub_1010A420(this, *(float *)&v15, v20);
      if ( !*(_DWORD *)(this + 8) )
      {
        sub_100EC3F0((_DWORD *)this, (int)sub_10108BA0, 0.0, 0);
        v16 = 0;
        v15 = v7;
        sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      }
    }
  }
}
