int __thiscall sub_1023F2A0(int *this, char a2)
{
  int v2; // esi

  v2 = (int)(this - 1);
  sub_102375F0(this + 8);
  sub_102375F0((int *)(v2 + 16));
  sub_10170190((_DWORD *)(v2 + 4));
  if ( (a2 & 1) != 0 )
    sub_10184660(v2);
  return v2;
}
