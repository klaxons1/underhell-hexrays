void __thiscall sub_103719A0(int this, float *a2)
{
  float v3; // edx
  float v4; // eax
  double v5; // st7
  int v6; // edi
  float v7[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v8[3]; // [esp+28h] [ebp-18h] BYREF
  float v9; // [esp+34h] [ebp-Ch] BYREF
  float v10; // [esp+38h] [ebp-8h]
  float v11; // [esp+3Ch] [ebp-4h]

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4220) > -0.001 )
  {
    if ( *(_DWORD *)(this + 2324) != 4 )
    {
      (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v8, 0, 0);
      v3 = a2[2];
      v4 = a2[3];
      v9 = a2[1];
      v10 = v3;
      v11 = v4;
      off_10689714();
      v5 = v8[1] * v10 + v9 * v8[0] + v8[2] * v11;
      if ( v5 <= 0.707 )
      {
        if ( v5 >= -0.707 )
        {
          sub_100FDF10(v7, v8, &v9);
          v6 = dword_106E84A8;
          if ( v7[2] <= 0.0 )
            v6 = dword_106E84AC;
        }
        else
        {
          v6 = dword_106E84B0;
        }
      }
      else
      {
        v6 = dword_106E84B4;
      }
      if ( !sub_100C4E90((_DWORD *)this, v6) )
      {
        sub_100C7570((volatile signed __int32 *)this, v6, COERCE_FLOAT(1), 1);
        *(float *)(this + 4220) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                    dword_106B31E4,
                                    0.30000001,
                                    1.0)
                                + *(float *)(dword_106B31C8 + 12);
      }
    }
  }
  else
  {
    *(float *)(this + 4220) = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                                dword_106B31E4,
                                0.30000001,
                                1.0)
                            + *(float *)(dword_106B31C8 + 12);
  }
}
