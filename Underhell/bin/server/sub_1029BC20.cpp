char __thiscall sub_1029BC20(_DWORD *this, void *a2)
{
  int v3; // eax

  LOBYTE(v3) = sub_1029BBA0(a2, (int *)&a2);
  if ( (_BYTE)v3 )
  {
    v3 = sub_10050F60(this);
    if ( v3 )
      LOBYTE(v3) = sub_10057960((int)a2, this, 0);
  }
  return v3;
}
