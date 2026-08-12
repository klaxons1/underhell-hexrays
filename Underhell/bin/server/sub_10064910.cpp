int *sub_10064910()
{
  int v0; // eax
  int *result; // eax
  int *v2; // esi
  int v3; // eax
  double v4; // [esp+0h] [ebp-8h] BYREF

  v0 = sub_10153490(LODWORD(v4));
  result = (int *)sub_101E94B0(v0);
  if ( result )
  {
    result = (int *)sub_100D7680(result);
    v2 = result;
    if ( result )
    {
      result = (int *)sub_100CF460(result);
      if ( result )
      {
        v4 = 0.5;
        v3 = sub_100CF460(v2);
        return sub_10064810((int *)(v3 + 1200), &v4);
      }
    }
  }
  return result;
}
