int __thiscall sub_101B81A0(int this)
{
  _DWORD *i; // eax
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // eax
  int result; // eax

  for ( i = sub_101B6FF0((volatile signed __int32 *)this); i; i = sub_101B6FF0((volatile signed __int32 *)this) )
    sub_10184660((int)i);
  v3 = this + 24;
  while ( 1 )
  {
    v4 = *(_DWORD **)v3;
    v5 = *(_DWORD *)(v3 + 4);
    if ( !*(_DWORD *)v3 )
      break;
    while ( !(unsigned __int8)ThreadInterlockedAssignIf64(v3, *v4, v5 - 1, v4, v5) )
    {
      _mm_pause();
      v4 = *(_DWORD **)v3;
      v5 = *(_DWORD *)(v3 + 4);
      if ( !*(_DWORD *)v3 )
        goto LABEL_7;
    }
    sub_10184660((int)v4);
  }
LABEL_7:
  result = this;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 12) = 0;
  return result;
}
