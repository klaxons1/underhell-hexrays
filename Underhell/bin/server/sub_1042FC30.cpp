_DWORD *__thiscall sub_1042FC30(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  _DWORD *v6; // eax
  int v7; // ecx
  int v8; // edi
  _DWORD *v9; // ecx

  result = (_DWORD *)this[2];
  if ( result == (_DWORD *)2 )
  {
    v3 = 1;
  }
  else
  {
    if ( !result && *((_WORD *)this + 21) )
      return result;
    v3 = *((unsigned __int16 *)this + 21) + 1;
  }
  v4 = v3 * this[1];
  v5 = v4 * *this;
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(
                   g_pMemAlloc,
                   *((unsigned __int16 *)this + 20) + v5 + 14);
  v6[2] = v5;
  v6[1] = this + 3;
  v7 = this[3];
  *v6 = v7;
  *(_DWORD *)(v7 + 4) = v6;
  *(_DWORD *)v6[1] = v6;
  result = (_DWORD *)(~(*((unsigned __int16 *)this + 20) - 1)
                    & ((unsigned int)v6 + *((unsigned __int16 *)this + 20) + 11));
  v8 = v4 - 1;
  this[7] = result;
  if ( v8 > 0 )
  {
    do
    {
      v9 = (_DWORD *)((char *)result + *this);
      --v8;
      *result = v9;
      result = v9;
    }
    while ( v8 );
  }
  *result = 0;
  ++*((_WORD *)this + 21);
  return result;
}
