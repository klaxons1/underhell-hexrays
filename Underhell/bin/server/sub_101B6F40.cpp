volatile signed __int32 *__thiscall sub_101B6F40(signed __int32 this, signed __int32 *a2)
{
  signed __int32 v2; // edi
  volatile signed __int32 *v3; // esi
  int v5; // [esp-Ch] [ebp-18h]

  v2 = this + 8;
  *a2 = this;
  v3 = *(volatile signed __int32 **)(this + 8);
  v5 = *(_DWORD *)(this + 12);
  if ( _InterlockedCompareExchange(v3, (signed __int32)a2, this) != this )
  {
    do
    {
      ThreadInterlockedAssignIf64(v2, *v3, v5 + 1, v3, v5);
      v3 = *(volatile signed __int32 **)v2;
      v5 = *(_DWORD *)(v2 + 4);
    }
    while ( _InterlockedCompareExchange(*(volatile signed __int32 **)v2, (signed __int32)a2, this) != this );
  }
  ThreadInterlockedAssignIf64(v2, a2, v5 + 1, v3, v5);
  _InterlockedExchangeAdd((volatile signed __int32 *)(this + 16), 1u);
  return v3;
}
