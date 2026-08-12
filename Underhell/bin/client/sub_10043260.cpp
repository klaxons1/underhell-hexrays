void __thiscall sub_10043260(_DWORD *this, int a2, int a3, void *a4, float a5)
{
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]
  float v8; // [esp+0h] [ebp-8h]

  if ( (_DWORD *)dword_10407394 == this )
  {
    v7 = -a5;
    sub_10043170((int)this, a2, v7);
    sub_10043170((int)this, a3, 0.0);
    v6 = sub_100F6040();
    if ( *((float *)off_103DC81C + 3) == v6 )
    {
      (*(void (__stdcall **)(void *, int, int, _DWORD))(this[1] + 64))(a4, 128, 524032, *((float *)off_103DC81C + 3));
    }
    else
    {
      v8 = v6 - *((float *)off_103DC81C + 3);
      sub_10043170((int)this, (int)a4, v8);
    }
  }
  else
  {
    sub_100293C0(this, a2, a3, a4, a5);
  }
}
