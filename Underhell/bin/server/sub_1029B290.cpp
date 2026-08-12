void __thiscall sub_1029B290(_DWORD *this, int a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = v3 - 1;
  *((_BYTE *)this + v3 + 1087) = 1;
  v5 = sub_102976E0(this, v3 - 1);
  sub_1029ADA0(this, v5, v4);
  sub_102984B0((int)this);
}
