char __thiscall sub_10058460(_DWORD *this, int *a2)
{
  int *v2; // esi
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  _DWORD *v7; // esi

  v2 = a2;
  LOBYTE(v4) = sub_10050D80(a2, (int *)&a2);
  if ( (_BYTE)v4 )
  {
    v4 = sub_10050F60(this);
    if ( v4
      || *(_DWORD *)(dword_106B31C8 + 20) == 1
      && (v5 = *v2, v6 = sub_10261B20(), v4 = (*(int (__thiscall **)(int *, int))(v5 + 1080))(v2, v6), v4 == 3)
      && (v7 = (_DWORD *)sub_10261B20(), LOBYTE(v4) = sub_10050F30(this, v7), v7) )
    {
      LOBYTE(v4) = sub_10057960((int)a2, this, 0);
    }
  }
  return v4;
}
