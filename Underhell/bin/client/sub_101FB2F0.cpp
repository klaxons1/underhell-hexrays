_DWORD *__thiscall sub_101FB2F0(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // edi
  int v4; // ebx
  int v5; // ebx
  int *v6; // edi
  int v7; // eax
  _DWORD *v8; // edx
  _DWORD *result; // eax
  _DWORD *v10; // ecx
  int v11; // ecx
  bool v12; // zf
  _DWORD *v13; // ecx

  sub_101F8D40(this);
  sub_101F8CF0(this + 1502);
  if ( this[1511] )
    sub_10034930(this[1511]);
  if ( this[1512] )
    sub_10034930(this[1512]);
  if ( this[1513] )
    sub_10034930(this[1513]);
  v2 = this[1494];
  if ( v2 )
    (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((v2 & 0xFFFFFFFC) - 4));
  v3 = this + 1497;
  v4 = 4;
  do
  {
    if ( *v3 )
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *(_DWORD *)((*v3 & 0xFFFFFFFC) - 4));
    ++v3;
    --v4;
  }
  while ( v4 );
  v5 = 63;
  v6 = this + 1499;
  do
  {
    v7 = *(v6 - 7);
    v6 -= 6;
    if ( v7 )
      sub_10034930(v7);
    if ( *v6 )
      sub_10034930(*v6);
    --v5;
  }
  while ( v5 >= 0 );
  v8 = (_DWORD *)this[16];
  result = this + 14;
  if ( v8 )
  {
    v10 = (_DWORD *)this[15];
    if ( v10 )
    {
      *v10 = *result;
      if ( *result )
        *(_DWORD *)(*result + 4) = this[15];
    }
    else if ( (_DWORD *)*v8 == result )
    {
      v11 = *result;
      v12 = *result == 0;
      *v8 = *result;
      if ( !v12 )
        *(_DWORD *)(v11 + 4) = 0;
    }
    this[15] = 0;
    *result = 0;
    this[16] = 0;
  }
  v13 = (_DWORD *)this[2];
  if ( v13 )
  {
    result = (_DWORD *)this[1];
    if ( result )
    {
      *result = *this;
      result = (_DWORD *)*this;
      if ( *this )
      {
        result[1] = this[1];
        this[1] = 0;
        *this = 0;
        this[2] = 0;
        return result;
      }
    }
    else if ( (_DWORD *)*v13 == this )
    {
      result = (_DWORD *)*this;
      v12 = *this == 0;
      *v13 = *this;
      if ( !v12 )
        result[1] = 0;
    }
    this[1] = 0;
    *this = 0;
    this[2] = 0;
  }
  return result;
}
