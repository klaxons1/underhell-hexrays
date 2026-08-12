int __thiscall sub_103EE640(int this, int a2)
{
  int v3; // eax
  int *v4; // ecx
  int v5; // esi
  int v6; // eax
  int result; // eax
  float v8; // [esp+0h] [ebp-5Ch]
  int v9[19]; // [esp+10h] [ebp-4Ch] BYREF

  if ( *(_BYTE *)(this + 461) )
  {
    v3 = this - 1484;
    if ( *(_BYTE *)(this - 1400) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(v3 + 24);
      if ( v4 )
        sub_100194B0(v4, 1945);
    }
    *(_BYTE *)(this + 461) = 0;
  }
  sub_10267DA0(this, a2);
  v5 = this - 1484;
  sub_103EAF40((_DWORD *)(this - 1484));
  *(_BYTE *)(this + 252) = 0;
  *(float *)(this + 444) = *(float *)(dword_106B31C8 + 12);
  *(float *)(this + 448) = *(float *)(dword_106B31C8 + 12);
  v6 = sub_101679A0((int)"no_seagulls_on_jeep");
  result = sub_10167A00(v6);
  if ( !result )
  {
    sub_10072560(v9);
    sub_10070FE0(v9, 700);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(this - 1484);
    sub_10072770(v9, (float *)(v5 + 580), 4500.0);
    if ( (*(_DWORD *)(v5 + 252) & 0x800) != 0 )
      sub_100DAE60(v5);
    if ( sub_10072EC0((float *)(v5 + 580), v9) )
    {
      v8 = *(float *)(dword_106B31C8 + 12) + 10.0;
      sub_100EC3F0((_DWORD *)v5, (int)sub_103ED740, v8, off_10682B0C);
    }
    return sub_100725D0(v9);
  }
  return result;
}
