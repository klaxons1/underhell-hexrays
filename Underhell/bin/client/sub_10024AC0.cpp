int __thiscall sub_10024AC0(_DWORD *this, int a2, int a3, int a4, float a5)
{
  double v6; // st7
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+8h] [ebp-8h]

  v8 = *((float *)off_103DC81C + 3) - a5;
  sub_100255E0(a2, v8);
  sub_10092CD0((int)this, a3, *((float *)off_103DC81C + 3), this[839], this[840]);
  v6 = sub_100F6040();
  if ( *((float *)off_103DC81C + 3) == v6 )
    return (*(int (__stdcall **)(int, int, int, _DWORD))(this[1] + 64))(a4, 128, 524032, *((float *)off_103DC81C + 3));
  v9 = v6;
  return sub_100255E0(a4, v9);
}
