int __thiscall sub_102B2E00(float *this)
{
  float *v3; // edi
  int v4; // eax
  float v5; // [esp+4h] [ebp-10h]
  float v6; // [esp+8h] [ebp-Ch]
  float v7; // [esp+Ch] [ebp-8h]
  float v8; // [esp+10h] [ebp-4h]

  if ( !*((_DWORD *)this + 954) )
    return (*(int (__thiscall **)(float *))(*(_DWORD *)this + 2300))(this);
  v3 = (float *)sub_1012BF20(&dword_1069E3E0, 0, "!player", 0, 0, 0, 0);
  if ( !v3 )
    return Msg("Chopper didn't find a player!\n");
  if ( ((_DWORD)this[63] & 0x800) != 0 )
    sub_100DAE60((int)this);
  if ( ((_DWORD)v3[63] & 0x800) != 0 )
    sub_100DAE60((int)v3);
  v5 = v3[145] - this[145];
  v6 = v3[146] - this[146];
  v7 = v3[147] - this[147];
  off_10689714();
  if ( ((_DWORD)v3[63] & 0x1000) != 0 )
    sub_100DAFD0((int)v3);
  v8 = v3[120] * v6 + v3[119] * v5 + v3[121] * v7;
  if ( ((_DWORD)this[63] & 0x1000) != 0 )
    sub_100DAFD0((int)this);
  v4 = (int)((1.0 - v8 * 0.000076634227)
           / (0.000076634227 * -(this[120] * v6 + this[119] * v5 + this[121] * v7) + 1.0)
           * 100.0);
  if ( v4 > 250 )
    return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 2304))(this, 250);
  if ( v4 < 50 )
    v4 = 50;
  return (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 2304))(this, v4);
}
