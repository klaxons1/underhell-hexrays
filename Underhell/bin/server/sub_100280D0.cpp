int __thiscall sub_100280D0(_DWORD *this, float a2)
{
  const char *v3; // eax
  const char *v4; // ecx
  double v5; // st7
  double v6; // st6
  double v7; // st6
  double v8; // st6
  double v9; // st6
  double v10; // st6
  char *v11; // eax
  int result; // eax
  const char *v13; // [esp+8h] [ebp-150h]
  double v14; // [esp+Ch] [ebp-14Ch]
  double v15; // [esp+14h] [ebp-144h]
  double v16; // [esp+1Ch] [ebp-13Ch]
  double ArgList; // [esp+24h] [ebp-134h]
  double v18; // [esp+2Ch] [ebp-12Ch]
  double v19; // [esp+34h] [ebp-124h]
  char Buffer[256]; // [esp+40h] [ebp-118h] BYREF
  float v21[3]; // [esp+140h] [ebp-18h] BYREF
  int v22[2]; // [esp+14Ch] [ebp-Ch] BYREF
  float v23; // [esp+154h] [ebp-4h]

  v19 = (double)qword_10690DD8 * g_ClockSpeedMillisecondsMultiplier;
  v18 = (double)qword_10690DD0 * g_ClockSpeedMillisecondsMultiplier;
  ArgList = (double)qword_10690DF0 * g_ClockSpeedMillisecondsMultiplier;
  v16 = (double)qword_10690DE8 * g_ClockSpeedMillisecondsMultiplier;
  v15 = (double)qword_10690DE0 * g_ClockSpeedMillisecondsMultiplier;
  v14 = (double)qword_10690DC8 * g_ClockSpeedMillisecondsMultiplier;
  v13 = *(const char **)(this[531] + 44);
  v3 = (const char *)sub_100D6390(this);
  DevMsg(
    "%s thinking for %.02fms!!! (%s); r%.2f (c%.2f, pst%.2f, ms%.2f), p-r%.2f, m%.2f\n",
    v3,
    a2,
    v13,
    v14,
    v15,
    v16,
    ArgList,
    v18,
    v19);
  if ( *(_DWORD *)(dword_10690FCC + 48) )
  {
    v21[0] = 0.5;
    v21[1] = 0.5;
    v21[2] = 1.0;
    sub_101117D0(v21, v22);
    v4 = "unknown";
    v23 = v23 + 16.0;
    v5 = -1.0;
    v6 = (double)qword_10690DE0 * g_ClockSpeedMillisecondsMultiplier;
    if ( v6 > -1.0 )
    {
      v5 = v6;
      v4 = "Conditions";
    }
    v7 = (double)qword_10690DE8 * g_ClockSpeedMillisecondsMultiplier;
    if ( v7 > v5 )
    {
      v5 = v7;
      v4 = "Pre-think";
    }
    v8 = (double)qword_10690DF0 * g_ClockSpeedMillisecondsMultiplier;
    if ( v8 > v5 )
    {
      v5 = v8;
      v4 = "Schedule";
    }
    v9 = (double)qword_10690DD0 * g_ClockSpeedMillisecondsMultiplier;
    if ( v9 > v5 )
    {
      v5 = v9;
      v4 = "Post-run";
    }
    v10 = (double)qword_10690DD8 * g_ClockSpeedMillisecondsMultiplier;
    if ( v10 > v5 )
    {
      v5 = v10;
      v4 = "Move";
    }
    v11 = sub_1001E280(Buffer, "Slow %.1f, %s %.1f ", a2, v4, v5);
    sub_1011CF30((int)v22, (int)v11, 0, 1.0);
  }
  result = dword_10690F84;
  if ( *(_DWORD *)(dword_10690F84 + 48) )
    return sub_100439E0(this);
  return result;
}
