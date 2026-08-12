void __cdecl sub_10123FE0(int a1, int a2)
{
  double v2; // st7
  float v3; // [esp+8h] [ebp+8h]

  v2 = *(float *)(a1 + 4);
  v3 = *(float *)(a1 + 4);
  if ( *(float *)(a2 + 1236) != v2 )
  {
    if ( *(_DWORD *)(a2 + 1236) != LODWORD(v3) )
      *(float *)(a2 + 1236) = v2;
    sub_1008F760((int *)(a2 + 352));
  }
}
