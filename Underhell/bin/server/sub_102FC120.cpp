char __thiscall sub_102FC120(float *this)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = sub_101679A0((int)"antlion_allied");
  if ( sub_10167A00(v2) != 1 )
    return 0;
  if ( *((_DWORD *)this + 997) == 1 )
    return 0;
  v3 = *((_DWORD *)this + 1025);
  if ( v3 == -1
    || off_1061BE18[4 * ((_DWORD)this[1025] & 0xFFF) + 2] != v3 >> 12
    || !off_1061BE18[4 * ((_DWORD)this[1025] & 0xFFF) + 1]
    || *(float *)(dword_106B31C8 + 12) < (double)this[1018] )
  {
    return 0;
  }
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)this + 368))(this) )
  {
    this[1018] = (double)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 5, 10)
               + *(float *)(dword_106B31C8 + 12);
    return 0;
  }
  return 1;
}
