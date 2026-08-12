int __thiscall sub_102A1230(int this, int a2, int a3, int a4)
{
  if ( *(_DWORD *)(this + 16) )
  {
    sub_1029FA70((int *)this);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 320))(this);
    sub_10044510(*(_DWORD *)(this + 4), (int)"ai_behavior_passenger: teleport while in vehicle");
    *(_BYTE *)(this + 100) = 0;
    *(_DWORD *)(this + 68) = -1;
  }
  return sub_1004B700((_DWORD **)this);
}
