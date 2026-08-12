int __thiscall sub_10256BA0(_DWORD *this)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // eax
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 924))(this);
  if ( (_BYTE)result )
  {
    if ( this[58] )
    {
      result = (*(int (__thiscall **)(_DWORD *, int *, int *))(*this + 1000))(this, &v6, &v7);
      if ( (_BYTE)result )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 908))(this);
        v3 = v6;
        if ( v7 - v6 > 0 )
        {
          v4 = v7 - v6;
          do
          {
            if ( this[58] - v3 - 1 > 0 )
            {
              memcpy((void *)(this[55] + 2 * v3), (const void *)(this[55] + 2 * v3 + 2), 2 * (this[58] - v3 - 1));
              v3 = v6;
            }
            --this[58];
            --v4;
          }
          while ( v4 );
        }
        (*(void (__thiscall **)(_DWORD *))(*this + 852))(this);
        (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
        this[70] = v6;
        *((_BYTE *)this + 340) = 1;
        this[99] = 0;
        this[68] = 0;
        v5 = this[68];
        v8 = 999999;
        sub_100C2010(this + 65, v5, &v8);
        sub_10254760(this);
        return (*(int (**)(void))(*this + 976))();
      }
    }
  }
  return result;
}
