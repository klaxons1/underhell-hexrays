void __thiscall sub_103EEEB0(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  double v4; // st7
  int v5; // eax
  double v6; // st7
  unsigned int v7; // eax
  float *v8; // ecx
  int *v9; // ecx
  int v10; // edi
  float *v11; // eax
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // eax
  int v15; // ecx
  float v16; // [esp+4h] [ebp-80h]
  int v17[4]; // [esp+14h] [ebp-70h] BYREF
  int v18[4]; // [esp+24h] [ebp-60h] BYREF
  int v19[4]; // [esp+34h] [ebp-50h] BYREF
  _BYTE v20[12]; // [esp+44h] [ebp-40h] BYREF
  float v21[3]; // [esp+50h] [ebp-34h] BYREF
  float v22[3]; // [esp+5Ch] [ebp-28h] BYREF
  float v23[3]; // [esp+68h] [ebp-1Ch] BYREF
  float v24[3]; // [esp+74h] [ebp-10h] BYREF
  float v25; // [esp+80h] [ebp-4h]

  v2 = *(_DWORD *)(this + 2076);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        if ( *(float *)(dword_106EEB6C + 44) + *(float *)(this + 1952) >= *(float *)(dword_106B31C8 + 12) )
        {
          v5 = sub_100BEF30(this, "cargo");
          sub_100BF1E0((_DWORD *)this, v5, (int)v24, (int)v21);
          if ( 0.0 == *(float *)(dword_106EEB6C + 44) )
            v6 = 1.0;
          else
            v6 = (*(float *)(dword_106B31C8 + 12) - *(float *)(this + 1952)) / *(float *)(dword_106EEB6C + 44);
          v16 = v6;
          sub_10422B90(v16, 0.75);
          v7 = *(_DWORD *)(this + 2076);
          v25 = v6;
          if ( v7 == -1 || off_1061BE18[4 * (v7 & 0xFFF) + 2] != v7 >> 12 )
            v8 = 0;
          else
            v8 = (float *)off_1061BE18[4 * (v7 & 0xFFF) + 1];
          v22[0] = (v24[0] - v8[179]) * v6 + v8[179];
          v22[1] = (v24[1] - v8[180]) * v6 + v8[180];
          v22[2] = v6 * (v24[2] - v8[181]) + v8[181];
          if ( v7 != -1 )
          {
            v9 = &off_1061BE18[4 * (v7 & 0xFFF) + 1];
            if ( off_1061BE18[4 * (v7 & 0xFFF) + 2] == v7 >> 12 )
            {
              v10 = *v9;
              if ( *v9 )
              {
                v11 = (float *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)(v10 + 1124) + 20))(v10 + 1124, v20);
                v23[0] = *v11;
                v23[1] = v11[1] + 90.0;
                v23[2] = v11[2];
                sub_10423260(v23, v19);
                sub_10423260(v10 + 728, v18);
                sub_104251E0((int)v18, (int)v19, v25, (int)v17);
                sub_104252C0(v17, v21);
                v12 = *(_DWORD *)(this + 2076);
                if ( v12 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 2] != v12 >> 12 )
                  v13 = 0;
                else
                  v13 = off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 1];
                sub_100E10C0(v13, v22);
                v14 = *(_DWORD *)(this + 2076);
                if ( v14 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 2] != v14 >> 12 )
                  v15 = 0;
                else
                  v15 = off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 1];
                sub_100E11A0(v15, v21);
                *(float *)(this + 1780) = *(float *)(dword_106B31C8 + 16) + *(float *)(this + 1780);
              }
            }
          }
        }
        else if ( *(_BYTE *)(this + 1950) )
        {
          v4 = *(float *)(dword_106B31C8 + 12);
          *(_BYTE *)(this + 1950) = 0;
          *(float *)(this + 1780) = v4;
        }
      }
    }
  }
}
