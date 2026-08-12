int __thiscall sub_100AAFE0(_DWORD *this)
{
  int v2; // ecx
  int i; // ebx
  int v4; // eax
  int v5; // esi
  int v7; // [esp+4h] [ebp-4h]

  v2 = this[1];
  this[5] = -1;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 1452))(v2);
  if ( v7 )
  {
    if ( (*(_BYTE *)(this[1] + 248) & 1) == 0 )
    {
      for ( i = sub_1023C720(); i != -1; i = *(__int16 *)(v5 + 28) )
      {
        v4 = sub_1023C740(i);
        v5 = v4;
        if ( v4 && (v7 & *(_DWORD *)(v4 + 16)) != 0 && sub_100AAF00(this, v4) )
        {
          *(_DWORD *)(v5 + 20) = this[5];
          this[5] = i;
        }
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1440))(this[1]);
}
