char __thiscall sub_1030CC30(int this, int a2)
{
  char result; // al
  int v4; // [esp+4h] [ebp-4h] BYREF

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 264))(this);
  if ( result && *(_BYTE *)(this + 3629) )
  {
    v4 = -3;
    sub_100332F0((int *)(this + 248), &v4);
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) & 0xFFFB);
    sub_101129A0((unsigned __int16 *)(this + 320), *(_WORD *)(this + 356) | 0x10);
    if ( *(_BYTE *)(this + 225) != 2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 480))(this, this + 225);
      *(_BYTE *)(this + 225) = 2;
    }
    result = sub_100457E0((_DWORD *)this, 93);
    *(_BYTE *)(this + 3629) = 0;
  }
  return result;
}
