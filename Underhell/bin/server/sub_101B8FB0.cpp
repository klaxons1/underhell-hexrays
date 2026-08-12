float *__thiscall sub_101B8FB0(float *this)
{
  float *result; // eax
  int v3; // ecx

  this[4] = 0.0;
  if ( *((int *)this + 3) >= 0 )
  {
    if ( *((_DWORD *)this + 1) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 1));
      this[1] = 0.0;
    }
    this[2] = 0.0;
  }
  this[5] = this[1];
  this[9] = 0.0;
  if ( *((int *)this + 8) >= 0 )
  {
    if ( *((_DWORD *)this + 6) )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *((_DWORD *)this + 6));
      this[6] = 0.0;
    }
    this[7] = 0.0;
  }
  this[10] = this[6];
  this[11] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[14] = 0.0;
  this[15] = 0.0;
  this[16] = 0.0;
  this[17] = 0.0;
  this[18] = 0.0;
  this[19] = 0.0;
  result = this + 40;
  v3 = 20;
  do
  {
    *result = 0.0;
    *(result - 20) = 0.0;
    ++result;
    --v3;
  }
  while ( v3 );
  return result;
}
