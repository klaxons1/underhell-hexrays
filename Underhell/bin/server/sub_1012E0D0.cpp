int __thiscall sub_1012E0D0(_DWORD *this)
{
  int result; // eax
  int v3; // ebx
  int *v4; // esi
  int v5; // ecx
  int *v6; // eax
  int v7; // eax
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  result = this[16385];
  *this = &CBaseEntityList::`vftable';
  if ( result )
  {
    do
    {
      v3 = (result - (int)this - 4) >> 4;
      v4 = &this[4 * v3 + 1];
      v11 = *(_DWORD *)(result + 12);
      v5 = *v4;
      if ( *v4 )
      {
        v12 = -1;
        (*(void (__thiscall **)(int, int *))(*(_DWORD *)v5 + 4))(v5, &v12);
        (*(void (__thiscall **)(_DWORD *, _DWORD, int))(*this + 4))(
          this,
          this[4 * v3 + 1],
          v3 | (this[4 * v3 + 2] << 12));
        this[4 * v3 + 2] = ((unsigned __int16)this[4 * v3 + 2] + 1) & 0x7FFF;
        v6 = (int *)this[4 * v3 + 3];
        *v4 = 0;
        if ( v6 != v4 )
        {
          if ( v6 )
            v6[3] = this[4 * v3 + 4];
          else
            this[16385] = this[4 * v3 + 4];
          v7 = this[4 * v3 + 4];
          if ( v7 )
            *(_DWORD *)(v7 + 8) = this[4 * v3 + 3];
          else
            this[16386] = this[4 * v3 + 3];
          this[4 * v3 + 4] = &this[4 * v3 + 1];
          this[4 * v3 + 3] = &this[4 * v3 + 1];
        }
        if ( v3 >= 2048 )
        {
          v8 = (int *)this[4 * v3 + 3];
          if ( v8 != v4 )
          {
            if ( v8 )
              v8[3] = this[4 * v3 + 4];
            else
              this[16387] = this[4 * v3 + 4];
            v9 = this[4 * v3 + 4];
            if ( v9 )
              *(_DWORD *)(v9 + 8) = this[4 * v3 + 3];
            else
              this[16388] = this[4 * v3 + 3];
            this[4 * v3 + 4] = &this[4 * v3 + 1];
            this[4 * v3 + 3] = &this[4 * v3 + 1];
          }
          this[4 * v3 + 4] = 0;
          this[4 * v3 + 3] = this[16388];
          this[16388] = v4;
          v10 = this[4 * v3 + 3];
          if ( v10 )
            *(_DWORD *)(v10 + 12) = v4;
          else
            this[16387] = v4;
        }
      }
      result = v11;
    }
    while ( v11 );
  }
  return result;
}
