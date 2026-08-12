int __thiscall sub_10286DE0(_DWORD *this)
{
  int v1; // edi
  int v3; // ebp
  int (__thiscall ***v4)(void *, int, int); // ecx
  int v5; // ebx
  int i; // [esp+Ch] [ebp-10h]
  int v8; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h] BYREF
  _BYTE v10[4]; // [esp+18h] [ebp-4h] BYREF

  v1 = 0;
  v3 = 0;
  v8 = 0;
  for ( i = 0; v3 < this[64]; ++v3 )
  {
    v4 = *(int (__thiscall ****)(void *, int, int))(16 * *(_DWORD *)(this[61] + 4 * v3) + this[52]);
    if ( v4 )
    {
      v5 = v8 % this[70];
      sub_102361D0(v4, (int)v10, (int)&v9);
      if ( v1 < v9 )
        v1 = v9;
      if ( !v5 )
        i += this[72];
      if ( v5 >= this[70] - 1 )
      {
        i += v1;
        v1 = 0;
      }
      ++v8;
    }
  }
  return v1 + i + this[72];
}
