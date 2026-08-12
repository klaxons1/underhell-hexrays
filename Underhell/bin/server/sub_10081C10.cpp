char __thiscall sub_10081C10(int this)
{
  char *v2; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v2 = sub_1001E280(Buffer, "[Nav] %s", "CAI_Navigator::ClearGoal()\n");
    sub_10029660(*(_DWORD **)(this + 4), (int)v2);
  }
  sub_100810C0((float *)this);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 44))(this);
  return 1;
}
