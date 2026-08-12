int __thiscall sub_103C8720(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD **v5; // edi
  int v6; // eax
  _BYTE *v8; // ecx
  int v9; // [esp+8h] [ebp-4h] BYREF

  if ( a2 == 24 )
  {
    if ( (*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    {
      v5 = (_DWORD **)this[601];
      v6 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
      if ( sub_100AAC30(v5, v6) )
        return 43;
    }
  }
  v8 = (_BYTE *)this[906];
  *((_BYTE *)this + 3648) = 1;
  v9 = 0;
  if ( v8 && sub_101645F0(v8, a2, a3, a4, &v9) )
    return v9;
  else
    return sub_10043EF0(this, a2, a3, a4);
}
