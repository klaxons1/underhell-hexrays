int __thiscall sub_1027C650(int this)
{
  int v2; // eax
  int result; // eax
  int v4; // et2
  int v5; // eax

  sub_100D2FF0((int *)this);
  v2 = sub_10219A30();
  v4 = v2 % 20;
  result = v2 / 20;
  if ( !v4 )
  {
    *(_BYTE *)(this + 1125) = 1;
    v5 = sub_100BF520(this, "Silencer");
    return sub_100C1600(this, v5, 1);
  }
  return result;
}
