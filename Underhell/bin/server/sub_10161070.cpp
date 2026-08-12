void __thiscall sub_10161070(int this)
{
  int v2; // ecx
  double v3; // st7
  double v4; // st6
  float v5; // [esp+Ch] [ebp-8h]

  v2 = dword_106B31C8;
  v3 = *(float *)dword_106B31C8 - *(float *)(this + 2488);
  if ( v3 < 0.0 )
  {
    Warning(
      "EVENT_LEVELSHUTDOWN:  with negative elapsed time (rt %f starttime %f)\n",
      *(float *)dword_106B31C8,
      *(float *)(this + 2488));
    v3 = 0.0;
    v2 = dword_106B31C8;
  }
  if ( *(_BYTE *)(this + 2475) && *(_DWORD *)(v2 + 72) != 3 )
  {
    v4 = *(float *)(this + 2428);
    ++*(_DWORD *)(this + 2432);
    *(float *)(this + 2428) = v4 + v3;
    v5 = v3;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)off_10627F88 + 32))(LODWORD(v5));
    if ( (**(unsigned __int8 (__thiscall ***)(int))off_10627F88)(off_10627F88) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 188))(off_10627F88) )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)off_10627F88 + 164))(off_10627F88, 1);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 208))(off_10627F88) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 168))(off_10627F88);
        *(_BYTE *)(this + 2475) = 0;
        return;
      }
    }
    else
    {
      sub_1015F8C0((_DWORD *)this, 0);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)off_10627F88 + 8))(off_10627F88) )
        sub_10160360((_DWORD *)this);
    }
    *(_BYTE *)(this + 2475) = 0;
  }
}
