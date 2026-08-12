void __thiscall sub_1038A920(float *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // edi
  const char *v5; // eax

  if ( *((_BYTE *)this + 4892) && sub_102A8560((int)(this + 1219))
    || (v2 = sub_101679A0((int)"gordon_precriminal"), sub_10167A00(v2) != 1) )
  {
    v3 = this[1083];
    if ( v3 < *(float *)(dword_106B31C8 + 12) )
    {
      if ( !(*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this)
        || (v4 = dword_106B31C8, sub_10021820(this), v5 = "METROPOLICE_LOST_SHORT", *(float *)(v4 + 12) - v3 > 10.0) )
      {
        v5 = "METROPOLICE_LOST_LONG";
      }
      if ( sub_100AC410((int)(this + 1290), v5, 0, 2) >= 0 )
        this[1083] = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                       dword_106B31E4,
                       5.0,
                       15.0)
                   + *(float *)(dword_106B31C8 + 12);
    }
  }
}
