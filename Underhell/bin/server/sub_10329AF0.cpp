int __thiscall sub_10329AF0(int this, float a2)
{
  int v3; // ecx
  unsigned int v4; // eax

  v3 = *(_DWORD *)(this + 424);
  if ( (v3 && ((*(int (__thiscall **)(int))(*(_DWORD *)v3 + 76))(v3) & 4) != 0
     || *(float *)(dword_106B31C8 + 12) - a2 <= *(float *)(this + 3844))
    && (v4 = *(_DWORD *)(this + 3840), v4 != -1)
    && off_1061BE18[4 * (*(_DWORD *)(this + 3840) & 0xFFF) + 2] == v4 >> 12 )
  {
    return off_1061BE18[4 * (*(_DWORD *)(this + 3840) & 0xFFF) + 1];
  }
  else
  {
    return 0;
  }
}
