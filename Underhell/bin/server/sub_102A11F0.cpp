void __thiscall sub_102A11F0(_DWORD *this, int a2)
{
  int v3; // edi
  char *v4; // eax
  int v5; // [esp-4h] [ebp-Ch]

  v5 = a2;
  v3 = this[1];
  this[28] = a2;
  v4 = (char *)sub_100BE1F0(v3, v5);
  *(_DWORD *)(v3 + 2704) = *sub_10162BE0(&a2, v4);
  sub_102A1060((int)this);
}
