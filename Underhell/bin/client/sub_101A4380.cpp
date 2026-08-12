int sub_101A4380()
{
  if ( (dword_1044BFB0 & 1) == 0 )
  {
    dword_1044BFB0 |= 1u;
    sub_1009AED0((int)&unk_1044BF38, (int)"should_never_see_this", 0, 4, 0, 0);
    sub_1009AD30((int)&unk_1044BF74, (int)"baseclass", 0, 0, (int)off_103D8844, (int)sub_1009AE70);
  }
  sub_1009AC10(dword_1044BFB4, (int)&unk_1044BF74, 1, (int)"DT_CrossbowBolt");
  return 1;
}
