int __thiscall sub_1017DE00(int *this)
{
  int *v1; // esi
  bool v2; // sf
  int result; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  _BYTE *v7; // eax
  int v8; // [esp-4h] [ebp-10h]

  v5 = (_BYTE *)this[1];
  if ( v5 && *v5 )
  {
    sub_10034930(this[1]);
    this[1] = 0;
  }
  v6 = (_BYTE *)this[2];
  if ( v6 && *v6 )
  {
    sub_10034930(this[2]);
    this[2] = 0;
  }
  v7 = (_BYTE *)this[3];
  if ( v7 && *v7 )
  {
    sub_10034930(this[3]);
    this[3] = 0;
  }
  sub_1017DBD0(this + 17);
  if ( this[19] >= 0 )
  {
    if ( this[17] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[17]);
      this[17] = 0;
    }
    this[18] = 0;
  }
  this[21] = this[17];
  sub_1017DC80(this + 22);
  if ( this[24] >= 0 )
  {
    if ( this[22] )
    {
      (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, this[22]);
      this[22] = 0;
    }
    this[23] = 0;
  }
  this[26] = this[22];
  sub_1017DDA0(this + 22);
  v1 = this + 17;
  sub_1017DBD0(v1);
  if ( v1[2] >= 0 )
  {
    if ( *v1 )
    {
      (*(void (__thiscall **)(_DWORD, int, int))(*g_pMemAlloc + 20))(g_pMemAlloc, *v1, v8);
      *v1 = 0;
    }
    v1[1] = 0;
  }
  v2 = v1[2] < 0;
  result = *v1;
  v1[4] = *v1;
  if ( !v2 )
  {
    if ( result )
    {
      result = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, result);
      *v1 = 0;
    }
    v1[1] = 0;
  }
  return result;
}
