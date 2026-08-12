char __thiscall sub_10053910(int this)
{
  unsigned int v2; // eax
  _DWORD *v4; // esi
  int v5; // eax

  if ( *(float *)(dword_106B31C8 + 12) != *(float *)(this + 80) )
  {
    v2 = *(_DWORD *)(this + 20);
    if ( v2 == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v2 >> 12
      || !off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1]
      || !sub_10053180(this + 216, (float *)(this + 24)) )
    {
      return 0;
    }
    if ( *(_DWORD *)(this + 20) == -1
      || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
    {
      v4 = 0;
    }
    else
    {
      v4 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    }
    if ( sub_10019AD0(v4) )
    {
      v5 = sub_10019AD0(v4);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 340))(v5) )
      {
        *(float *)(this + 56) = *(float *)(this + 56) * 1.5;
        *(float *)(this + 40) = *(float *)(sub_10019AD0(v4) + 352) * 0.333 + *(float *)(this + 40);
      }
    }
    *(float *)(this + 80) = *(float *)(dword_106B31C8 + 12);
  }
  return 1;
}
