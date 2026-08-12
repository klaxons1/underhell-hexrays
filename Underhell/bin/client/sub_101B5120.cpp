bool __thiscall sub_101B5120(int this)
{
  int v3; // eax

  if ( *(_DWORD *)(dword_10430E6C + 48) )
    return 0;
  v3 = sub_100422D0();
  if ( !v3 )
    return 0;
  return (*(float *)(this + 360) != *(float *)(v3 + 5168) || *(_BYTE *)(this + 255)) && sub_100B68D0((int *)this);
}
