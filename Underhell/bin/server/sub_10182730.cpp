int __thiscall sub_10182730(_DWORD *this)
{
  int v2; // edi
  int v3; // edx
  int result; // eax

  v2 = this[201];
  sub_10112C00((int)(this + 80), 0);
  sub_100E0970((int)this, v3, 0, 0);
  sub_100EAB80(this, 32);
  this[115] = 0;
  result = sub_100D8500(this);
  this[201] = v2;
  return result;
}
