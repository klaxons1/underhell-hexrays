int __thiscall sub_10035590(_DWORD *this, int a2)
{
  int v2; // edi
  _DWORD *v4; // eax
  int v5; // ebx
  int result; // eax
  int v7; // ebx
  int v8; // [esp-Ch] [ebp-20h]
  int v9; // [esp+Ch] [ebp-8h] BYREF
  int v10; // [esp+10h] [ebp-4h] BYREF

  v2 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !this[275] && sub_100D7240(this) )
    sub_100BD750(this);
  v4 = (_DWORD *)this[275];
  if ( v4 && *v4 )
    v5 = this[275];
  else
    v5 = 0;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 104))(v2);
  if ( v5 )
  {
    v7 = a2;
    if ( (*(_DWORD *)(a2 + 64) & 0x800) == 0 )
    {
      result = (*(int (__thiscall **)(_DWORD *))(*this + 1512))(this);
      if ( (_BYTE)result )
      {
        v8 = this[436];
        v10 = -1;
        v9 = 0;
        sub_1011B8E0(this, v7, v8, &v10, &v9);
        if ( v10 == -1 )
        {
          a2 = -1;
          sub_10035130((int)this, &a2);
          a2 = 0;
          return sub_10035180((int)this, &a2);
        }
        else
        {
          a2 = sub_100BDCE0(v10);
          sub_10035130((int)this, &a2);
          return sub_10035180((int)this, &v9);
        }
      }
    }
  }
  return result;
}
