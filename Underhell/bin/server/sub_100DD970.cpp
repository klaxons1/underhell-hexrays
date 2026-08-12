void __thiscall sub_100DD970(float *this)
{
  int v2; // ebx
  int v3; // edi
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // st7
  float v9; // [esp+4h] [ebp-2Ch]
  float v10[3]; // [esp+18h] [ebp-18h] BYREF
  float v11; // [esp+24h] [ebp-Ch]
  float v12; // [esp+28h] [ebp-8h]
  float v13; // [esp+2Ch] [ebp-4h]

  v9 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(v9, 0);
  v2 = 1;
  if ( *(int *)(dword_106B31C8 + 20) < 1 )
  {
LABEL_9:
    if ( *((_DWORD *)this + 55) )
    {
      (*(void (__thiscall **)(float *, _DWORD *))(*(_DWORD *)this + 464))(this, (_DWORD *)this + 55);
      this[55] = 0.0;
    }
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
  }
  else
  {
    while ( 1 )
    {
      v3 = sub_1025FB50(v2);
      if ( v3 )
      {
        if ( ((_DWORD)this[63] & 0x800) != 0 )
          sub_100DAE60((int)this);
        v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
        v5 = this[145] - *v4;
        v11 = v5;
        v6 = this[146] - v4[1];
        v12 = v6;
        v7 = this[147] - v4[2];
        v13 = v7;
        v8 = v7 * v7 + v6 * v6 + v5 * v5;
        if ( v8 < 65536.0 )
          break;
        if ( v8 < 2250000.0 )
        {
          off_10689714();
          sub_100F5A30(v10, 0, 0);
          if ( v10[0] * v11 + v10[1] * v12 + v13 * v10[2] > 0.0 )
            break;
        }
      }
      if ( ++v2 > *(_DWORD *)(dword_106B31C8 + 20) )
        goto LABEL_9;
    }
  }
}
