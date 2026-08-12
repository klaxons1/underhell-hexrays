void __thiscall sub_1033FA10(void *this)
{
  const char *v2; // edi
  int v3; // eax
  int v4; // ecx
  double v5; // st7
  bool v6; // zf
  float v7; // [esp+4h] [ebp-8h]

  if ( (*((_DWORD *)this + 64) & 0x10000000) == 0 && *((float *)this + 1045) < (double)*(float *)(dword_106B31C8 + 12) )
  {
    v2 = "COMBINEPRISONGUARD_PAIN";
    if ( !*((_BYTE *)this + 4976) )
      v2 = "COMBINE_PAIN";
    v7 = (float)*((int *)this + 55);
    v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 448))(this);
    v4 = *((_DWORD *)this + 679);
    v5 = v7 / (double)v3;
    if ( v4 < 0 || v5 <= 0.9 )
    {
      if ( (v4 & 0x40000000) == 0 && v5 <= 0.5 )
      {
        v6 = *((_BYTE *)this + 4976) == 0;
        *((_DWORD *)this + 679) = v4 | 0x40000000;
        if ( v6 )
          v2 = "COMBINE_COVER";
        else
          v2 = "COMBINEPRISONGUARD_COVER";
      }
    }
    else
    {
      v6 = *((_BYTE *)this + 4976) == 0;
      *((_DWORD *)this + 679) = v4 | 0x80000000;
      if ( v6 )
        v2 = "COMBINE_TAUNT";
      else
        v2 = "COMBINEPRISONGUARD_TAUNT";
    }
    sub_100AC410((int)this + 4244, v2, -1, 0);
    *((float *)this + 1045) = *(float *)(dword_106B31C8 + 12) + 1.0;
  }
}
