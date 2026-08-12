int __thiscall sub_100501B0(_DWORD **this, int a2)
{
  int v3; // eax

  if ( a2 == 100000
    && (((void (__thiscall *)(_DWORD **))(*this)[13])(this), v3 = sub_1007DB30(100001), sub_10023D10(this[1], v3)) )
  {
    return 100001;
  }
  else
  {
    return sub_1004B470(this);
  }
}
