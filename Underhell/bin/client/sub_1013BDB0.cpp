int __thiscall sub_1013BDB0(_DWORD *this, int a2)
{
  int v3; // esi
  int v4; // edi
  void *v5; // eax
  double ArgList; // [esp+0h] [ebp-6Ch]
  char Buffer[64]; // [esp+24h] [ebp-48h] BYREF
  int v9; // [esp+64h] [ebp-8h]
  int v10; // [esp+68h] [ebp-4h]

  v3 = 0;
  if ( sub_10229D00(32) )
  {
    v4 = sub_10229D20(a2);
    v10 = v4;
  }
  else
  {
    v10 = 0;
    v4 = 0;
  }
  sub_1022ACA0("flags", this[308]);
  if ( sub_10229D00(32) )
    sub_10229D20("keyframe");
  v9 = this[303];
  if ( v9 > 0 )
  {
    do
    {
      sub_1022BC60(v4);
      ArgList = **(float **)(this[300] + 4 * v3);
      sub_10228370(Buffer, 0x40u, "%f %f %f", SLOBYTE(ArgList));
      sub_1022ABA0("angles", Buffer);
      sub_1022ACC0("time", *(float *)(*(_DWORD *)(this[300] + 4 * v3) + 12));
      sub_1022ACA0("flags", *(_DWORD *)(*(_DWORD *)(this[300] + 4 * v3) + 16));
      v4 = v10;
      ++v3;
    }
    while ( v3 < v9 );
  }
  if ( dword_10413188 )
    v5 = (void *)(dword_10413188 + 4);
  else
    v5 = 0;
  sub_1022B3B0(v5, a2, 0);
  return sub_1022AF00(v4);
}
