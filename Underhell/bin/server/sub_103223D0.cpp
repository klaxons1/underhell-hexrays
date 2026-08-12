void __thiscall sub_103223D0(int this)
{
  unsigned int v1; // edx
  int *v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  float v5; // [esp+0h] [ebp-8h]

  v1 = *(_DWORD *)(this + 3736);
  if ( v1 != -1 )
  {
    v2 = &off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 1];
    v3 = v1 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == v3 )
    {
      if ( *v2 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(this + 3736) & 0xFFF) + 2] == v3 )
          v4 = *v2;
        else
          v4 = 0;
        v5 = *(float *)(this + 3668) - (*(float *)(dword_106B6F0C + 44) * 100.0 * 0.000099999997 + 4.0);
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v4 + 1120) + 16))(*(_DWORD *)(v4 + 1120), LODWORD(v5));
      }
    }
  }
}
