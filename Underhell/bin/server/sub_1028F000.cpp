int __cdecl sub_1028F000(
        int a1,
        float a2,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  unsigned int v11; // ecx
  float *v12; // eax
  float v14[3]; // [esp+8h] [ebp-Ch] BYREF

  v11 = 12;
  v12 = a3;
  while ( *(_DWORD *)((char *)v12 + (char *)&flt_106D8644 - (char *)a3) == *(_DWORD *)v12 )
  {
    v11 -= 4;
    ++v12;
    if ( v11 < 4 )
      goto LABEL_6;
  }
  flt_106D8644 = *a3;
  flt_106D8648 = a3[1];
  flt_106D864C = a3[2];
LABEL_6:
  if ( dword_106D8650 != a4 )
    dword_106D8650 = a4;
  if ( dword_106D8654 != a5 )
    dword_106D8654 = a5;
  if ( dword_106D8658 != a6 )
    dword_106D8658 = a6;
  if ( dword_106D865C != a7 )
    dword_106D865C = a7;
  if ( dword_106D8670 != a8 )
    dword_106D8670 = a8;
  if ( dword_106D8674 != a9 )
    dword_106D8674 = a9;
  if ( a10 )
  {
    sub_102923F0(a10);
  }
  else
  {
    v14[0] = 0.0;
    v14[1] = 0.0;
    v14[2] = 1.0;
    sub_102923F0(v14);
  }
  if ( a11 != byte_106D866C )
    byte_106D866C = a11;
  return sub_102823A0((int (__thiscall ***)(_DWORD))&dword_106D8638, a1, a2);
}
