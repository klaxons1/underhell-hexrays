int sub_101AAF50()
{
  if ( (dword_1044CDCC & 1) == 0 )
  {
    dword_1044CDCC |= 1u;
    sub_1009AED0((int)&unk_1044CD18, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044CD54, (int)"baseclass", 0, 0, (int)off_103E0698, (int)sub_1009AE70);
    sub_1009AD30((int)&unk_1044CD90, (int)"hl2_gamerules_data", 0, 0, (int)dword_1044D474, (int)sub_101B9920);
  }
  sub_1009AC10(dword_1044D490, (int)&unk_1044CD54, 2, (int)"DT_HalfLife2Proxy");
  return 1;
}
