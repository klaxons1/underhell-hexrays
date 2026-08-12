char __thiscall sub_102F4900(int this)
{
  int v3; // edi
  int v4; // ecx
  _BYTE v5[12]; // [esp+4h] [ebp-Ch] BYREF

  if ( sub_100697A0((_DWORD *)this, 109, 0) )
    return 1;
  if ( sub_100697A0((_DWORD *)this, 97, 0) )
  {
    v3 = sub_101C5260((_DWORD *)this);
    if ( v3 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
      {
        if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
          sub_100DAE60(this);
        if ( *(float *)((*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v3 + 504))(v3, v5) + 8) > (double)*(float *)(this + 588) )
          return 1;
      }
    }
  }
  v4 = *(_DWORD *)(this + 3624);
  if ( v4 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 208))(v4);
  else
    return sub_100254F0(this);
}
