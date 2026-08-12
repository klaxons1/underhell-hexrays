bool __thiscall sub_1022FC90(int this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // ecx
  bool result; // al

  result = 0;
  if ( *(_BYTE *)(this + 876) )
  {
    v1 = *(_DWORD *)(this + 880);
    if ( v1 != -1 )
    {
      v2 = &off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1];
      if ( v2[1] == v1 >> 12 )
      {
        v3 = *v2;
        if ( v3 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 264))(v3) )
            return 1;
        }
      }
    }
  }
  return result;
}
