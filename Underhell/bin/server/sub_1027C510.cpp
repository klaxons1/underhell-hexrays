void __thiscall sub_1027C510(int this)
{
  _BYTE *v2; // edi
  int v3; // eax
  float v4; // [esp+4h] [ebp-4h] BYREF
  int savedregs; // [esp+8h] [ebp+0h] BYREF

  sub_100D3C30((int *)this);
  if ( !*(_BYTE *)(this + 1144) )
  {
    v2 = (_BYTE *)sub_100D1940((_DWORD *)this);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 320))(v2) )
      {
        if ( *(_BYTE *)(this + 1408) && *(_DWORD *)(this + 1160) != 172 )
        {
          sub_1027C2C0(this, (int)&savedregs);
          *(_BYTE *)(this + 1408) = 0;
        }
        v3 = *(_DWORD *)(this + 1168);
        if ( v3 == 205 || v3 == 202 || v3 == 183 )
          sub_1027C300(this, 1);
        else
          sub_1027C300(this, 0);
        if ( (v2[3292] & 1) != 0 )
        {
          if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1132) && *(int *)(this + 1200) <= 0 )
            sub_1027AEC0((void *)this);
        }
        else
        {
          *(_BYTE *)(this + 1388) = 1;
          if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1392) )
          {
            v4 = *(float *)(dword_106B31C8 + 12) - 0.1;
            sub_100D2D00((float *)(this + 1132), &v4);
          }
        }
      }
    }
  }
}
