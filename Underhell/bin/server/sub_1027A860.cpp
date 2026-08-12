void __thiscall sub_1027A860(int this)
{
  _BYTE *v2; // edi
  float v3; // [esp+4h] [ebp-4h] BYREF

  sub_100D3C30((int *)this);
  if ( !*(_BYTE *)(this + 1144) && !*(_BYTE *)(this + 1145) )
  {
    v2 = (_BYTE *)sub_100D1940((_DWORD *)this);
    if ( v2 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v2 + 320))(v2) )
      {
        if ( (v2[3292] & 1) != 0 )
        {
          if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1132) && *(int *)(this + 1200) <= 0 )
            sub_1027AEC0(this);
        }
        else
        {
          *(_BYTE *)(this + 1409) = 1;
          if ( *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 1392) )
          {
            v3 = *(float *)(dword_106B31C8 + 12) - 0.1;
            sub_100D2D00((float *)(this + 1132), &v3);
          }
        }
      }
    }
  }
}
