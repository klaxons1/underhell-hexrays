int __thiscall sub_103CE630(int this, int a2, int a3, int a4)
{
  unsigned int v5; // eax

  if ( sub_10023D10((_DWORD *)this, 76) )
  {
    v5 = *(_DWORD *)(this + 3836);
    if ( v5 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 2] == v5 >> 12
      && off_1061BE18[4 * (*(_DWORD *)(this + 3836) & 0xFFF) + 1] )
    {
      sub_10023E00((char *)this, 76);
      if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 3856) > -0.001 && a2 != 100 )
        return 100;
      *(_DWORD *)(this + 3836) = -1;
    }
  }
  if ( a2 != 102
    && (unsigned int)(a4 - 11) <= 3
    && (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 1, 100) < 50 )
  {
    return 102;
  }
  if ( a2 != 101 && (a2 == 27 || a2 == 18) )
    return 101;
  return sub_1032E8B0(this, a2, a3, a4);
}
