char __thiscall sub_100AE7C0(int this, int a2, int a3)
{
  int v4; // esi
  int v6; // esi
  float v7; // [esp+0h] [ebp-10h]
  float v8; // [esp+Ch] [ebp-4h]
  float v9; // [esp+1Ch] [ebp+Ch]

  if ( a3 )
  {
    if ( a3 == 1 && *(int *)(this + 2432) > 0 )
    {
      if ( sub_10229D00(32) )
        v4 = sub_10229D20("playtime");
      else
        v4 = 0;
      sub_1022ACA0("TotalLevelTime", (int)*(float *)(this + 2428));
      sub_1022ACA0("NumLevels", *(_DWORD *)(this + 2432));
      sub_1022A7C0(v4);
      return 1;
    }
    return 0;
  }
  if ( !*(_BYTE *)(this + 2412) )
    return 0;
  if ( sub_10229D00(32) )
    v6 = sub_10229D20("perfdata");
  else
    v6 = 0;
  v9 = sub_100AE5A0((char *)this, 0);
  v8 = sub_100AE620((char *)this, 0);
  v7 = sub_100AE560((void *)this, 0);
  sub_1022ACC0("AvgFPS", v7);
  sub_1022ACC0("MinFPS", v9);
  sub_1022ACC0("MaxFPS", v8);
  sub_1022A7C0(v6);
  return 1;
}
