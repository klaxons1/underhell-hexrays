float *__thiscall sub_103B74D0(void *this)
{
  float *result; // eax

  result = (float *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 24);
  *result = 0.0;
  result[1] = 0.0;
  result[2] = 0.0;
  result[3] = 0.0;
  result[4] = 0.0;
  result[5] = 0.0;
  if ( !result )
    return 0;
  *((_DWORD *)result + 1) = this;
  result[2] = 0.0;
  result[3] = 0.0;
  result[5] = 0.0;
  *(_DWORD *)result = &CNPC_Strider::CPathfinder::`vftable';
  return result;
}
