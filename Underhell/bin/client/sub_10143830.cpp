void __thiscall sub_10143830(_DWORD *this)
{
  int v2; // ecx
  volatile signed __int32 *v3; // edi
  volatile signed __int32 *v4; // edi

  v2 = this[35];
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
    this[35] = 0;
  }
  v3 = (volatile signed __int32 *)this[36];
  if ( v3 )
  {
    if ( !_InterlockedDecrement(v3 + 1) && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v3 + 4))(v3) )
      (**(void (__thiscall ***)(volatile signed __int32 *, int))v3)(v3, 1);
    this[36] = 0;
  }
  v4 = (volatile signed __int32 *)this[37];
  if ( v4 )
  {
    if ( !_InterlockedDecrement(v4 + 1) && (*(unsigned __int8 (__thiscall **)(volatile signed __int32 *))(*v4 + 4))(v4) )
      (**(void (__thiscall ***)(volatile signed __int32 *, int))v4)(v4, 1);
    this[37] = 0;
  }
  this[38] = 0;
}
