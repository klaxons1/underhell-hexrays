char __thiscall sub_1027FAA0(int this)
{
  int v2; // edi
  float v4; // [esp+Ch] [ebp-4h] BYREF

  if ( !*(_BYTE *)(this + 1144) )
    Warning("ERROR: Shotgun Reload called incorrectly!\n");
  v2 = sub_100D1940((_DWORD *)this);
  if ( !v2
    || sub_100CF5D0((_DWORD *)v2, *(_DWORD *)(this + 1192)) <= 0
    || *(_DWORD *)(this + 1200) >= (*(int (__thiscall **)(int))(*(_DWORD *)this + 1216))(this)
    || sub_100CF5D0((_DWORD *)v2, *(_DWORD *)(this + 1192)) <= 1
    && sub_100CF5D0((_DWORD *)v2, *(_DWORD *)(this + 1192)) <= 0 )
  {
    return 0;
  }
  sub_1027E380((int *)this);
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)this + 1132))(this, 7, 0.0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 183);
  sub_1002ABA0((float *)(v2 + 1672), (float *)(dword_106B31C8 + 12));
  sub_100D18C0(this);
  v4 = *(float *)(dword_106B31C8 + 12) + 0.0;
  sub_100D2D00((float *)(this + 1132), &v4);
  return 1;
}
