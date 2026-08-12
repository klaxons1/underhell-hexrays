char __thiscall sub_100D2140(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // ecx
  int v5; // eax

  v2 = *(_DWORD *)(this + 1120);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1120) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      v4 = *v3;
      if ( v4 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
        if ( v5 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5);
      }
    }
  }
  *(_BYTE *)(this + 1146) = 0;
  return 0;
}
