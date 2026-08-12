char __cdecl sub_10175EC0(int a1, int a2, int a3, float *a4)
{
  int v4; // eax
  float v6[3]; // [esp+4h] [ebp-18h] BYREF
  float v7[3]; // [esp+10h] [ebp-Ch] BYREF

  if ( a1 == -1 || a2 < 1 )
  {
    if ( a3 )
    {
      *(float *)a3 = flt_10459240;
      *(_QWORD *)(a3 + 4) = qword_10459244;
    }
    if ( a4 )
    {
      *a4 = 0.0;
      a4[1] = 0.0;
      a4[2] = 0.0;
    }
    return 0;
  }
  v4 = sub_1007A730(off_103DCD78, a1);
  if ( !v4 )
    return 0;
  (*(void (__thiscall **)(int, int, float *, float *))(*(_DWORD *)v4 + 148))(v4, a2, v7, v6);
  if ( a3 )
  {
    *(float *)a3 = v7[0];
    *(float *)(a3 + 4) = v7[1];
    *(float *)(a3 + 8) = v7[2];
  }
  if ( a4 )
  {
    *a4 = v6[0];
    a4[1] = v6[1];
    a4[2] = v6[2];
  }
  return 1;
}
