int __thiscall sub_100204D0(_DWORD *this)
{
  const char *v3; // [esp+4h] [ebp-4h]

  sub_100EAB80(this, 32);
  if ( this[581] == 4 )
    Warning("%s put to sleep while in Scripted state!\n", v3);
  sub_1004AF00(this);
  sub_100457E0(87);
  return sub_1010DD80((int)this, (int)this, 0.0);
}
