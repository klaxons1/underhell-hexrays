void __thiscall sub_103F1710(int this)
{
  _DWORD *v2; // eax
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // edi
  int v6; // eax

  sub_103EC540(this);
  v2 = (_DWORD *)sub_102F3640();
  if ( v2 && sub_102F4280(v2) == 3 )
    *(float *)(this + 1776) = *(float *)(dword_106B31C8 + 12) + 0.25;
  sub_103EEEB0(this);
  sub_103EFBD0(this);
  sub_103F1310(this, 0);
  v3 = *(_DWORD *)(this + 2072);
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (*(_DWORD *)(this + 2072) & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 2072) & 0xFFF) + 2] == *(_DWORD *)(this + 2072) >> 12
      && *v4
      && (*(_DWORD *)(this + 2076) == -1
       || off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 2] != *(_DWORD *)(this + 2076) >> 12
       || !off_1061BE18[4 * (*(_DWORD *)(this + 2076) & 0xFFF) + 1]) )
    {
      v6 = off_1061BE18[4 * (*(_DWORD *)(this + 2072) & 0xFFF) + 2] == v5 ? *v4 : 0;
      if ( !*(_DWORD *)(v6 + 196) )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 2072) & 0xFFF) + 2] == v5 )
        {
          *(_DWORD *)(*v4 + 196) = sub_103F0950;
          sub_103EEC60(this);
          return;
        }
        MEMORY[0xC4] = sub_103F0950;
      }
    }
  }
  sub_103EEC60(this);
}
