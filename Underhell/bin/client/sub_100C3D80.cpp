int __thiscall sub_100C3D80(_DWORD *this)
{
  int v2; // eax
  int v3; // ebx
  _DWORD *v4; // edi
  int result; // eax
  int i; // [esp+8h] [ebp-4h]

  v2 = this[5];
  v3 = 0;
  for ( i = v2; v3 < v2; ++v3 )
  {
    v4 = *(_DWORD **)(this[2] + 4 * v3);
    if ( v4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *v4);
      sub_10034930(v4[3]);
      sub_10034930((int)v4);
      v2 = i;
    }
  }
  this[5] = 0;
  if ( (int)this[4] >= 0 )
  {
    if ( this[2] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    this[3] = 0;
  }
  this[6] = this[2];
  this[5] = 0;
  if ( (int)this[4] >= 0 )
  {
    if ( this[2] )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, this[2]);
      this[2] = 0;
    }
    this[3] = 0;
  }
  result = this[2];
  this[6] = result;
  if ( (int)this[4] >= 0 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      this[2] = 0;
    }
    this[3] = 0;
  }
  return result;
}
