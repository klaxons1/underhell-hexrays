void __thiscall sub_100E8D20(_DWORD *this)
{
  int v2; // edi
  int i; // esi
  int v4; // ecx
  _DWORD v5[1024]; // [esp+4h] [ebp-1000h] BYREF

  if ( this[106] )
  {
    if ( (unsigned __int8)sub_101B4DB0() )
      Warning("Changing collision rules within a callback is likely to cause crashes!\n");
    v2 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*this + 624))(this, v5, 1024);
    for ( i = 0; i < v2; ++i )
    {
      v4 = v5[i];
      if ( v4 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
    }
  }
}
