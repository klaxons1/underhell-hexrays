int __cdecl sub_101C4F30(int a1, _DWORD *a2)
{
  int **v2; // eax
  int v3; // ecx
  int *v4; // edx

  if ( *a2 != -1 )
  {
    v2 = (int **)&off_1061BE18[4 * (*a2 & 0xFFF) + 1];
    v3 = *a2 >> 12;
    if ( off_1061BE18[4 * (*a2 & 0xFFF) + 2] == v3 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        if ( off_1061BE18[4 * (*a2 & 0xFFF) + 2] == v3 && v4 && a1 )
          sub_100EA9A0(v4, 1);
      }
    }
  }
  *(_DWORD *)(a2[1] + 8) = a2[2];
  *(_DWORD *)(a2[2] + 4) = a2[1];
  --dword_106BA694;
  return sub_1042FBE0(a2);
}
