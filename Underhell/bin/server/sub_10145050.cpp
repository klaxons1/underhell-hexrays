int __thiscall sub_10145050(int this)
{
  bool v2; // zf
  int result; // eax

  *(float *)(this + 24) = 0.0;
  v2 = *(_BYTE *)(this + 308) == 0;
  *(float *)(this + 20) = 0.0;
  *(float *)(this + 12) = 0.0;
  *(_WORD *)(this + 28) = 1;
  *(float *)(this + 16) = 0.0;
  *(_BYTE *)(this + 30) = 0;
  if ( !v2 )
  {
    result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(this + 8) + 264))(0.0);
    *(_BYTE *)(this + 308) = 0;
  }
  return result;
}
