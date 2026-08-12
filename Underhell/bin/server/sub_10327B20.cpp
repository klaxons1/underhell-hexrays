char __stdcall sub_10327B20(int a1)
{
  char result; // al

  sub_103944C0(a1);
  result = dword_10698344;
  if ( *(_DWORD *)(dword_10698344 + 48) )
  {
    if ( *(char **)(a1 + 92) == "weapon_ar2" || (result = sub_100D6240((_DWORD *)a1, "weapon_ar2")) != 0 )
      *(float *)(a1 + 1212) = 0.0;
  }
  return result;
}
