int __thiscall sub_1004AE20(int this)
{
  int v2; // eax
  int result; // eax
  int v4; // [esp-8h] [ebp-Ch]
  int v5; // [esp-4h] [ebp-8h]
  int v6; // [esp-4h] [ebp-8h]

  if ( this )
    v2 = this + 1192;
  else
    v2 = 0;
  v5 = v2;
  v4 = this + 1196;
  sub_100F0920();
  result = sub_100F0010(v4, v5);
  if ( (_BYTE)result )
  {
    result = sub_100744B0(*(_DWORD *)(this + 1424));
    if ( result )
    {
      v6 = result;
      sub_100F0920();
      result = sub_100F0950(v6);
      *(_DWORD *)(this + 1452) = result;
      *(float *)(this + 1456) = 0.0066666668;
      *(float *)(this + 1460) = 0.0;
    }
  }
  return result;
}
