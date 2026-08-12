bool __thiscall sub_1008F830(_DWORD *this, float *a2, float *a3, char a4)
{
  bool result; // al
  int v6[14]; // [esp+18h] [ebp-38h] BYREF

  result = 1;
  if ( ((a4 & 1) == 0 || !sub_1008F730(this, 0, a2, a3)) && ((a4 & 4) == 0 || !sub_1008F730(this, 2, a2, a3)) )
  {
    if ( (a4 & 2) == 0
      || (memset(v6, 0, sizeof(v6)),
          sub_1007C550(*(_DWORD **)(this[1] + 2600), 1, a2, a3, 33701899, 0, 100.0, 0, (float *)v6),
          v6[0] < 0)
      && (sub_1007C550(*(_DWORD **)(this[1] + 2600), 1, a3, a2, 33701899, 0, 100.0, 0, (float *)v6), v6[0] < 0) )
    {
      if ( (a4 & 8) == 0 )
        return 0;
      memset(v6, 0, sizeof(v6));
      sub_1007C550(*(_DWORD **)(this[1] + 2600), 3, a2, a3, 33701899, 0, 100.0, 0, (float *)v6);
      if ( v6[0] < 0 )
        return 0;
    }
  }
  return result;
}
