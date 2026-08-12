volatile signed __int32 *__thiscall sub_10210B80(
        void *this,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  v8 = (_DWORD *)sub_10184390(72);
  if ( !v8 )
    return sub_101B8390((signed __int32)this, 0);
  v9 = sub_1020AE90(v8, a2, a3, a4, a5, a6, a7);
  return sub_101B8390((signed __int32)this, (signed __int32)v9);
}
