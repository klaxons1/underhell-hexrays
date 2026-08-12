char __thiscall sub_10147E10(_DWORD *this)
{
  _DWORD *v1; // edi
  int i; // ebx
  int v3; // esi
  volatile signed __int32 *v4; // edi

  v1 = this;
  for ( i = (unsigned __int16)sub_10147530((int)this); i != 0xFFFF; i = (unsigned __int16)sub_10147600(v1, i) )
  {
    v3 = *(_DWORD *)(v1[1] + 12 * (unsigned __int16)i + 8);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 76) )
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 76) + 4))(*(_DWORD *)(v3 + 76));
      v4 = *(volatile signed __int32 **)(v3 + 80);
      if ( v4
        && !_InterlockedDecrement(v4 + 1)
        && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4) )
      {
        (**(void (__thiscall ***)(volatile signed __int32 *, int))v4)(v4, 1);
      }
      sub_10034930(v3);
      v1 = this;
    }
  }
  return sub_10147470((int)v1);
}
