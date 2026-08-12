void __thiscall sub_1033D190(float *this)
{
  double v2; // st7
  int v3; // edi
  const char *v4; // eax

  v2 = this[1055];
  if ( v2 < *(float *)(dword_106B31C8 + 12) )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
      && (v3 = dword_106B31C8, sub_10021820(this), *(float *)(v3 + 12) - v2 <= 10.0) )
    {
      if ( *((_BYTE *)this + 4976) )
        v4 = "COMBINEPRISONGUARD_LOST_SHORT";
      else
        v4 = "COMBINE_LOST_SHORT";
    }
    else
    {
      v4 = "COMBINEPRISONGUARD_LOST_LONG";
      if ( !*((_BYTE *)this + 4976) )
        v4 = "COMBINE_LOST_LONG";
    }
    if ( sub_100AC410((int)(this + 1061), v4, 0, 2) >= 0 )
      this[1055] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                     dword_106B31E4,
                     5.0,
                     15.0)
                 + *(float *)(dword_106B31C8 + 12);
  }
}
