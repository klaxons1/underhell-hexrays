char __thiscall sub_101ECF40(int this)
{
  __int16 *v2; // eax
  __int16 *v3; // edi
  int v4; // edi
  int v5; // ecx
  double v6; // st7
  float v8; // [esp+0h] [ebp-20h]
  int v9; // [esp+14h] [ebp-Ch]
  int v10; // [esp+18h] [ebp-8h] BYREF
  bool v11; // [esp+1Fh] [ebp-1h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 2116) >= 0.1 )
  {
    v2 = (__int16 *)sub_100CF460((_DWORD *)this);
    v3 = v2;
    if ( v2 )
    {
      if ( !sub_100D0E00(v2)
        && (!*((_BYTE *)v3 + 1144) || *(_BYTE *)(this + 2137))
        && (!*(_BYTE *)(this + 3368) || *(_BYTE *)(this + 2137)) )
      {
        if ( *(_BYTE *)(this + 5216) )
          sub_102E0CB0(this);
        v4 = sub_101E7EA0((_DWORD *)this, 0);
        if ( !v4 )
          goto LABEL_18;
        v9 = sub_100F5E70((_DWORD *)this);
        v10 = 256;
        sub_101E9FA0((int *)(this + 2252), &v10);
        v11 = *(_BYTE *)(v4 + 1120) == 0;
        sub_100F8900((_BYTE *)(v4 + 1120), &v11);
        if ( *(_BYTE *)(v4 + 1120) )
        {
          sub_101E99A0((_DWORD *)this);
          sub_1023C380((int)"HL2Player.Ironsighton", 0.0, 0);
          sub_100F8040(this, this, (int)((double)v9 * *(float *)(dword_106BB5BC + 44)), flt_1063C554, 0);
          v11 = 1;
          sub_101E9FD0((_BYTE *)(this + 2137), &v11);
          v5 = dword_106E06EC;
          if ( *(float *)(dword_106E06EC + 44) >= (double)*(float *)(this + 4132) )
          {
LABEL_17:
            sub_101EA020((float *)(this + 2116), (float *)(dword_106B31C8 + 12));
LABEL_18:
            sub_102DF7C0(this);
            return 1;
          }
        }
        else
        {
          sub_1023C380((int)"HL2Player.Ironsightoff", 0.0, 0);
          v11 = 0;
          sub_101E9FD0((_BYTE *)(this + 2137), &v11);
          v8 = flt_1063C554;
          v6 = sub_10135AA0(this);
          sub_100F8040(this, this, (int)v6, v8, 0);
          v5 = dword_106E0734;
          if ( *(float *)(dword_106E0734 + 44) <= (double)*(float *)(this + 4132) || *(_BYTE *)(this + 5217) )
            goto LABEL_17;
        }
        sub_100EA7B0(this, *(float *)(v5 + 44));
        goto LABEL_17;
      }
    }
  }
  return 1;
}
