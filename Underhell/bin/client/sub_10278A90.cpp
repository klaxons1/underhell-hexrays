void __thiscall sub_10278A90(_DWORD *this)
{
  int v2; // eax
  int v3; // [esp+18h] [ebp-10h] BYREF
  int v4; // [esp+1Ch] [ebp-Ch] BYREF
  int v5; // [esp+20h] [ebp-8h] BYREF
  _BYTE v6[4]; // [esp+24h] [ebp-4h] BYREF

  sub_10278990((int)this);
  sub_10278280((int)this);
  if ( this[52] && (int)this[56] > 0 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD, int, int *, int *, int *, _BYTE *))(*this + 800))(
      this,
      0,
      -1,
      &v5,
      &v3,
      &v4,
      v6);
    v3 = this[59];
    v2 = sub_102374F0((int (__thiscall ***)(void *, _BYTE *, int *))this);
    sub_10236200((int (__thiscall ***)(void *, int, int))this[52], v5, v3, v4 - v5, v2 - v3);
  }
  nullsub_4();
}
