void __thiscall sub_100AF1A0(int this)
{
  double v2; // st7
  double v3; // st6
  float v4; // [esp+Ch] [ebp-8h]

  v2 = *(float *)off_103DC81C - *(float *)(this + 2488);
  if ( v2 < 0.0 )
  {
    Warning(
      "EVENT_LEVELSHUTDOWN:  with negative elapsed time (rt %f starttime %f)\n",
      *(float *)off_103DC81C,
      *(float *)(this + 2488));
    v2 = 0.0;
  }
  if ( *(_BYTE *)(this + 2475) )
  {
    v3 = *(float *)(this + 2428);
    ++*(_DWORD *)(this + 2432);
    *(float *)(this + 2428) = v3 + v2;
    v4 = v2;
    ((void (__stdcall *)(_DWORD))(*off_103E0700)[8])(LODWORD(v4));
    if ( !((unsigned __int8 (__thiscall *)(int (***)()))**off_103E0700)(off_103E0700) )
    {
      sub_100AE8F0((_DWORD *)this, 0);
      if ( ((unsigned __int8 (__thiscall *)(int (***)()))(*off_103E0700)[2])(off_103E0700) )
        sub_100AED80((_DWORD *)this);
    }
    *(_BYTE *)(this + 2475) = 0;
  }
}
