int __thiscall sub_1003C660(_DWORD *this)
{
  int i; // edi
  int result; // eax

  (*(void (__thiscall **)(_DWORD *, int))(*this + 440))(this, 1);
  sub_100383C0(this);
  sub_1003C280(&off_103D8AB4, this[41]);
  sub_10036330(this, 0);
  for ( i = 0; i < 90; ++i )
    result = sub_100351D0(this, (char)"InitPredictable", i, 0);
  return result;
}
