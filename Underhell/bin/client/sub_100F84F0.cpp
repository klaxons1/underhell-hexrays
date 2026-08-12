_DWORD *__thiscall sub_100F84F0(volatile signed __int32 *this)
{
  volatile signed __int32 *v1; // esi
  int v2; // eax
  int v3; // edi
  _DWORD *v5; // [esp-20h] [ebp-2Ch]
  _DWORD *v7; // [esp-10h] [ebp-1Ch]
  _DWORD *v9; // [esp-8h] [ebp-14h]
  volatile signed __int32 *v10; // [esp-4h] [ebp-10h]

  v1 = this;
  v10 = this + 2;
  v9 = this + 1;
  v7 = this + 2;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        do
        {
          v5 = (_DWORD *)*v1;
          v2 = **(_DWORD **)v1;
        }
        while ( !v2 );
        if ( v5 != (_DWORD *)*v7 )
          break;
        if ( (volatile signed __int32 *)v2 == v1 )
          return 0;
        ThreadInterlockedAssignIf64(v1 + 2, v2, *((_DWORD *)v10 + 1) + 1, v5, *((_DWORD *)v10 + 1));
      }
    }
    while ( (volatile signed __int32 *)v2 == v1 );
    v3 = *(_DWORD *)(v2 + 4);
    if ( (unsigned __int8)ThreadInterlockedAssignIf64(this, v2, *v9 + 1, v5, *v9) )
      break;
    v1 = this;
  }
  _InterlockedExchangeAdd(this + 4, 0xFFFFFFFF);
  v5[1] = v3;
  return v5;
}
