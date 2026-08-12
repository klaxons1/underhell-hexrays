bool __thiscall sub_101B64E0(int this)
{
  if ( !sub_100422D0() )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 116))(this) )
      (*(void (__thiscall **)(int))(*(_DWORD *)this + 64))(this);
    return 0;
  }
  if ( !sub_100B68D0((int *)this) )
    return 0;
  return *(_DWORD *)(dword_1043CA1C + 48) && *((float *)off_103DC81C + 3) - *(float *)(this + 44) < 3.0
      || *(_BYTE *)(this + 48) != 0;
}
