int __thiscall sub_10256CB0(_DWORD *this)
{
  int result; // eax
  bool v3; // cc
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this + 924))(this);
  if ( (_BYTE)result )
  {
    if ( this[58] )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int *, int *))(*this + 1000))(this, &v7, &v8)
        || (result = this[70], v3 = result < this[58], v7 = result, v8 = result + 1, v3) )
      {
        (*(void (__thiscall **)(_DWORD *))(*this + 908))(this);
        v4 = v7;
        if ( v8 - v7 > 0 )
        {
          v5 = v8 - v7;
          do
          {
            if ( this[58] - v4 - 1 > 0 )
            {
              memcpy((void *)(this[55] + 2 * v4), (const void *)(this[55] + 2 * v4 + 2), 2 * (this[58] - v4 - 1));
              v4 = v7;
            }
            --this[58];
            --v5;
          }
          while ( v5 );
        }
        (*(void (__thiscall **)(_DWORD *))(*this + 980))(this);
        (*(void (__thiscall **)(_DWORD *))(*this + 852))(this);
        this[70] = v7;
        *((_BYTE *)this + 340) = 1;
        this[99] = 0;
        this[68] = 0;
        v6 = this[68];
        v9 = 999999;
        sub_100C2010(this + 65, v6, &v9);
        sub_10254760(this);
        return (*(int (**)(void))(*this + 976))();
      }
    }
  }
  return result;
}
