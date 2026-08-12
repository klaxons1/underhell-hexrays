int __thiscall sub_102F2CC0(float *this, int a2, int a3, int a4, float *a5, float *a6)
{
  double v8; // rt0
  double v10; // st6
  double v11; // st7
  double v12; // rtt
  _BYTE v13[12]; // [esp+4h] [ebp-24h] BYREF
  _BYTE v14[8]; // [esp+10h] [ebp-18h] BYREF
  float v15; // [esp+18h] [ebp-10h]
  _BYTE v16[8]; // [esp+1Ch] [ebp-Ch] BYREF
  float v17; // [esp+24h] [ebp-4h]

  if ( sub_102F2A00(this) )
  {
    Warning("Advisor using old-style object movement!\n");
    v11 = *(float *)(dword_106B6F0C + 44) * this[8];
    v10 = 0.0;
  }
  else
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 68))(a3);
    (*(void (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)a3 + 204))(a3, v14, v13);
    (*(void (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)a3 + 188))(a3, v16, 0);
    if ( v15 <= 0.0 )
    {
      if ( this[4] > (double)v17 )
      {
        v12 = (this[8] + 1.0) * (this[8] + 1.0) * *(float *)(dword_106B6F0C + 44);
        *a5 = 0.0;
        a5[1] = 0.0;
        a5[2] = v12;
        *a6 = 0.0;
        a6[1] = 5.0;
        a6[2] = 0.0;
        return 3;
      }
      v10 = 0.0;
      v11 = (1.0 - this[8]) * *(float *)(dword_106B6F0C + 44);
    }
    else
    {
      if ( this[7] < (double)v17 )
      {
        v8 = (1.0 - this[8]) * (1.0 - this[8]) * *(float *)(dword_106B6F0C + 44);
        *a5 = 0.0;
        a5[1] = 0.0;
        a5[2] = v8;
        *a6 = 0.0;
        a6[1] = -5.0;
        a6[2] = 0.0;
        return 3;
      }
      v10 = 0.0;
      v11 = (this[8] + 1.0) * *(float *)(dword_106B6F0C + 44);
    }
  }
  *a5 = v10;
  a5[1] = v10;
  a5[2] = v11;
  *a6 = v10;
  a6[1] = v10;
  a6[2] = 10.0;
  return 3;
}
