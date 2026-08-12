void sub_102734D0()
{
  int v0; // eax
  int v1; // [esp-4h] [ebp-20h]
  float v2; // [esp+4h] [ebp-18h]
  float v3; // [esp+8h] [ebp-14h]
  float v4; // [esp+10h] [ebp-Ch]

  if ( sub_10273440() && dword_10693630 )
  {
    v4 = *(float *)(dword_10693630 + 4);
    v3 = *(float *)(dword_10693630 + 12);
    v2 = *(float *)(dword_10693630 + 8);
    v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_10693628 + 804) + 12) + 4 * *(_DWORD *)dword_10693630);
    if ( byte_1069362E )
      v0 = sub_10123D90((char)"info_node_air", v1, v4, v2, v3, 0);
    else
      v0 = sub_10123D90((char)"info_node", v1, v4, v2, v3, 0);
    if ( v0 == 2 )
    {
      Msg("Worldcraft failed on creation...\n");
    }
    else if ( !v0 )
    {
      *(_DWORD *)(dword_10693630 + 60) = 2;
      sub_1008BCE0(dword_10693628);
      dword_10693630 = 0;
    }
  }
}
