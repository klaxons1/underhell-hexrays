int __thiscall sub_10412D60(int *this)
{
  int v2; // edi
  _BYTE v4[48]; // [esp+8h] [ebp-3Ch] BYREF
  _BYTE v5[12]; // [esp+38h] [ebp-Ch] BYREF

  sub_102075B0(this);
  this[447] = sub_100BEF30((int)this, "cannon_muzzle");
  this[435] = sub_100BEF30((int)this, "muzzle");
  this[436] = sub_100BEF30((int)this, "gun_base");
  v2 = sub_100BEF30((int)this, "gun_def");
  sub_100BD6D0(this, this[435], (int)v5, 0, 0, 0);
  (*(void (__thiscall **)(int *, int, _BYTE *))(*this + 796))(this, v2, v4);
  return sub_10421BA0(v5, v4, this + 439);
}
