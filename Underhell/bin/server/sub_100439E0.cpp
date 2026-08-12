void sub_100439E0()
{
  int v0; // edi
  __int64 *v1; // esi

  DevMsg(" Tasks timings:\n");
  v0 = 0;
  if ( dword_10691C50 > 0 )
  {
    v1 = (__int64 *)&dword_10691CB0;
    do
    {
      DevMsg(
        "   %32s -- select %5.2f, start %5.2f, run %5.2f\n",
        *((const char **)v1 - 4),
        (double)*(v1 - 1) * g_ClockSpeedMillisecondsMultiplier,
        (double)*v1 * g_ClockSpeedMillisecondsMultiplier,
        (double)v1[1] * g_ClockSpeedMillisecondsMultiplier);
      ++v0;
      v1 += 4;
    }
    while ( v0 < dword_10691C50 );
  }
}
