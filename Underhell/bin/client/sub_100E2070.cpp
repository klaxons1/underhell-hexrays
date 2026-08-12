int __thiscall sub_100E2070(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // eax
  int v5; // ecx

  v3 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
  v4 = sub_1007A770(off_103DCD78, *v3);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 736) == 17 )
    {
      v5 = this[2];
      if ( v5 < this[3] )
      {
        *(_DWORD *)(this[1] + 4 * v5) = v4;
        ++this[2];
      }
    }
  }
  return 0;
}
