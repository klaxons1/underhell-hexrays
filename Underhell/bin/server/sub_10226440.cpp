int sub_10226440()
{
  unsigned int v0; // eax
  int v1; // eax
  int *v2; // ecx
  int v3; // ecx

  if ( (dword_106C42FC & 1) != 0 )
  {
    v0 = dword_106C42F8;
    if ( dword_106C42F8 != -1
      && off_1061BE18[4 * (dword_106C42F8 & 0xFFF) + 2] == (unsigned int)dword_106C42F8 >> 12
      && off_1061BE18[4 * (dword_106C42F8 & 0xFFF) + 1] )
    {
      goto LABEL_16;
    }
  }
  else
  {
    dword_106C42FC |= 1u;
    dword_106C42F8 = -1;
  }
  v1 = sub_101811E0("scene_manager", -1);
  if ( !v1 )
  {
    dword_106C42F8 = -1;
    return 0;
  }
  v0 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v1 + 8))(v1);
  dword_106C42F8 = v0;
  if ( v0 == -1 )
    return 0;
  v2 = &off_1061BE18[4 * (v0 & 0xFFF) + 1];
  if ( off_1061BE18[4 * (v0 & 0xFFF) + 2] == v0 >> 12 && *v2 )
  {
    if ( off_1061BE18[4 * (v0 & 0xFFF) + 2] == v0 >> 12 )
      v3 = *v2;
    else
      v3 = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 96))(v3);
    v0 = dword_106C42F8;
  }
LABEL_16:
  if ( v0 == -1 || off_1061BE18[4 * (v0 & 0xFFF) + 2] != v0 >> 12 )
    return 0;
  return off_1061BE18[4 * (v0 & 0xFFF) + 1];
}
