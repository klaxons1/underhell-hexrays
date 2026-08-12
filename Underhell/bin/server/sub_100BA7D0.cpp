int __cdecl sub_100BA7D0(int a1, float *a2)
{
  int result; // eax
  float v3; // edx
  float v4; // [esp+8h] [ebp-4h]

  if ( !a1 )
    return Warning("GetEyePosition() Can't get pstudiohdr ptr!\n");
  v3 = *(float *)(*(_DWORD *)a1 + 84);
  v4 = *(float *)(*(_DWORD *)a1 + 88);
  result = (int)a2;
  *a2 = *(float *)(*(_DWORD *)a1 + 80);
  a2[1] = v3;
  a2[2] = v4;
  return result;
}
