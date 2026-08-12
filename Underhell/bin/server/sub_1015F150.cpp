void __fastcall sub_1015F150(int ArgList)
{
  double v1; // st5
  float v2; // [esp+10h] [ebp-4h]

  sub_1015EFA0((unsigned __int8)ArgList, "CBaseGameStats::Event_Credits\n", ArgList);
  v2 = 0.0;
  if ( byte_106B4AC3 )
  {
    v1 = *(float *)dword_106B31C8 - flt_106B4AD0;
    v2 = v1;
    if ( v1 < 0.0 )
    {
      Warning("EVENT_CREDITS with negative elapsed time (rt %f starttime %f)\n", *(float *)dword_106B31C8, flt_106B4AD0);
      v2 = 0.0;
    }
  }
  if ( !*(_DWORD *)(off_10627F88 + 4) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 72))(off_10627F88) )
    {
      *(_DWORD *)(off_10627F88 + 4) = (int)((double)*(int *)(off_10627F88 + 12) + v2);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)off_10627F88 + 164))(off_10627F88, 0);
    }
  }
}
