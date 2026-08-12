void __thiscall sub_100EEFE0(_DWORD *this, int a2, int a3)
{
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // [esp+4h] [ebp-4h]

  if ( a2 )
  {
    v4 = this[388] - 1;
    if ( v4 >= 0 )
    {
      v5 = 68 * v4;
      v7 = 68 * v4;
      do
      {
        v6 = v5 + this[385];
        if ( *(_DWORD *)(v6 + 4) == a2 )
        {
          (*(void (__thiscall **)(_DWORD *, int, _DWORD, int))(*this + 852))(this, v6, 0, a3);
          *(_DWORD *)v6 = 0;
          *(_DWORD *)(v6 + 4) = 0;
          *(_BYTE *)(v6 + 12) = 0;
          if ( this[388] - v4 - 1 > 0 )
            memcpy((void *)(v7 + this[385]), (const void *)(v7 + this[385] + 68), 68 * (this[388] - v4 - 1));
          --this[388];
          v5 = v7;
        }
        v5 -= 68;
        --v4;
        v7 = v5;
      }
      while ( v4 >= 0 );
    }
  }
  else
  {
    this[388] = 0;
  }
}
